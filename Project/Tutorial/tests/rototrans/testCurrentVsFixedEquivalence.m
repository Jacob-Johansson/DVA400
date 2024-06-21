addpath(genpath('/MATLAB Drive/DVA400/rototrans'));

%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
% Tests the equivalence between a zyx current frame and and a xyz fixed frame

clc
clear
syms f s t 

% Current frame
axis ='zyx';
angles = [f s t]; % first, second, third angle
[R_cur]= rotationBasicSequence(axis,angles);
clear axis angles

% Fixed frame.
% You never have to do this, this is just a test. You just need to 
% Revers the order in the product of the matrices (just remember to
% flip the angles)
Rz = rotationBasic('z',f);
Ry = rotationBasic('y',s);
Rx = rotationBasic('x',t);

Rx_fixed = Rx; % Rotation about x0
Ry_fixed = transpose(Rx) * Ry * Rx; % Rotation about y0 (we reverse the first rotation)
Rz_fixed = transpose(Rx) * transpose(Ry) * Rz * Ry * Rx; % Rotation about y0 (we reverse the first two rotations)

R_fix = simplify(Rx_fixed * Ry_fixed * Rz_fixed);

disp(R_cur)
disp(R_fix)

