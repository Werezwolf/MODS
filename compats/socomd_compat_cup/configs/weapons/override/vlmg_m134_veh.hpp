// used by socomd choppers
class CUP_Vlmg_M134_veh : MGunCore {
    class HighROF;
    class LowROF;
    class close : HighROF {
        aiRateOfFire=0.2;
        aiBurstTerminable = 1;
        minRange=0;
        midRange=100;
        maxRange=200;
        aiRateOfFireDispersion = 0.02; // higher rate of fire, more he cant aim
        burst = 50;
        burstRangeMax = 60;
        aiRateOfFireDistance = 200;
    };
    class short : close {
        dispersion = 0.0014;
        aiRateOfFire=0.7;
        minRange=50;
        midRange=200;
        maxRange=400;
        burst = 50;
        burstRangeMax = 50;
    };
    class medium : LowROF {
        dispersion = 0.0014;
        aiRateOfFire=1.3;
        minRange=300;
        midRange=400;
        maxRange=600;
        aiBurstTerminable = 1;
        aiRateOfFireDispersion = 0.01;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 400;
    };
    class far : medium {
        aiRateOfFire=2;
        minRange=500;
        midRange=600;
        maxRange=800;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 600;
    };
};

class CUP_Vlmg_M134_veh2 : CUP_Vlmg_M134_veh {
    class HighROF;
    class LowROF;
    class close : HighROF {
        aiRateOfFire=0.2;
        aiBurstTerminable = 1;
        minRange=0;
        midRange=100;
        maxRange=200;
        aiRateOfFireDispersion = 0.02; // higher rate of fire, more he cant aim
        burst = 50;
        burstRangeMax = 60;
        aiRateOfFireDistance = 200;
    };
    class short : close {
        dispersion = 0.0014;
        aiRateOfFire=0.7;
        minRange=50;
        midRange=200;
        maxRange=400;
        burst = 50;
        burstRangeMax = 50;
    };
    class medium : LowROF {
        dispersion = 0.0014;
        aiRateOfFire=1.3;
        minRange=300;
        midRange=400;
        maxRange=600;
        aiBurstTerminable = 1;
        aiRateOfFireDispersion = 0.01;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 400;
    };
    class far : medium {
        aiRateOfFire=2;
        minRange=500;
        midRange=600;
        maxRange=800;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 600;
    };
};