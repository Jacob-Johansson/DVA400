%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/02     Ver: 1.2
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
clear 
close all

% Constant parameters
a_2 = 0.5;
a_3 = 0.2;

d       = [0,  0, 0, 0];
theta   = [0,  0, 0, 0];
a       = [a_2, a_3, 0, 0];
alpha   = [0, pi, 0, 0];

dhparams = ...
    struct('a',a, 'alpha',alpha,'d',d,'theta',theta);

jointsType = {'revolute','revolute','prismatic','revolute'};
robot = robotFromDH(dhparams,jointsType);

show(robot);

init_q = [0,0,0,0].';
show(robot);

moveJoints(robot,[1],init_q);