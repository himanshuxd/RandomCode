e=-0.2:0.005:1.2;
efi=0.56;
t=300;
no=10^18;
k=8.617^(-5);
ni=1.45*10^10;
efn=efi+(k*t*log(no/ni));
for i=1:length(e)
    f(i)=1./(1+exp((e(i)-efn)/(k*t)));
end
plot(f,e)
grid on;hold on;
x=-0.1:0.0001:1.1;
plot(x,zeros(length(x)))
