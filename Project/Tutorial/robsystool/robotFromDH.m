%==========================================================================
% Author: Gabriele Gualandi     Date: 2022/02     Ver: 1.2
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================

function robot = robotFromDH(dhparams,jointsType,varargin)
% [myRob] = ROBOTFROMDH(dhparams,jointsType)
% IN:
% dhparams: struct having fields: a alpha d theta, each of them carrying is a vector of size n
% jointsType: cell of size n, having elements 'revolute' or 'prismatic'
% OUT:
% robot: a Matlab rigidBodyTree object
%
% Following the Matlab's convenction for DH tables, the value of parameters
% containig joint variable (e.g., theta, when joints are revolute) are
% IGNORED (i.e., assumed 0).
% From matlab documentation: https://www.mathworks.com/help/robotics/ref/rigidbodyjoint.setfixedtransform.html
% For revolute joints, the theta input is ignored when specifying the fixed transformation between joints because that angle is dependent on the joint configuration. For prismatic joints, the d input is ignored.
%
% See also RIGIDBODYTREE, DHfromSymToNumeric, DHfillSymJointsVars
%
numJoints = numel(jointsType);

if ~isstruct(dhparams) || ~ all(isfield(dhparams,{'a','alpha','d','theta'})) || ~(numel(dhparams.a) == numJoints) || ~(numel(dhparams.alpha) == numJoints) || ~(numel(dhparams.d) == numJoints) || ~(numel(dhparams.theta) == numJoints)
    error( 'The input dhparams must be a struct with fields ''d'',''alpha'',''a'',''theta'' (which are rows, or columns with size n, where n is the number of joints)');
end

dhparams = verifyDHtableForMatlab(dhparams,jointsType);

%% Create robot tree. This will create also the base body (body 0) with name 'base'
robot = rigidBodyTree('DataFormat','column');

nameLinks = cell(numJoints,1);
nameJoints = cell(numJoints,1);
for i = 1:numJoints
    nameLinks{i} = ['link',num2str(i)];
    nameJoints{i} = ['joint',num2str(i)];
end

numFrames = numJoints + 1;
for i =  1 : numFrames - 1 % iterates bodies (links). Body 0 (base) was already created
    linkNow = rigidBody(nameLinks{i}); % Create a body and assign a name
    jointNow = rigidBodyJoint(nameJoints{i},jointsType{i}); % create a joint (specifying the type) and assign a name

    DHrow = [dhparams.a(i), dhparams.alpha(i), dhparams.d(i), dhparams.theta(i)]; % Matlab uses order: [a alpha d theta]
    jointNow.setFixedTransform(DHrow,'dh'); % assign a row of the DH table to the joint (i.e., describes how to joint is positioned wrt the previous body) order: [a alpha d theta]
     linkNow.Joint = jointNow; % assign the joint to the body

    % Specify what is the previous body of the current body
    % The dhParams line will then describe how current body is related to the previous
    if i == 1
        nameOfPreviousBody = 'base';
    else
        nameOfPreviousBody = nameLinks{i-1};
    end
    robot.addBody(linkNow,nameOfPreviousBody);
end
end


%%
function DHnumeric = verifyDHtableForMatlab(DH,jointsType)
% Verifies that joints variables are set to 0
DHnoJointsvar = DH;
hadWarningState = 0;
for i = 1:numel(jointsType)
    if strcmp(jointsType{i},'revolute') && ~(DHnoJointsvar.theta(i) == 0) 
        warning('Matlab model consistency check: the value of the DH parameter theta, element %i (revolute joint) is nonzero, and it will be ignored',i);
        hadWarningState = 1;
        DHnoJointsvar.theta(i) = 0;
    elseif  strcmp(jointsType{i},'prismatic') && ~(DHnoJointsvar.d(i) == 0)
        warning('Matlab model consistency check: the value of the DH parameter d, element %i (prismatic joint) is nonzero, and it will be ignored',i);
        hadWarningState = 1;
        DHnoJointsvar.d(i) = 0;
    end
end
if hadWarningState
    fprintf('Matlab Robotic System Toolbox does not support an offset in the joint variables.\nYou should set joint variables to 0 to avoid your consistency problems between the symbolic and the matlab model (e.g., use DHfromSymToNumeric)\n');
    fprintf('In Matlab Robotic System Toolbox, for revolute joints, the theta input is ignored when specifying the fixed transformation between joints because that angle is dependent on the joint configuration. For prismatic joints, the d input is ignored.\n');
    warning('Altough the symbolic model is fine with non-zero value (e.g., you are introducing an offset), you may have inconsistency problem with the Robotic System Toolbox model. One or more joint variables was found to be non zero in the DH table, and was setted to 0. Procede at your risk.');
    fprintf('In a future improvement this code may support offsets also for the Matlab model\n\n');
end

%% Verify that all the elements in the DH table are numeric and of the right size
numJoints = numel(jointsType);
hadWarningNum = 0 ;
DHnumeric = struct('a',[],'alpha',[],'d',[],'theta',[]);
for i = 1:numJoints
    DHfieldNames = {'a','alpha','d','theta'};
    for c = 1 : numel(DHfieldNames)
        fieldNow = DHfieldNames{c};
        try
            valNow = double(getfield(DHnoJointsvar,fieldNow));
            if ~(numel(jointsType)==numJoints)
                error('One of the fields of your DH table has the wrong size (size must be n, the number of joints)');
            end
            DHnumeric = setfield(DHnumeric,fieldNow, valNow);
        catch e
            fprintf('Matlab Robotic System Toolbox requires numeric value for the DH constants\n');
            error('I was not able to convert into double param  ''%s'', element %i - of the DH table. Possibly it is symbolic. It must be numeric.',fieldNow,c);
        end
    end
end

end
