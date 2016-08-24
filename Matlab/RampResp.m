t=0:0.001:10;
n=[10];d=[1 5];d1=[1 0 0];d2=conv(d,d1);
c=impulse(n,d2,t);
plot(t,c);
xlabel('Time');
ylabel('Amplitude');
title('Ramp Response of First Order System');
