function T = rpy2Tmatrix(angles) 
% Valid for a RPY representation i.e., z(r/Users/ggi01/GDrivegwala64/Matlab/robotics-examples/Control/ResolvedRateMotion/AnalyticalJacobian) y(p) x(y)

r = angles(1);
p = angles(2);

T = [0, -sin(r), cos(p)*cos(r); ...
     0,  cos(r), cos(p)*sin(r);...
     1,       0,       -sin(p)];
	 
end