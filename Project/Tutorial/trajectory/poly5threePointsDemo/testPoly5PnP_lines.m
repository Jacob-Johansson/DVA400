%==========================================================================
% Author: Gabriele Gualandi     Date: 2023/04     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
% You must run init_testPoly5PnP_lines before this

poly5_twoPoints = @(q_i, q_f, t_i, t_f, timeInstants) cell2mat(arrayfun(@(t_now) poly5PnP( q_i , q_f, t_i, t_f, t_now ),timeInstants,'UniformOutput',false)); 
timeInstantsABCA = [t_iAB :samplingTime: t_fCA - samplingTime];
valuesAB_BC_CA = poly5_twoPoints(pA , pB, t_iAB, t_fAB, timeInstantsABCA) ...
            + poly5_twoPoints(pB , pC, t_iBC, t_fBC, timeInstantsABCA) ...
            +  poly5_twoPoints(pC , pA, t_iCA, t_fCA, timeInstantsABCA);

figure
tiledlayout(3,1)

nexttile
scatter(valuesAB_BC_CA(1,:),valuesAB_BC_CA(2,:));

nexttile
velocity_x = diff(valuesAB_BC_CA(1,:));
velocity_y = diff(valuesAB_BC_CA(2,:));
title('Velocity')
plot(timeInstantsABCA(1:end-1),velocity_x);
hold on
plot(timeInstantsABCA(1:end-1),velocity_y);
legend('vel_x','vel_y');
hold off

nexttile
acceleration_x = diff(velocity_x);
acceleration_y = diff(velocity_y);

title('Acceleration')
plot(timeInstantsABCA(1:end-2),acceleration_x);
hold on
plot(timeInstantsABCA(1:end-2),acceleration_y);
legend('acc_x','acc_y');
hold off