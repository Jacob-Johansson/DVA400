clc
clear all
close all
sampleTime = 0.005;

% PD gravity compensation control scheme for a regulation task
% NOTE: as done in the other labs, you must add a line using addpath('...') command to give visibility to the function 'showRobStates.m'

% Robot
% Load a Matlab Robot
myRob = loadrobot("universalUR5");
myRob.DataFormat = 'column';
myRob.Gravity = [0,0,-9.81]';
nJoints = 6;

% Task initial state and final configuration
q0 = [2.6016    3.9410   -1.1573   -2.3712   -1.9481    2.0898]';
q0dot = zeros(nJoints,1);

qF = [4.5374    3.2896    2.3615    4.6651   -4.1118    4.4010]';
% qFdot is implicitely zero (regulation task)

% Controller params
Kp = 5 * eye(nJoints,nJoints);

% Possibly, simulates model inaccuracies
noiseMagnitude = 0.001;
rng(1234); % select seed to render repetible random number generation
randomMatrix = wgn(nJoints,nJoints,1); 
distortionMatrix = eye(nJoints,nJoints) + noiseMagnitude * randomMatrix;


%%
% Draw the robot initial and final states
close all
show(myRob, q0)
hold on
show(myRob, qF); %

%%
out = sim('gravityComp.slx') % as an alternative to "press play" on simulink

%% SECTION 3a: by executing just this Section, we re-draw the robot
numSamples = size(out.q,1);

jointsValueMat = transpose(out.q);
showRobStates(myRob,jointsValueMat,sampleTime);
