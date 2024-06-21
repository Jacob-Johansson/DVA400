addpath(genpath('/MATLAB Drive/DVA400/rototrans'));

%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
% Tests the solution to the zyx Direct and Inverse Euler problems
clc
clear

syms r p y;
axis ='xyz';
kind='fixed'; % absolute (not current)

% Symbolic rotation matrix
Rsymb = eulerDirectProblem(axis,kind,[r,p,y]);
disp(Rsymb);

% Numeric values for the angles
angles_numeric = [0.5,1.5,pi/9];
disp(angles_numeric);

%% Solution to the direct Euler problem
Rnum = double(subs(Rsymb,[r,p,y],angles_numeric));

%% Solution to the inverse Euler problem
[sol1, sol2] = eulerInverseProblem( Rnum, axis, kind);
disp(sol1);
disp(sol2);

%%
% Verification
% Substituite the two solutions from the inverse problem into the symbolic
% matrix, and verify that the result is the previously obtained Rnum 
Rverif1 = double(subs(Rsymb,[r,p,y], sol1));
Rverif2 = double(subs(Rsymb,[r,p,y], sol2));
app_eq = @(x,y,tol) abs(x-y)<tol; % approximately equal (for small numerical differences)
app_eq(Rnum,Rverif1,0.00001)
app_eq(Rnum,Rverif2,0.00001)
