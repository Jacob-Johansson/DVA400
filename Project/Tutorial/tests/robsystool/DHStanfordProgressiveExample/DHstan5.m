addpath(genpath('/MATLAB Drive/DVA400/robsystool'));

clear all
d1 = 0.2;
d2 = 0.2;

dhparams.a =     [0,0,0,0,0]';
dhparams.d =     [d1,d2,0,0,0]';
dhparams.alpha = [-pi/2,pi/2,0,-pi/2,pi/2]';
dhparams.theta = [0,0,-pi/2,0,0]';

jointsType = {'revolute','revolute','prismatic','revolute','revolute'};

robot = robotFromDH(dhparams,jointsType);

% HOME POSITION IS CHANGED
robot.Bodies{5}.Joint.HomePosition = -pi/2;
initState = robot.homeConfiguration;

close all
figWindow = [896 581 896 443];
set(gcf,'units','points','position',figWindow);

show(robot, initState, 'PreservePlot', false);

moveJoints(robot,5,initState)


