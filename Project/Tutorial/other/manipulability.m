% Measure of manipulability
function manInd = manipulability(J)
    manInd = sqrt(det(J * J'));
end