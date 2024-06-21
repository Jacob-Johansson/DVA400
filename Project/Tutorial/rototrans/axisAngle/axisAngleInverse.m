%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.11
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
function [axis1,angle1,axis2,angle2] = axisAngleInverse( R )
argument1 = sqrt((R(2,1)-R(1,2))^2+(R(1,3)-R(3,1))^2+(R(2,3)-R(3,2))^2);
argument2 = R(1,1)+R(2,2)+R(3,3)-1;
angle1 = atan2(argument1,argument2);
angle2 = atan2(-argument1,argument2);

axis1 = 1/(2*sin(angle1))*[R(3,2)-R(2,3);R(1,3)-R(3,1);R(2,1)-R(1,2)];
axis2 = 1/(2*sin(angle2))*[R(3,2)-R(2,3);R(1,3)-R(3,1);R(2,1)-R(1,2)];
end

% The following also works, but it uses acos so it is inaccurate near angle 0.
% function [axis,angle] = axisAngleInverse(R)
% angle = acos((R(1,1) + R(2,2) + R(3,3) -1)/2);
% axis = 1/(2*sin(angle)) * [R(3,2) - R(2,3);R(1,3)-R(3,1);R(2,1)-R(1,2)];
% end