%==========================================================================
% File: RPR2023.m
% Author: Gabriele Gualandi     Date: 2023/02     Ver: 1.2
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
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

moveJoints(robot,[3],init_q);