k=8.6*10^(-5);
t=300;
Ersi=11.8;
Esi=Ersi*8.854*10^(-14);
na=4*10^15;
no=5.25*10^4;
po=4*10^15;
l=1;

fs=-5:0.0001:10;

LD=(((k*t)/(1.6*10^(-19)*l))-(Esi/na))^(1/2);

for i=1:length(fs)
    E(i)=(2^(1/2)*(k*t)/(LD*l))*(((exp(-l*fs(i)/(k*t))+l*fs(i)/(k*t))-1+(no/po)*exp(l*fs(i)/(k*t))-l*fs(i)/(k*t))-1)^(1/2);
    Qs(i)=Esi*E(i);
end

semilogy(fs,Qs,'Linewidth',2);
xlabel('Surface Density');
ylabel('Charge Density');
title('Charge Density Vs Surface Density profile for n-MOS');