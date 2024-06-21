function V = lyapunovCandidate(qd,e,Kp,B)
    V = (1/2) * transpose(qd) * B * qd + (1/2) * transpose(e) * Kp * e;
end

