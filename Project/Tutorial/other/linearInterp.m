% Linear interpolation (with boundary guards)

function xNow = linearInterp(x_i, x_f, t_i, t_f, t )

h = t_f - t_i;
tau_t = (t - t_i)/h;
xIn = x_i * (1 - tau_t) + x_f * (tau_t);

xNow = intervalGuard(x_i, x_f, t_i, t_f, t, xIn );

end



