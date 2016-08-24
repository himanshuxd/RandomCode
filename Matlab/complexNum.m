t=0:0.001:6.28;
y=imag(sqrt(4i*t));
plot(y);grid on;hold on;
u=0:1:5;
for i=1:length(u)
plot(-y*i);
end;
u=0:1:5;
for i=1:length(u)
plot(y*i);
end;