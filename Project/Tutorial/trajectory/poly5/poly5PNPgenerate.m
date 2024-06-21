%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/04     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
%==========================================================================


clc
clear all
syms q_i q_f 
syms t_i t_f t

% Not normalized (to be used as a trajectory)

qNow = poly5([q_i q_f 0 0 0 0],[t_i t_f t],t)

% Normalized (to be used as a time law)

qNowNorm = poly5([0 1 0 0 0 0],[0 1 t],t)
