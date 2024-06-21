% This code is uncommented because it is a more complex version (polynomial of degree 5) of script:
% poli3generateSym.m
%
% Read and understand that script. The same comments apply here. 
% conditionsValue: [q_i q_f dq_i dq_f ddq_i ddq_f]
% conditionsTime: [t_i t_f t]

clc
clear all
syms a b c d e f
syms q_i q_f dq_i dq_f ddq_i ddq_f
syms t_i t_f
syms t

polEq = a + b * (t - t_i) +  c * (t - t_i)^2 + d * (t - t_i)^3 + e * (t - t_i)^4 + f * (t - t_i)^5;
dpolEq = diff(polEq,'t');
ddpolEq = diff(dpolEq,'t');

initTime = subs(polEq,t,t_i);
dInitTime = subs(dpolEq,t,t_i);
ddInitTime = subs(ddpolEq,t,t_i);

finalTime = subs(polEq,t,t_f);
dFinalTime = subs(dpolEq,t,t_f);
ddFinalTime = subs(ddpolEq,t,t_f);

eq1 = initTime == q_i; % initial value
eq2 = dInitTime == dq_i; % initial derivative
eq3 = ddInitTime == ddq_i; % 

eq4 = finalTime == q_f; % final value
eq5 = dFinalTime == dq_f; % final derivative
eq6 = ddFinalTime == ddq_f; % 

coefficientVector = [a, b, c, d, e, f];
[A,B] = equationsToMatrix([eq1, eq2, eq3, eq4, eq5, eq6], coefficientVector);

X = simplify(linsolve(A,B))

polEqSolved = polEq;
for i = 1:numel(X)
    polEqSolved = subs(polEqSolved,coefficientVector(i),X(i));
end

polEqSolved = simplify(polEqSolved)
