%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================


function [ H ] = rototranslation(R, v )
% ROTOTRANSLATION(R,v)
% R: 3x3 rotation matrix R transforming points from frame 1 to frame 0
% v: vector of point of frame 1 expressed in frame 0
% H: homogeneous transformation matrix (rototranslation matrix)
% transforming points from frame 1 to frame 0
% See also ROTATIONBASIC
[r,c] = size(R);
if ~all([r,c] == [3,3])
    error('R must be a 3x3 rotation matrix');
end
H = sym(4);
H(1:3,1:3)= R;
H(1:3,4) = v;
H(4,4)=1;
H(4,1:3) = 0;
end