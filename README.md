# RandomCode
Various C, C++, Python and MATLAB code related to Signal processing, Machine Learning, Math, Data Structures and Algorithms.

MATLAB simulation for FermiDirac experiment, showing the Probability - Energy Graph :


`k=8.617*(10^(-5));
ef=0.56;
e=-0.2:0.001:1.2;
t=0;
for i=0:3

plot(e,(1./(1+exp((e-ef)/(k*t)))))

hold on;
t=t+100;
end;

xlabel('Energy');
ylabel('Probability');
title('Fermi-Dirac Graph');
grid on;
legend('T=0K','T=100K','T=200K','T=300K')'


Also contains C++ learning lessons under the /txt/ folder.
