x=-1:0.01:1;
for n=1:8
subplot(4,2,n)
plot(x,sin(pi*x*n))
end
