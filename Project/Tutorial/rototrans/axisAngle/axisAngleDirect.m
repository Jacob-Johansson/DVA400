%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
% Solution for the Axis Angle Direct problem (Rodriguez formula, derivation by prof. Alessandro De Luca)
% Given
% - an axis represented by unitary vector 'r' (expressed in frame RF0),
% - angle 'theta'
% returns:
% - R, the rotation matrix (possibly symbolic) convertin point from RF1 to RF0,
% where FR1 is the frame obtained rotation RF0 about 'r' with angle 'theta'
function R = axisAngleDirect(axis,angle)
if ~all(size(axis) == [3 1])
    error('Axis must be a 3x1 vector (possibly normalized)');
end
if abs(angle) > 2*pi
    warning('rodriguezGeneral: abs(angle) > 2*pi. Are you sure that you are providing radiants?');
end
if ~(norm(axis) == 1)
    axis = axis/(norm(axis));
    warning('rodriguezGeneral: norm of axis r was normalized automatically as %s',num2str(reshape(axis', 1, [])));
end
I = eye(3);
rrt = axis*transpose(axis);
R = rrt + (I - rrt) * cos(angle) + skew(axis) * sin(angle);
end