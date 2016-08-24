t = linspace(-2,2,40000); %linspace(x-ve,+ve,accuracy/no of points calc)
x = @(t) exp(-t).*(t>0) + 0.5*(t==0);
xe = (x(t)+x(-t))/2; xo = (x(t)-x(-t))/2;
subplot(311); plot(t,x(t)); xlabel('t'); ylabel('x(t)');
subplot(312); plot(t,xe); xlabel('t'); ylabel('x_e(t)');
subplot(313); plot(t,xo); xlabel('t'); ylabel('x_o(t)');