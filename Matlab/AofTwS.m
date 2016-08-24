function [A] = AofTwS(a,b,c)
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c))
