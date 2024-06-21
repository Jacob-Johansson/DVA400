%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/04     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
%==========================================================================
% Initialization for a demo of Pick and Place task between three points
%
% After executing this file, run either
% testPoly5PnP_lines.m
% or
% testPoly5PnP_lines_simulink.slx

clc
clear all

samplingTime = 0.008;

% Define points
pA = [1.5; 3];
pB = [5; 6];
pC = [5; 0];

% Define durations of segments motion
% A-B
t_iAB = 1;
t_fAB = 4; % Duration of BA is 3 seconds
% B-C
t_iBC = t_fAB; % time-continuity
t_fBC = 8; % Duration of BC is 4 seconds
% C-A
t_iCA = t_fBC; % time-continuity
t_fCA = 9; % Duration of BC is 1 second


