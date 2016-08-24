u = @(t) 1.0*(t>0)+ 0.5*(t==0); %Anonymous fn defined in this way
x = @(t) exp(-t).*u(t);
y = @(t) x((-t+3)/3)-3/4*x(t-1);
t = -1.5:.0001:4.5;plot(t,y(t));
xlabel('Time');ylabel('Function Defined');
title('First DSP Program Hallo DSP !!!');
grid on;
