%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/04     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
%==========================================================================

function [out] = poly5PnP(q_i, q_f, t_i, t_f, t )
% Hard-coded polynomial of degree 5, Pick 'n 'Place. Obtained trough "poly5PNPgenerate.m"
%
% Given boundary conditions (i.e., value q_i, q_f) and time (t_i, t_f), and the current time t
% Return the values of a quintic polynomial Pick 'n 'Place.
%
% As any other Matlab function, this function can be vectorized in the input/output.
% In particular, if q_i, q_f, t_i, t_f are arrays of size m (e.g., each of size m = 3), the output will be also of the size m. i.e., the
% component j of the output, j = 1..m, is relative to a polynomial having boundary conditions as in the j component of the input.
% This can be used to obtain a straight line (in the cartesian space).
%
% e.g., suppose having to realize a Pick 'n 'Place motion:
% - starting at time 1 and ending at time 3.
% - between points in the task space with 3D coordinates
%   pA = [2; 3; 4];
%   pB = [5; 6; 7];
% 
% Then the following function
% poly5PnP( pA , pB, 1, 3, t )
% as t varies provides 3D coordinates for a point (e.g., robot hand) moving in a straight line, connecting pA to pB, starting and ending
% respectively at time 1 and 3 (and [0;0;0] outside this time interval).
%
% See "init_testPoly5PnP_lines.m" and "testPoly5PnP_lines.m" for a 2D example in Matlab.
% See "init_testPoly5PnP_lines.m" and "testPoly5PnP_lines_simulink.slx" for a 2D example in Simulink.

% 

if ~(numel(t_i) == 1) || ~(numel(t_f) == 1) ~(numel(t) == 1)
    error('Only q_i and q_f are allowed to be vectors');
end

if ((t >= t_i) && (t < t_f))
    % Hard-coded version of the polynomial obtained trough "poly5PNPgenerate.m"
    out = q_i + ((12*q_f - 12*q_i)*(t - t_i)^5)/(2*(t_f - t_i)^5) + ((20*q_f - 20*q_i)*(t - t_i)^3)/(2*(t_f - t_i)^3) - ((30*q_f - 30*q_i)*(t - t_i)^4)/(2*(t_f - t_i)^4);
else
    % Setting the polynomial to 0 outside its definition interval enables to stitch multiple polynomials simply by summing them
    out = zeros(size(q_i));
end

