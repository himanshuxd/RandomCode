t=0:0.001:100;
n=[1];d=[10 1];
c=step(n,d,t);
plot(t,c);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Response of First Order System');
