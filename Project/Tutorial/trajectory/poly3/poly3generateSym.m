%==========================================================================
% File: poly3generateSym.m
% Author: Gabriele Gualandi     Date: 2024     Ver: 1.0
% Mälardalens University - Course in Industrial Robotics
%==========================================================================
%
% Derives symbolically the expression of a polynomial of degree 3 where:
% initial and final conditions (e.g., initial/final: values, first derivatives of values) are
% rendered symbolic variables.
%
% Note: only the initial and final conditions are considered.
% If you need to impose conditions in different instants than the initial/final,
% you have to generate that polynomial by yourself
%
% Here the conditions considered are:
% valueConditions = [initial Value, final Value, deriv of initial value, deriv of final value]
% timeConditions = [initial time, final time]

clc
clear all
syms a b c d
syms q_i q_f dq_i dq_f
syms t_i t_f
syms t

% General equation
polEq = a + b * (t - t_i) +  c * (t - t_i)^2 + d * (t - t_i)^3;
dpolEq = diff(polEq,'t');

% Forms the general equations for the linear system
% (NB: q_i, q_f, dq_i ... are still syms variables!)
initTime = subs(polEq,t,t_i);
dInitTime = subs(dpolEq,t,t_i);
finalTime = subs(polEq,t,t_f);
dFinalTime = subs(dpolEq,t,t_f);

% Form the (symbolic) conditions for initial and final value (rows of the
% linear system)
eq1 = initTime == q_i; % initial value
eq2 = dInitTime == dq_i; % initial derivative
eq3 = finalTime == q_f; % final value
eq4 = dFinalTime == dq_f; % final derivative

% Form the linear system, where unknown are the polynomial's coefficients
unknownCoeff = [a; b; c; d];
[A,B] = equationsToMatrix([eq1; eq2; eq3; eq4], unknownCoeff)

% Solve the linear system to determine (symbolic) values of the unknown
% (i.e., polynonial coefficients)
X = simplify(linsolve(A,B))

% Subst. the each (symbolic) polynomial coefficient into the original
% equation of the polynomial
% polEqSolved = polEq;
% for i = 1:numel(X)
%     polEqSolved = subs(polEqSolved,unknownCoeff(i),X(i));
% end

polEqSolved = subs(polEq, unknownCoeff ,X);

% General solution for the polynomial. This is symbolic, general, and is valid
% for any initial condition
polEqSolved = simplify(polEqSolved)


