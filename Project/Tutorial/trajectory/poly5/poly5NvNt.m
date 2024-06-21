%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/04     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
%==========================================================================

% Generates a 'text' version (i.e., to be copied/pasted) of a polynomial of
% degree 5, normalized in time (Nt) and value (Nv), while boundary velocity
% dq_i dq_f ddq_i ddq_f is left symbolic.
%
% see 'poly3generateSym.m' and 'poly3' for more details

%clc
%clear all
syms q_i q_f dq_i dq_f ddq_i ddq_f
syms t_i t_f
syms t

conditionsValue = [0 1 dq_i dq_f ddq_i ddq_f];
conditionsTime = [0 1];
qNow = poly5(conditionsValue,conditionsTime,t)

% For a pick n place
P5NTV_PNP = subs(qNow,[dq_i dq_f ddq_i ddq_f],[0 0 0 0])

% Compute derivatives
P5NTV_PNP_d1 = diff(P5NTV_PNP,t)
P5NTV_PNP_d2 = diff(P5NTV_PNP_d1,t)
P5NTV_PNP_d3 = diff(P5NTV_PNP_d2,t)