% MATLAB program to illustrate Fermi-Dirac distribution function
% behavior -- (C) Zeynep Dilli, 2008

set(0,'DefaultAxesFontSize',10,'DefaultAxesFontWeight','bold','DefaultAxesLineWidth',1);

%% Fermi distribution function calculation
kB = 8.617e-5;  % in eV/K
Ef = 0.56;      % Fermi level in eV
E = -0.2:0.0005:1.4;  % Energy levels
% "Calculate" f(E) at T=0 K as fTo
fTo = zeros(size(E));
for k=1:length(E)
    if E(k)<Ef fTo(k)=1; 
    elseif E(k)==Ef fTo(k)=0.5; 
    end
end

% Calculate f(E) at three different temperatures
T1 = 100;  % in K
T2 = 200;  
T3 = 300;
fT1 = 1 ./ (1 + exp( (E-Ef*ones(size(E)))/(kB*T1) ));
fT2 = 1 ./ (1 + exp( (E-Ef*ones(size(E)))/(kB*T2) ));
fT3 = 1 ./ (1 + exp( (E-Ef*ones(size(E)))/(kB*T3) ));

figure(1); clf
plot(E,fTo,'k','LineWidth',3); 
grid on; hold on
plot(E,fT1,'b--','LineWidth',2)
plot(E,fT2,'r-.','LineWidth',2)
plot(E,fT3,'m:','LineWidth',2)
axis([-0.2 1.3 -0.1 1.1])
set(1,'Position',[34 88 634 538]);
xlabel('E (eV)'); ylabel('f(E)');
title('Fermi-Dirac distribution functions at different temperatures')
legend('T=0 K','T=100 K','T=200 K','T=300 K','Location','SouthWest')
plot(Ef,0.5,'k.','MarkerSize',36)

% Calculate Fermi Level and Fermi-Dirac distribution function
% for an n-type semiconductor 
% doped with N_D=1e18 1/cm3 at room temperature (T3 above)
Ei = Ef; % intrinsic Fermi Level
n_i = 1.45e10; % intrinsic carrier concentration

N_D = 1e18;  % doping
n_o = N_D;   % equilibrium electron concentration

Ef_n = Ei+kB*T3*log(n_o/n_i);

fT3_ntype = 1 ./ (1 + exp( (E-Ef_n*ones(size(E)))/(kB*T3) ));
figure(2); clf
plot(fT3_ntype,E,'b','LineWidth',3);
set(2,'Position',[34 88 634 538]);
axis([-0.2 1.2 -0.2 1.4])
grid on; hold on
ylabel('E (eV)'); xlabel('f(E)');
title('Fermi-Dirac dist. fnc. & Fermi lev., n-type Si, N_D=10^{18} cm^{-3}, T=300 K.')
% to mark the locations of the conduction/valence bands,
% Fermi level and intrinsic Fermi level
dummyvector=-0.1:0.01:1.1;
plot(dummyvector,zeros(length(dummyvector),1),'k','LineWidth',4)
plot(dummyvector,1.12*ones(length(dummyvector),1),'k','LineWidth',4)
plot(dummyvector,Ei*ones(length(dummyvector),1),'k-.','LineWidth',2)
plot(dummyvector,Ef_n*ones(length(dummyvector),1),'k--','LineWidth',2)
plot(0.5,Ef_n,'kx','MarkerSize',24)
text(1.11,1.12-0.05,'E_C','FontSize',24,'FontWeight','bold')
text(1.11,-0.05,'E_V','FontSize',24,'FontWeight','bold')
text(1.11,Ei-0.05,'E_i','FontSize',24)
text(1.11,Ef_n-0.05,'E_F','FontSize',24,'FontWeight','bold')

% Calculate Fermi Level and Fermi-Dirac distribution function
% for an p-type semiconductor 
% doped with N_A=1e18 1/cm3 at room temperature (T3 above)
Ei = Ef; % intrinsic Fermi Level
n_i = 1.45e10; % intrinsic carrier concentration

N_A = 1e18;  % doping
p_o = N_A;   % equilibrium electron concentration

Ef_p = Ei-kB*T3*log(p_o/n_i);

fT3_ptype = 1 ./ (1 + exp( (E-Ef_p*ones(size(E)))/(kB*T3) ));
figure(3); clf
plot(fT3_ptype,E,'b','LineWidth',3);
set(3,'Position',[34 88 634 538]);
axis([-0.2 1.2 -0.2 1.4])
grid on; hold on
ylabel('E (eV)'); xlabel('f(E)');
title('Fermi-Dirac dist. fnc. & Fermi lev., p-type Si, N_A=10^{18} cm^{-3}, T=300 K.')
% to mark the locations of the conduction/valence bands,
% Fermi level and intrinsic Fermi level
dummyvector=-0.1:0.01:1.1;
plot(dummyvector,zeros(length(dummyvector),1),'k','LineWidth',4)
plot(dummyvector,1.12*ones(length(dummyvector),1),'k','LineWidth',4)
plot(dummyvector,Ei*ones(length(dummyvector),1),'k-.','LineWidth',2)
plot(dummyvector,Ef_p*ones(length(dummyvector),1),'k--','LineWidth',2)
plot(0.5,Ef_p,'kx','MarkerSize',24)
text(1.11,1.12-0.05,'E_C','FontSize',24,'FontWeight','bold')
text(1.11,-0.05,'E_V','FontSize',24,'FontWeight','bold')
text(1.11,Ei-0.05,'E_i','FontSize',24)
text(1.11,Ef_p-0.05,'E_F','FontSize',24,'FontWeight','bold')