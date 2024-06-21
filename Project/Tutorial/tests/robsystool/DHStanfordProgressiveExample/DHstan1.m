addpath(genpath('/MATLAB Drive/DVA400/robsystool'));

clear all
d1 = 0.2;

dhparams.a =     [0]';
dhparams.d =     [d1]';
dhparams.alpha = [-pi/2]';
dhparams.theta = [0]';

jointsType = {'revolute'};

robot = robotFromDH(dhparams,jointsType);

initState = robot.homeConfiguration;

close all
figWindow = [896 581 896 443];
set(gcf,'units','points','position',figWindow);

show(robot, initState, 'PreservePlot', false);

moveJoints(robot,1,initState)


