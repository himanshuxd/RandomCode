x=0:0.5:20;
y=10*x.^2+sin(tan(x))+sqrt(x);
integralRes=trapz(x,y)