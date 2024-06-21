%==========================================================================
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.11
% Mälardalens University - Course in Industrial Robotics (DVA400)
%==========================================================================
function [varargout] = rotationBasicSequence(axis,angles)
            % Numeric or symbolic product (simplified and not simplified) of basic rotation matrices
            % [R] = rotationBasicSequence(axis)
            % [R] = rotationBasicSequence(axis,angles)
            % [R,Runsimplified] = rotationBasicSequence
            %
            % Given a string 'axis' composed by n chars (eg. 'zxz')
            % returns the resulting rotation matrix from a
            % sequence of rotation with respect to the current frame (aka
            % implicit), e.g., z,y,x -> R1_z * R2_y * R3_x 
            %
            % Optional arg: vector of n sym 'angles' for the angles of each rotation
            %
            % If 'angles' is not provided, there will be used used sym
            % variables 'x1...xn' for the angles
            % If 'angles' is provided (numeric or synbolic), its elementes will
            % be used as angles for the rotation matrices
            %
            % If a second output is requested, 'unsimplified' contains the
            % resulting rotation matrix without performing simplification
            %
            % Note: for a proper Euler rotation sequence, axis should be be one of the
            % 12 allowed permutations 'x','y','x'. Consistency check is not
            % performed.

            n = numel(axis);
            switch nargin
                case 2 % user provides angles (either symbols or numbers)
                    if numel(angles) ~= n
                        error('wrong number of variables for the angles')
                    end
                case 1 % user does not provide angles: use generic symbols
                    angles = sym('x',[1 n]); % matrix is initialized to be symbolic
                otherwise
                    error('wrong num of args');
            end

            Rnow = eye(3);
            for i = 1:n
                axNow = axis(i);
                varNow = angles(i);
                matriceRot = rotationBasic(axNow,varNow);
                Rnow = Rnow * matriceRot;
            end
            if nargout == 2
                varargout{2} = Rnow; % without simplification
            end
            if isa(Rnow,'sym') % if the matrix is symbolic
                Rnow = simplify(Rnow);
            end
            varargout{1} = Rnow; % after simplification
        end