t=73:1:1373;
ei=0.045;
k=8.6*10^(-5);
nd=10^14;
nc2=2.8*10^(19);
nv2=10^(19);
eg=1.1;

nc=(t/300).^(1.5)*nc2;

ni=sqrt(nc*nd).*exp((-ei)./(2*k*t));

ncnv=(t/300).^(3)*nc2*nv2;

n=sqrt(ncnv).*exp((-eg)./(2*k*t));

semilogy(t,ni+n);
title('Carrier Concentration Vs Temperature For Doped Si');
xlabel('Temperature (K)');
ylabel('Carrier Concentration');
grid on;