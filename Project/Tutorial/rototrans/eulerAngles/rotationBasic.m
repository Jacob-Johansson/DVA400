%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
function R = rotationBasic(axis,t)
% Returns a basic rotation matrix in angle 't' (can be symbolic)
if strcmp(axis,'x')
    R = [1 0 0; 0 cos(t) -sin(t); 0 sin(t) cos(t)];
elseif strcmp(axis,'y')
    R = [cos(t) 0 sin(t); 0 1 0; -sin(t) 0 cos(t)];
elseif strcmp(axis,'z')
    R = [cos(t) -sin(t) 0; sin(t) cos(t) 0; 0 0 1];
end
end