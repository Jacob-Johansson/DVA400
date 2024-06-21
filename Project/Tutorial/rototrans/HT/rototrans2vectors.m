%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================

function [sol1,sol2] = rototrans2vectors(R,eulerAxis,eulerKind)
% Given a HT 4x4 matrix, return the two equivalent 6x1 arrays describing the rototranslation wrt a given eulerAxis sequence of the given eulerKind.
% Note: the result is symbolic

[rsol1,rsol2] = eulerInverseProblem( R(1:3,1:3), eulerAxis, eulerKind);

sol1 = sym(zeros(6,1));
sol2 = sym(zeros(6,1));

sol1(1:3) = R(1:3,4);
sol2(1:3) = R(1:3,4);

sol1(4:6) = simplify(rsol1(1:3)); 
sol2(4:6) = simplify(rsol2(1:3));

end