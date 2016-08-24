t=0:0.001:100;
n=[1];
r=input('Resistance=');
c=input('Capacitance');
d=[r*c 1]
cs=step(n,d,t);
plot(t,cs);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Response of First Order System');