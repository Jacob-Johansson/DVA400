addpath(genpath('/MATLAB Drive/DVA400/robsystool'));

clear all
d1 = 0.3;
d2 = 0.2;
d6 = 0.15;

dhparams.a =     [0,0,0,0,0,0]';
dhparams.d =     [d1,d2,0,0,0,d6]';
dhparams.alpha = [-pi/2,pi/2,0,-pi/2,pi/2,0]';
dhparams.theta = [0,0,-pi/2,0,0,0]';

jointsType = {'revolute','revolute','prismatic','revolute','revolute','revolute'};

robot = robotFromDH(dhparams,jointsType);

% HOME POSITION IS CHANGED
%robot.Bodies{5}.Joint.HomePosition = -pi/2;
%initState = robot.homeConfiguration;
%initState = [0 0 0 0 0 0]';

initState = [0 0 0.3 0 0 0]';
%initState = [0 0 0.5 pi/4 0 0]';
%initState = [0 0 0.3 pi/8 pi/4 0]';

close all
figWindow = [896 581 896 443];
set(gcf,'units','points','position',figWindow);

%%
close
show(robot, initState, 'PreservePlot', false);
moveJoints(robot,6,initState)

