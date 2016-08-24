function[x]=aquad(a,b,c)
a=2;b=3;c=4
x1=(-b+sqrt(b^2-4*a*c))/(2*a);
x2=(-b-sqrt(b^2-4*a*c))/(2*a);
x=(x1 x2)
end
