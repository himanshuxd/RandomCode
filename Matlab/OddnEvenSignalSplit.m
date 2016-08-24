% x(t) e^(-at)u(t) plot and even and odd components
a = input('Enter a ');
u = @(t) 1*(t>0)+.5*(t==0);
x = @(t) exp(-a*t).*u(t);
t = -10:.001:10;
xe = @(t) (x(t)+x(-t)).*.5;
xo = @(t) (x(t)-x(-t)).*.5;
subplot(1,2,1);
plot(t,xe(t));
axis([-1 1 -1 1]);
subplot(1,2,2);
plot(t,xo(t));
axis([-1 1 -1 1]);
