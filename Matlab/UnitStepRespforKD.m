t=0:0.001:10;
n=[30 300];
d=[1 10 20];
[nx dx]=cloop(n,d);
c=step(nx,dx,t);
plot(t,c);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Response');