%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/04     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
%==========================================================================

function [out] = poly5PnP(q_i, q_f, t_i, t_f, t )
% Given boundary conditions (i.e., value q_i, q_f) and time (t_i, t_f), and the current time t
% Return the value of a quintic polynomial.
%
% As any other Matlab function, this function can be vectorized in the input/output.
% In particular, if q_i, q_f, t_i, t_f are arrays of size m (e.g., each of size m = 3), the output will be also of the size m. i.e., the
% component j of the output, j = 1..m, is relative to a polynomial having boundary conditions as in the j component of the input.
% This can be used to obtain a straight line (in the cartesian space) given, that t_i and t_f contains the same value in each component.
% For example, suppose of having to realize a Pick And Place motion:
% - starting at time 1 and ending at time 3.
% - between points in the task space with coordinates
%   pA = [2; 3; 4];
%   pB = [5; 6; 7];
% 
% Then the following function
% stitchAB = @(t) poly5PnP( pA , pB, 1, 3, t )
% is a function of t providing the time law for a point (e.g., robot hand) moving in a straight line, connecting pA to pB, starting and ending
% respectively at time 0 and 2, and with initial and final velocity and acceleration.
% See "testPoly5PnP_straightLine.m" for a 2D example.
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

