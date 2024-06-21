%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.11
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
% 'axis' is a string composed by n chars (eg. 'zxz')
% 'kind' is 'current' or 'fixed'
% 'angles' is an array of three angles (either numeric or sym)
function R = eulerDirectProblem(axis,kind,angles)
switch kind
    case {'current','intrinsic'}
        R = rotationBasicSequence(axis,angles);
    case {'fixed','extrinsic','absolute'}
        axis = reverse(axis);
        angles = flip(angles);
        R = rotationBasicSequence(axis,angles);
    otherwise
        error('kind must be current or fixed');
end
end