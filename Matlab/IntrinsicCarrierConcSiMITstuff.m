%Intrinsic carrier concentration in Silicon for various temperatures
%Originally demonstrated in Pierret's Book
%Transcribed by Thomas MacDonald for ECE 4904
%ni vs. T calculation for Si (200K - 700K) used in Fig. 2.20

% Initialization
format short e

% Constants and T-range
k   = 8.617e-5;     % Boltzmann Constant (eV/K)
A   = 2.510e19;     % Constant solved for on p. 51 from equations (2.13a/b)
Eex = 0.0074;       % Value was adjusted to match S&G ni(300K) value
                    % Also the exciton factor, Barber suggests 0.007
T = 25:5:700;       % Range of temperatures used for the simulation

% Band Gap vs. T
EG0 = 1.17;                    % Band gap energy at 0 Kelvin
a   = 4.740e-4;                % Value predetermined to match the BG curve
b   = 636;                     % Value predetermined to match the BG curve
EG  = EG0-a.*(T.^2)./(T+b);    % Temperature based adjustment to the bandgap

% Effective mass ratio (mnr = mn*/m0, mpr=mp*/m0)
% These are given on p. 55 already presolved but they are based on
% the equations (2.6a) and (2.6b) given on p. 41
mnr = 1.028 + (6.11e-4).*T - (3.09e-7).*T.^2;   %Based on Eq 2.6a
mpr = 0.610 + (7.83e-4).*T - (4.46e-7).*T.^2;   %Based on Eq 2.6b

% Computation of ni through the use of the equations (2.21), (2.13a), and
% (2.13b) presented on p. 53 and p. 51 in the text. Presented here is
% equations (2.13a) and (2.13b) being substituted into eq. (2.21)
ni = A.*((T./300).^(1.5)).*((mnr.*mpr).^(0.75)).*exp(-(EG-Eex)./(2.*k.*T));

% Display output on screen
figure(1)
subplot(1,2,1)
% Same range as Fig. 2.20 in book)
semilogy(T,ni,'LineWidth',2);
grid on
xlim([200 700])
ylim([1E+5 1E+16])
xlabel('TEMPERATURE [K]')
ylabel('INTRINSIC CARRIER CONC n_{  i}  [/cm^{3}]')
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Empirical relationship for number of dopant sites ionized
ND0 = 1E+15;   % Assume doping of 1E+15 donor atom / cm^3
ND_ionized=ND0*(1./(1+exp(-(T-75)/10)));

% Display output on screen
subplot(2,2,2)
% Plot over 30-600 K range
plot(T,ND_ionized,'LineWidth',2);
grid on
xlim([30 600])
ylim([0 2E+15])
xlabel('TEMPERATURE [K]')
ylabel('IONIZED DONOR CONC [/cm^{3}]')

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%% YOUR MATLAB HERE %%%%%%%%%%%%%%%%%%%%%%%%%%
% Exact equation for n
% Display output on screen
% Plot over 30-600 K range
