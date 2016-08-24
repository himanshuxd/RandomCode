t=273:1:373;
for i=1:length(t) 

n(i)=(7.3407e+14)*(t(i)^(3/4))*((2.73)^((-261.021)/t(i)));

end

plot(t,n);
grid on;
