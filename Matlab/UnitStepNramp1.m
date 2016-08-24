t=0:0.001:10;
n=[1];
d1=[1 0];
d2=[1 5 6];
c=step(n,d2,t);
plot(t,c);
xlabel('Time');
ylabel('Magnitude');
title('Unit Step Response of 2nd order system');