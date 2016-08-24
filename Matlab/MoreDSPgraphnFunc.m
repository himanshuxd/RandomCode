u = @(t) 1.0*(t>0)+0.5*(t==0);
x1 = @(t) 2*u(t+2)-u(3-3*t);
gate = @(t) 1.0*(abs(t)<1/2)+0.5*(abs(t)==0.5);
x2 = @(t) 1*(abs(t)<1/2*pi)+0.5*(abs(t)==1/2*pi);
x3 = @(t) (1-2*abs(t/10)).*(abs(t)<=5);
x4 = @(t) (sin(2*t/pi))./(2*(t/pi));
x5 = @(t) ((sin(pi*t))./(pi*t)).*gate(t/4);
t = -100:.0001:100;
plot(t,x4(t)); %Increment and plot each one Duffers!!
axis([-10 10 -3 3])
