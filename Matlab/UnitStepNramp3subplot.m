t=0:0.001:10;
for i=1:1:3;
    z=input('daalo value');
    n=[1];
    d=[1 2*1*z 1];
    c=step(n,d,t);
    subplot(3,1,i);
    plot(t,c);
    xlabel('Time');
    ylabel('Amplitude');
    title('Unit Step Response');
end
    