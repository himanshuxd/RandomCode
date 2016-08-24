x=sym('x');
ezplot(4+3*x*x)
ezplot(x*x*sin(x))
ezplot(x*sin(x))
ezplot(exp(-pi*x*x)) %gaussian
sinc(x)=sin(pi*x)/(pi*x)
ezplot(sinc(x))