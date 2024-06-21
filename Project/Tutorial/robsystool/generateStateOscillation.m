function [sequenceOfStates] = generateStateOscillation(initState,numSamples,maxValue,indexesToPerturbate)
%==========================================================================
% Author: Gabriele Gualandi     Date: 2022     Ver: 1.1
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
% sequenceOfStates = generateStateOscillation(initState,numSamples,maxValue,indexesToPerturbate)
% Given an inital robot's state 'initState', produces a 'numSamples' of states obtained by perturbating 'initState'
% from +maxValue to -maxValue. Only the components of the state in 'indexesToPerturbate' are perturbated.
%
% See also SHOWROBSTATES

if isempty(indexesToPerturbate)
    sequenceOfStates = initState;
    
else
    
    if size(initState,2) > 1
        error('State must be a column vector');
    end
    
    angleInc = 2*pi / (numSamples-1);
    angleSamples = [0: angleInc : 2*pi];
    
    sinSampling = @(omegaT) sin(omegaT);
    perturbationSequence = maxValue * sinSampling(angleSamples);
    
    sequenceOfStates = repmat(initState,1,numel(angleSamples));
    
    try
        for j = 1:numel(indexesToPerturbate)
            jointNow = indexesToPerturbate(j);
            sequenceOfStates(jointNow,:) = sequenceOfStates(jointNow,:) + perturbationSequence;
        end
    catch
        error('error. Did you set your robot DataFormat to column?');
    end
end


end

