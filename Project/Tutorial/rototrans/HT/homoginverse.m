% Efficient inverse of an Homog. matrix
function out = homoginverse(in)
out = zeros(4,4);
out(4,4) = 1;
TR = transpose(in(1:3,1:3));
out(1:3,1:3) = TR;
out(1:3,4) = -TR*in(1:3,4);
end