t=0:0.001:5;
n=[5];d=[1 10];
c=impulse(n,d,t);
plot(t,c);
xlabel('Time');
ylabel('Amplitude');
title('Impulse Response of First Order System');
