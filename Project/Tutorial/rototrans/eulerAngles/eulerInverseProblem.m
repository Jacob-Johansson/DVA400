%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.1
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
function [ s1, s2 ] = eulerInverseProblem( R, varargin)
% [ s1, s2 ] = eulerInverseProblem( R, axis, kind)
% [ s1, s2 ] = eulerInverseProblem( R, axis)
% [ s1, s2 ] = eulerInverseProblem( R) % by default, use RPY i.e. 'zyx', 'current'
% R: numeric rotation matrix
% axis: three basic axis, e.g., 'xyz'
% kind: 'current' or 'absolute'
%
% Given a rotation matrix and a Euler representation (axis, kind)
% returns the two solutions of the Inverse Euler problem.
%
% We assume that the representation is mobile (intrinstic, with respect to the current frame).
% If your representation was fixed (extrinsic), like the RPY (i.e., tipically a XYZ fixed)
% you'll have to flip the components of the provided solutions.
%
% For a ZYX Euler representation - mobile.
% We extracted analytically angles from:
% R = Rz(first) * Ry(second) * Rx(third)
%
% e.g., for RPY
% [s1,s2] = eulerInverseProblem( R, 'zyx', 'current')
% return the same solution of the Matlab Robotics system toolboc
% [s1,s2] = eulerInverseProblem(R)
% or
% [s1,s2] = rotm2eul(R,'zyx')
if (isempty(varargin))
    axis = 'zyx';
    kind = 'current';
else
    switch numel(varargin)
        case 1
            axis = varargin{1};
            kind = 'current';
        case 2
            axis = varargin{1};
            kind = varargin{2};
        otherwise
            error('Too many inputs');
    end
end


[r,c] = size(R);
if (~(r==3)) || (~(c==3))
    error('Wrong size for a rotation matrix');
end

kind = lower(kind);
axis = lower(axis);
switch kind
    case {'implicit', 'current'}
        isDefinitionReversed = 0;
    case {'fixed','extrinsic','absolute'}
        axis = flip(axis); % Flip the axis sequence
        isDefinitionReversed = 1;
    otherwise
        error('Kind is undefined. It must be ''current'' or ''absolute''');
end

% We consider only the solution of current axis sequences.
% If the user requested the absolute we have already flipped the axis (we will
% flip the final angles accordingly)
switch axis % Solutions derived analytically
    case 'zyx'
        % Singular when cos(second1) || cos(second2) = 0, e.g.,., pi/2, 3/4 pi
        second1 = atan2( -R(3,1),+sqrt(R(3,2)^2+R(3,3)^2)); % second angle, solution 1
        second2 = atan2( -R(3,1),-sqrt(R(3,2)^2+R(3,3)^2)); % second angle, solution 2
        third1 = atan2(R(3,2)/cos(second1),R(3,3)/cos(second1)); % third angle, solution 1
        third2 = atan2(R(3,2)/cos(second2),R(3,3)/cos(second2)); % third angle, solution 2
        first1 = atan2(R(2,1)/cos(second1),R(1,1)/cos(second1)); % first angle, solution 1
        first2 = atan2(R(2,1)/cos(second2),R(1,1)/cos(second2)); % first angle, solution 2
        s1= [first1;second1;third1];
        s2= [first2;second2;third2];
    case 'zyz'
        sin_second = sqrt(R(1,3)^2+R(2,3)^2);
        second1 = atan2(+ sin_second, R(3,3));
        second2 = atan2(- sin_second, R(3,3));
        first1 = atan2(+ R(2,3)/sin_second, + R(1,3)/sin_second );
        first2 = atan2(- R(2,3)/sin_second, - R(1,3)/sin_second );
        third1 = atan2(+ R(3,2)/sin_second, - R(3,1)/sin_second);
        third2 = atan2(- R(3,2)/sin_second, + R(3,1)/sin_second);
        s1 = [first1;second1;third1];
        s2 = [first2;second2;third2];
    otherwise
        error('Case not implemented among the 12 possible: you have to derive it by yourself');
end

% Solutions s1, s2 is relative to the current (intrinsic) Euler representation.
% If the user requested a fixed (extrinsic) rotation, like the RPY (i.e., xyz fixed, hence zyx current)
% then we need to flip the components of the angles
if isDefinitionReversed
    s1 = flip(s1);
    s2 = flip(s2);
end