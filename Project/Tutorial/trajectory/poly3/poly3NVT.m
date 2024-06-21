%==========================================================================
% File: poly3PNPgenerate.m
% Author: Gabriele Gualandi     Date: 2021/02     Ver: 1.0
% Mälardalens Högskola - Course in Industrial Robotics
%==========================================================================

% Generates an hard-coded version (i.e., to be copied/pasted) of a polynomial of
% degree 3, normalized in time (Nt) and value (Nv), i.e., P3NTV
% Note: boundary velocity is left symbolic.
%
% See also 'poly3generateSym.m' and 'poly3.m'

clc
clear all
syms q_i q_f dq_i dq_f
syms t_i t_f
syms t

conditionsValue = [0 1 dq_i dq_f];
conditionsTime = [0 1];
qNow = poly3(conditionsValue,conditionsTime,t)

