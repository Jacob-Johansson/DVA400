addpath(genpath('/MATLAB Drive/DVA400/robsystool'));
clear 
close all

% Constant parameters
L1 = 0.6;
L1_bar = 0.1;
L3 = 0.4;

% Joint variables must be 0
d       = [L1,  0, -L3];
theta   = [0,   0, 0];
a       = [L1_bar,  0, 0];
alpha   = [pi/2, -pi/2, pi];


jointsType = {'revolute','prismatic','revolute'};

dhparams = ...
    struct('a',a, 'alpha',alpha,'d',d,'theta',theta);
robot = robotFromDH(dhparams,jointsType);

show(robot);

%%

init_q = [0,0,0]';

moveJoints(robot,[1],init_q);