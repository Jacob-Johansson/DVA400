function xNow = intervalGuard(x_i, x_f, t_i, t_f, t, xIn )
if t >= t_i
    if t <= t_f
        xNow = xIn;
    else
        xNow = x_f;
    end
else
    xNow = x_i;
end