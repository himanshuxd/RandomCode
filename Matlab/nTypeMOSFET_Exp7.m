vt=1.5;
kn=1;
vds=0:0.01:12;
vgs=0:2:8;
for i=1:length(vgs)
if(vgs(i)<vt)
    id=0;
else
for j=1:length(vds)
        if(vds(j)<vgs(i)-vt)
            id(j)=kn*vds(j)*(2*(vgs(i)-vt)-vds(j));
        else
            id(j)=kn*(vgs(i)-vt)*(vgs(i)-vt);
        end
end
end
    plot(vds,id);hold on;
end
xlabel('V_d_s(V)');
ylabel('I_d(mA)');
title('I-V Characteristic Graph For N-Type MOSFET');
grid on;    