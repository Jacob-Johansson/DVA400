%==========================================================================
% File: cartesianControl6Rmain.m
% Author: Gabriele Gualandi     Date: 2023/02     Ver: 1.22
% Mälardalens University - Course in Industrial Robotics
%==========================================================================

%% Execute this Section to initialize
addpath(genpath('/MATLAB Drive/DVA400'));
clear 
close all

myRob = loadrobot("abbIrb120");
nJoints = 6;
myRob.DataFormat = 'column';


%% Execute this section to set the simulation parameters.
% After executing this section, you can run one of the two following simulink files:
% cartesianControl6Rgeometric.slx (for the ANALYTICAL Jacobian implementation)
% cartesianControl6RanalyticalJ.slx (for the GEOMETRIC Jacobian implementation)
%
% In both files, it is considered the pick and place task to move the robot hand from
% point A to B in a straight line.
% The planner includes two options for the time law: a linear
% interpolation, and a polyonmial of order 3, delivering continuity in the
% velocity

%degreesInitial = 0;
%degreesFinal = 100;

%%%%%% Parameters for the path of the hand (time is still not considered)
%%%%%%%%%%% Parameters for the INITIAL state
% Define the two points in a plane
degreesInitial = 5;
degreesFinal = 180-degreesInitial;
radius = 0.5;
pe_i_ideal = radius * [cos(deg2rad(degreesInitial)); sin(deg2rad(degreesInitial))];
pe_f = radius * [cos(deg2rad(degreesFinal)); sin(deg2rad(degreesFinal))];
zHeight_ideal = 0.2;
pe_i_ideal = [ pe_i_ideal; zHeight_ideal]; % add z component
pe_f = [pe_f; zHeight_ideal];

% desired initial and final rototranslation
orie_i = eye(3); % Desired initial orientation (used in Simulink)

% Desired final orientation (used in Simulink) 
%orie_f = eye(3);
orie_f = tform2rotm(makehgtform('yrotate',pi/2));


% Define ideal INITIAL rototranslation:
% initial orientation is eye(3), initial translation is 'pe_i_ideal'
initialPose_ideal = makehgtform('translate',pe_i_ideal); %

% Solve an inverse kinematic problem, in order to pose the robot 
% as close as possible to the ideal initial rototranlation
ik = inverseKinematics('RigidBodyTree', myRob);
weights = [0.1, 0.1, 0.1, 1, 1, 1]'; % Gives more importance to the position. This is a common practice.
initialguess = myRob.homeConfiguration;
[configSol,solInfo] = ik(myRob.Bodies{end}.Name, ...
                         initialPose_ideal, ...
                         weights, ...
                         initialguess);

% always check solInfo! The quality of the solution may be not good enough!

q0 = configSol; % the obtained INITIAL value for the joints (Simulink will use this)
% q0 may not correspond exactly to the ideal INITIAL pose. We must indeed 
% compute the *actual* rototraslation of the hand from the joint
% solution obtained from inverse kinematic
initialPose = myRob.getTransform(q0, myRob.Bodies{end}.Name);
pe_i = transpose(tform2trvec(initialPose)); % we refine the *ideal* solution into the *actual one*
orie_i = tform2rotm(initialPose); % the same applies for the INITIAL orientation


%%%%%% PARAMETERS FOR THE TIME LAW
t_i = 0; % Initial instant
t_f = 5; % Final instant

% Controller parameters
sizeTaskSpace = 6;
Kp = eye(sizeTaskSpace,sizeTaskSpace);


%% EXECUTE THE SIMULINK MODEL 
%
% After the simulink simulation, execute this section to create a new
% figure
close all
figure();  

%%
% By executing just this Section, you re-draw the robot motion in the same
% figure previusly created

numSamples = size(out.q,3); % assuming joint value is exported as array
jointsValueMat = reshape(out.q,[nJoints,numSamples]);

sampleTime = 0.001;

handtrace = true;
showRobStates(myRob,jointsValueMat,sampleTime,'handtrace',handtrace,'showedFPS',60,'PreservePlot',false);


%%
% It is wise to always compare the final obtained pose with the one defined
% for your task (in particular the orientation).
% In this way you can detect multiple bugs, e.g., due to wrong interpretation of Euler
% angles (" Huston, we have a problem... Oh, I see... with RPY you mean *fixed* frame!")
obtainedFinalHT = myRob.getTransform(jointsValueMat(:,end),myRob.Bodies{end}.Name)
orie_f

