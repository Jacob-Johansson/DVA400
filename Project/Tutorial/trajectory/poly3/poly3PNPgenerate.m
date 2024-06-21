%==========================================================================
% File: poly3PNPgenerate.m
% Author: Gabriele Gualandi     Date: 2021/02     Ver: 1.0
% Mälardalens Högskola - Course in Industrial Robotics
%==========================================================================

% Generates a 'text' version (i.e., to be copied/pasted) of a polynomial of
% degree 3, where the initial and final velocity is 0.
% This may be adapt for a 'pick and place task', where the hand starts still and
% ends still.
%
% see 'poly3generateSym.m' and 'poly3' for more details

clc
clear all
syms q_i q_f dq_i dq_f
syms t_i t_f
syms t

% conditionsValue: [q_i q_f dq_i dq_f]
% conditionsTime: [t_i t_f t]

%% Not normalized version, (i.e., it is inteded as trajectory)
conditionsValue = [q_i q_f 0 0];
conditionsTime = [t_i t_f];
qNow = poly3(conditionsValue,[conditionsTime],t)

%% "doubly" normalized (i.e., it is inteded as a time law). In this case 't'
% is intended as 'tau', and the polynomial produces 'sigma(tau)'
conditionsValue = [0 1 0 0];
conditionsTime = [0 1];
qNowNorm = poly3(conditionsValue,[conditionsTime],t)