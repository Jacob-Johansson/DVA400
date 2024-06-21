%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================

function [x,y,z] = rotation2versors(R)
x = R * [1 0 0]';
y = R * [0 1 0]';
z = R * [0 0 1]';
end