%==========================================================================
% File: moveJoints.m
% Author: Gabriele Gualandi     Date: 2021/02     Ver: 1.1
% Mälardalens Högskola - Course in Industrial Robotics
%==========================================================================
%
% MOVEJOINTS(robot,jointsToMove,initState,[COMposition])
% It invokes iteratively SHOWROBSTATES (see its help).
%
% See also SHOWROBSTATES GENERATESTATEOSCILLATIONS
%
function moveJoints(robot,jointsToMove,initState,varargin)
hold on % prevent to reset zoom and improves FPS

animDuration = 1; % seconds duration of a single animation
numSamples = 160;  % desired samples for a single animation. For better results, should be greater than the FPS used by showRobState

try
    [sequenceOfStates] = generateStateOscillation(initState,numSamples,pi/10,jointsToMove);
catch e
    warning('Usage: moveJoints(*robot handle*, * array of the joint to move *, *initial state*)');
    throw(e);
end

numOfRipetitionsOfAnimation = 2;
sampleRate = animDuration/numSamples;

for i = 1:numOfRipetitionsOfAnimation
    if ~isempty(varargin) % COMs are drawn
        oldComsCircles = showRobStates(robot,sequenceOfStates,sampleRate,varargin{:}); % varargin passtrough

        %if i<numOfRipetitionsOfAnimation % Don't delete at the last state
            for j = 1:numel(oldComsCircles)
                delete(oldComsCircles(j));
            end
        %end
    else
        showRobStates(robot,sequenceOfStates,sampleRate,varargin{:});
    end
end
end
