t=73:1:1373;
for i=1:length(t)
n(i)=(3.2203e+15)*(t(i)^(1.5))*((2.73)^((-261.021*(1.1/0.045))/t(i)));
end
plot(t,n);hold on;grid on;