class CfgPatches
{
    class ld3k_m200_ct_compat_ace3
    {
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "A3_Weapons_F_Acc"
        };
        requiredversion=0.1;
        units[]=
        {
            "Weapon_ld3k_M200_CT_408",
            "Weapon_ld3k_M200_CT_camo_408",
            "Weapon_ld3k_M200_CT_tna_408",
            "Weapon_ld3k_M200_CT_375",
            "Weapon_ld3k_M200_CT_camo_375",
            "Weapon_ld3k_M200_CT_tna_375",
            "Item_ld3k_muzzle_snds_408",
            "Item_ld3k_muzzle_snds_408_tan",
            "Item_ld3k_optic_LRPS_Night_Vision",
            "Item_ld3k_optic_LRPS_Night_Vision_tna_F",
            "Item_ld3k_optic_LRPS_Night_Vision_ghex_F"
        };
        weapons[]=
        {
            "ld3k_M200_CT_408",
            "ld3k_M200_CT_camo_408",
            "ld3k_M200_CT_tna_408",
            "ld3k_M200_CT_375",
            "ld3k_M200_CT_camo_375",
            "ld3k_M200_CT_tna_375",
            "ld3k_muzzle_snds_408",
            "ld3k_muzzle_snds_408_tan",
            "ld3k_optic_LRPS_Night_Vision",
            "ld3k_optic_LRPS_Night_Vision_tna_F",
            "ld3k_optic_LRPS_Night_Vision_ghex_F"
        };
    };
};
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
        optic_Yorris=0;
        ld3k_optic_LRPS_Night_Vision=1;
        ld3k_optic_LRPS_Night_Vision_tna_F=1;
        ld3k_optic_LRPS_Night_Vision_ghex_F=1;
    };
};
class CowsSlot: SlotInfo
{
    compatibleItems[]=
    {
        "ld3k_optic_LRPS_Night_Vision",
        "ld3k_optic_LRPS_Night_Vision_tna_F",
        "ld3k_optic_LRPS_Night_Vision_ghex_F",
        "optic_Nightstalker",
        "optic_tws",
        "optic_tws_mg",
        "optic_NVS",
        "optic_DMS",
        "optic_LRPS",
        "optic_ams",
        "optic_AMS_snd",
        "optic_AMS_khk",
        "optic_KHS_blk",
        "optic_KHS_tan",
        "optic_KHS_hex",
        "optic_KHS_old",
        "optic_SOS",
        "optic_MRCO",
        "optic_Arco",
        "optic_aco",
        "optic_ACO_grn",
        "optic_aco_smg",
        "optic_ACO_grn_smg",
        "optic_hamr",
        "optic_Holosight",
        "optic_Holosight_smg",
        "optic_Hamr_khk_F",
        "optic_SOS_khk_F",
        "optic_Arco_ghex_F",
        "optic_Arco_blk_F",
        "optic_DMS_ghex_F",
        "optic_ERCO_blk_F",
        "optic_ERCO_khk_F",
        "optic_ERCO_snd_F",
        "optic_LRPS_ghex_F",
        "optic_LRPS_tna_F",
        "optic_Holosight_blk_F",
        "optic_Holosight_khk_F",
        "optic_Holosight_smg_blk_F",
        "optic_Holosight_smg_khk_F",
        "optic_Arco_AK_blk_F",
        "optic_Arco_AK_lush_F",
        "optic_Arco_AK_arid_F",
        "optic_DMS_weathered_F",
        "optic_DMS_weathered_Kir_F",
        "optic_Arco_lush_F",
        "optic_Arco_arid_F",
        "optic_Holosight_lush_F",
        "optic_Holosight_arid_F"
    };
};
class CowsSlot_Rail: CowsSlot
{
    class compatibleItems
    {
        ld3k_optic_LRPS_Night_Vision=1;
        ld3k_optic_LRPS_Night_Vision_tna_F=1;
        ld3k_optic_LRPS_Night_Vision_ghex_F=1;
        optic_Nightstalker=1;
        optic_tws=1;
        optic_tws_mg=1;
        optic_NVS=1;
        optic_DMS=1;
        optic_LRPS=1;
        optic_ams=1;
        optic_AMS_snd=1;
        optic_AMS_khk=1;
        optic_KHS_blk=1;
        optic_KHS_tan=1;
        optic_KHS_hex=1;
        optic_KHS_old=1;
        optic_SOS=1;
        optic_MRCO=1;
        optic_Arco=1;
        optic_aco=1;
        optic_ACO_grn=1;
        optic_aco_smg=1;
        optic_ACO_grn_smg=1;
        optic_hamr=1;
        optic_Holosight=1;
        optic_Holosight_smg=1;
        optic_Hamr_khk_F=1;
        optic_SOS_khk_F=1;
        optic_Arco_ghex_F=1;
        optic_Arco_blk_F=1;
        optic_DMS_ghex_F=1;
        optic_ERCO_blk_F=1;
        optic_ERCO_khk_F=1;
        optic_ERCO_snd_F=1;
        optic_LRPS_ghex_F=1;
        optic_LRPS_tna_F=1;
        optic_Holosight_blk_F=1;
        optic_Holosight_khk_F=1;
        optic_Holosight_smg_blk_F=1;
        optic_Holosight_smg_khk_F=1;
        optic_DMS_weathered_F=1;
        optic_DMS_weathered_Kir_F=1;
        optic_Arco_lush_F=1;
        optic_Arco_arid_F=1;
        optic_Arco_AK_blk_F=1;
        optic_Arco_AK_lush_F=1;
        optic_Arco_AK_arid_F=1;
        optic_Holosight_lush_F=1;
        optic_Holosight_arid_F=1;
    };
};
class MuzzleSlot: SlotInfo
{
};
class MuzzleSlot_408: MuzzleSlot
{
    class compatibleItems
    {
        ld3k_muzzle_snds_408=1;
        ld3k_muzzle_snds_408_tan=1;
    };
};
class CfgAmmo
{
    class BulletBase;
    /*class B_408_Ball: BulletBase // official BI tool All-in-one Config Arma3 2.19.152469 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        hit=24; // 11244 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=5;
        audibleFire=120;
        visibleFireTime=3;
        cost=7;
        airLock=1;
        caliber=2.4; // 0.36 lb/in2
        typicalSpeed=910; // 11244 Joules
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerScale=1.2;
        tracerStartTime=0.075;
        tracerEndTime=1;
        airFriction=-0.00048;
        class CamShakeExplode
        {
            power=3.16228;
            duration=0.6;
            frequency=20;
            distance=9.48683;
        };
        class CamShakeHit
        {
            power=10;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };*/
    class ld3k_B_408_419gr_Ball: BulletBase // https://cheytac.com/product/cheytac-match-grade-ammunition/
    {
        ACE_caliber=10.36; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/408-chey-tac-en.pdf
        ACE_bulletLength=55.19; // 2.173" https://www.jbmballistics.com/
        ACE_bulletMass=27.151; // 419 gr
        ACE_transonicStabilityCoef=1;
        ACE_muzzleVelocityVariationSD=0.2;
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0 m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.949};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={869}; // 2850fps
        ACE_barrelLengths[]={736.6};
        hit=22; // 10253 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=5;
        audibleFire=120;
        visibleFireTime=3;
        cost=7;
        airLock=1;
        caliber=2.4; // 0.36 lb/in2
        typicalSpeed=869;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_408_Ball tracer_green
        tracerScale=1.2;
        tracerStartTime=0.075;
        tracerEndTime=1;
        nvgOnly=0; // B_408_Ball w/o nvgOnly
        airFriction=-0.00042608; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=3.16228;
            duration=0.6;
            frequency=20;
            distance=9.48683;
        };
        class CamShakeHit
        {
            power=10;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_408_419gr_Ball_Tracer_Red: ld3k_B_408_419gr_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
        tracerStartTime=0.23; // No .408 tracer datas (if available), based on 12.7x99mm Tracer 43g 903m/s: visible 200m ≥ 1500m, ToF ICAO 200m 0.23s (Strelok Pro), https://www.nammo.com/
        tracerEndTime=2.71; // No .408 tracer datas (if available), based on 12.7x99mm Tracer 43g 903m/s: visible 200m ≥ 1500m, ToF ICAO 1500m 2.71s (Strelok Pro), https://www.nammo.com/
    };
    class ld3k_B_408_419gr_Ball_Tracer_IR: ld3k_B_408_419gr_Ball
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.02; // No .408 dim tracer IR datas (if available), based on 7.62x51mm Dim Tracer IR 9g 840m/s: 13 m – ≥ 775 m (typically 1250 m), ToF ICAO 13m 0.02s (Strelok Pro), https://www.nammo.com/
        tracerEndTime=3.21; // No .408 dim tracer IR datas (if available), based on 7.62x51mm Dim Tracer IR 9g 840m/s: 13 m – ≥ 775 m (typically 1250 m), ToF ICAO 1250m 3.21s (Strelok Pro), https://www.nammo.com/
        nvgOnly=1;
    };
    class ld3k_B_408_305gr_Ball: ld3k_B_408_419gr_Ball
    {
        ACE_bulletLength=41.45; // 1.632" https://www.jbmballistics.com/
        ACE_bulletMass=19.764; // 305 gr
        ACE_ballisticCoefficients[]={0.612}; // http://lutzmoeller.net/Ballistik/A-Ballistic-Coefficient-Discussion-with-Lost_River.php
        ACE_muzzleVelocities[]={1067}; // 3500fps https://usarmorment.com/pdf/cheytac408.pdf#page=19
        hit=24; // 11252 Joules
        caliber=1.8; // 0.262 lb/in2
        typicalSpeed=1067;
        airFriction=-0.00062734; // airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_408_305gr_Ball_Tracer_Red: ld3k_B_408_305gr_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
        tracerStartTime=0.23; // No .408 tracer datas (if available), based on 12.7x99mm Tracer 43g 903m/s: visible 200m ≥ 1500m, ToF ICAO 200m 0.23s (Strelok Pro), https://www.nammo.com/
        tracerEndTime=2.71; // No .408 tracer datas (if available), based on 12.7x99mm Tracer 43g 903m/s: visible 200m ≥ 1500m, ToF ICAO 1500m 2.71s (Strelok Pro), https://www.nammo.com/
    };
    class ld3k_B_408_305gr_Ball_Tracer_IR: ld3k_B_408_305gr_Ball
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.02; // No .408 dim tracer IR datas (if available), based on 7.62x51mm Dim Tracer IR 9g 840m/s: 13 m – ≥ 775 m (typically 1250 m), ToF ICAO 13m 0.02s (Strelok Pro), https://www.nammo.com/
        tracerEndTime=3.21; // No .408 dim tracer IR datas (if available), based on 7.62x51mm Dim Tracer IR 9g 840m/s: 13 m – ≥ 775 m (typically 1250 m), ToF ICAO 1250m 3.21s (Strelok Pro), https://www.nammo.com/
        nvgOnly=1;
    };
    class ld3k_B_408_450gr_AP_Ball: ld3k_B_408_419gr_Ball // SBR .408 450gr Armor Piercing https://www.sbrammunition.com/assets/images/M408-450.pdf
    {
        ACE_bulletLength=57.3; // 2.256" Cutting Edge 450gr G1 BC 0.865 https://www.jbmballistics.com/ https://cuttingedgebullets.com/
        ACE_bulletMass=29.16; // 450 gr
        ACE_transonicStabilityCoef=0.5; // ACE3 default value https://github.com/acemod/ACE3/blob/24e57825f7e75822e936282b36a3929bae189338/addons/advanced_ballistics/functions/fnc_readAmmoDataFromConfig.sqf#L40
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ballisticCoefficients[]={1.009}; // https://www.sbrammunition.com/assets/images/M408-450.pdf
        ACE_muzzleVelocities[]={808}; // 2650fps https://www.sbrammunition.com/assets/images/M408-450.pdf
        hit=20; // 9520 Joules
        caliber=4.4; // 0.386 lb/in2, tungsten carbide core
        typicalSpeed=808;
        airFriction=-0.00040889; // airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_408_375gr_API_Ball: ld3k_B_408_419gr_Ball // Extreme Performance .408 375gr Armor Piercing Incendiary https://www.jbmballistics.com/
    {
        ACE_bulletLength=51.94; // 2.045" https://www.jbmballistics.com/
        ACE_bulletMass=24.3; // 375 gr
        ACE_transonicStabilityCoef=0.5; // ACE3 default value https://github.com/acemod/ACE3/blob/24e57825f7e75822e936282b36a3929bae189338/addons/advanced_ballistics/functions/fnc_readAmmoDataFromConfig.sqf#L40
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ballisticCoefficients[]={0.8}; // ASM G1 0.8 converted to ICAO G1 0.7895 for airFriction calculation (ICAO 0.789467) https://www.jbmballistics.com/
        ACE_standardAtmosphere="ASM";
        ACE_muzzleVelocities[]={945}; // 3100fps
        ace_vehicle_damage_incendiary=1;
        hit=23; // 10852 Joules
        indirectHit=4; // B_20mm_AP 8
        indirectHitRange=0.1; // B_20mm_AP 0.2
        caliber=3.7; // 0.322 lb/in2, tungsten carbide core, titanium tip, no incendiary chemicals
        typicalSpeed=945;
        airFriction=-0.00050064; // airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater"; // ammo_Penetrator_Base
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.com
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class ld3k_B_375_350gr_Ball: ld3k_B_408_419gr_Ball // https://cheytac.com/product/cheytac-match-grade-ammunition/
    {
        ACE_caliber=9.52; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/375-chey-tac-170627-en.pdf
        ACE_bulletLength=52.91; // 2.083" https://www.jbmballistics.com/
        ACE_bulletMass=22.68; // 350 gr
        ACE_ballisticCoefficients[]={0.988}; // https://cheytac.com/product/cheytac-match-grade-ammunition/
        ACE_muzzleVelocities[]={905}; // 2970fps https://cheytac.com/product/cheytac-match-grade-ammunition/
        hit=20; // 9289 Joules
        caliber=2.4; // 0.356 lb/in2
        typicalSpeed=905;
        airFriction=-0.00040473; // airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_375_350gr_Ball_Tracer_Red: ld3k_B_375_350gr_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
        tracerStartTime=0.23; // No .375 tracer datas (if available), based on 12.7x99mm Tracer 43g 903m/s: visible 200m ≥ 1500m, ToF ICAO 200m 0.23s (Strelok Pro), https://www.nammo.com/
        tracerEndTime=2.71; // No .375 tracer datas (if available), based on 12.7x99mm Tracer 43g 903m/s: visible 200m ≥ 1500m, ToF ICAO 1500m 2.71s (Strelok Pro), https://www.nammo.com/
    };
    class ld3k_B_375_350gr_Ball_Tracer_IR: ld3k_B_375_350gr_Ball
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.02; // No .375 dim tracer IR datas (if available), based on 7.62x51mm Dim Tracer IR 9g 840m/s: 13 m – ≥ 775 m (typically 1250 m), ToF ICAO 13m 0.02s (Strelok Pro), https://www.nammo.com/
        tracerEndTime=3.21; // No .375 dim tracer IR datas (if available), based on 7.62x51mm Dim Tracer IR 9g 840m/s: 13 m – ≥ 775 m (typically 1250 m), ToF ICAO 1250m 3.21s (Strelok Pro), https://www.nammo.com/
        nvgOnly=1;
    };
    class ld3k_B_375_391gr_AP_Ball: ld3k_B_375_350gr_Ball // SBR .375 391gr Armor Piercing https://www.sbrammunition.com/assets/images/M375-391.pdf
    {
        ACE_bulletLength=56.13; // 2.21" Peregrine Glider GRM .375 393gr G1 BC 1.053 https://peregrinebullets.com/
        ACE_bulletMass=25.336; // 391 gr
        ACE_transonicStabilityCoef=0.5; // ACE3 default value https://github.com/acemod/ACE3/blob/24e57825f7e75822e936282b36a3929bae189338/addons/advanced_ballistics/functions/fnc_readAmmoDataFromConfig.sqf#L40
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ballisticCoefficients[]={1.054}; // https://www.sbrammunition.com/assets/images/M408-450.pdf
        ACE_muzzleVelocities[]={799}; // 2620fps https://www.sbrammunition.com/assets/images/M408-450.pdf
        hit=17; // 8089 Joules
        caliber=4.5; // 0.398 lb/in2, tungsten carbide core
        typicalSpeed=799;
        airFriction=-0.00039269; // airFrictionAnalysis.txt in docs folder
    };
};
class CfgMagazines
{
    class CA_Magazine;
    /*class 7Rnd_408_Mag: CA_Magazine // official BI tool All-in-one Config Arma3 2.19.152469 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CFGMAGAZINES_7RND_408_MAG0";
        picture="\A3\weapons_f\data\UI\m_M24_CA.paa";
        count=7;
        ammo="B_408_Ball";
        initSpeed=910;
        descriptionShort="$STR_A3_CFGMAGAZINES_7RND_408_MAG1";
        mass=14;
    };*/
    class ld3k_7Rnd_408_419gr_Mag: CA_Magazine
    {
        author="Laid3acK";
        scope=2;
        displayName=".408 7Rnd 419gr Mag";
        picture="\ld3k_m200_ct_compat_ace3\data\ui\m_ld3k_7rnd_408_ca.paa";
        count=7;
        ammo="ld3k_B_408_419gr_Ball";
        initSpeed=869; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        descriptionShort="Caliber: .408<br />Rounds: 7<br />Used in: M200 CheyTac";
        mass=24.3; // 1.5 lbs, 680g https://cheytac.com/product/m200-m300-magazines-2/, .408 419gr cartridge weight 60g https://cheytac.com/wp-content/uploads/2024/05/CHEYTAC-USA-CATALOG.pdf#page=16, 680+ 60x7= 1100g, 2.43 lbs
    };
    class ld3k_7Rnd_408_419gr_Mag_Tracer_Red: ld3k_7Rnd_408_419gr_Mag
    {
        author="Laid3acK";
        displayName=".408 7Rnd 419gr Tracer (Red) Mag";
        ammo="ld3k_B_408_419gr_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class ld3k_7Rnd_408_419gr_Mag_Tracer_IR: ld3k_7Rnd_408_419gr_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".408 7Rnd 419gr Tracer (IR) Mag";
        ammo="ld3k_B_408_419gr_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class ld3k_7Rnd_408_305gr_Mag: ld3k_7Rnd_408_419gr_Mag
    {
        author="Laid3acK";
        displayName=".408 7Rnd 305gr Mag";
        ammo="ld3k_B_408_305gr_Ball";
        initSpeed=1067; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        mass=23.1; // 1.5 lbs, 680g https://cheytac.com/product/m200-m300-magazines-2/, .408 305gr cartridge weight 52.6g, 680+ 52.6x7= 1048g, 2.31 lbs
    };
    class ld3k_7Rnd_408_305gr_Mag_Tracer_Red: ld3k_7Rnd_408_305gr_Mag
    {
        author="Laid3acK";
        displayName=".408 7Rnd 305gr Tracer (Red) Mag";
        ammo="ld3k_B_408_305gr_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class ld3k_7Rnd_408_305gr_Mag_Tracer_IR: ld3k_7Rnd_408_305gr_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".408 7Rnd 305gr Tracer (IR) Mag";
        ammo="ld3k_B_408_305gr_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class ld3k_7Rnd_408_450gr_AP_Mag: ld3k_7Rnd_408_419gr_Mag
    {
        author="Laid3acK";
        displayName=".408 7Rnd 450gr AP Mag";
        ammo="ld3k_B_408_450gr_AP_Ball";
        initSpeed=808; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        mass=24.6; // 1.5 lbs, 680g https://cheytac.com/product/m200-m300-magazines-2/, .408 450gr cartridge weight 62g, 680+ 62x7= 1114g, 2.46 lbs
        displaynameshort="AP";
    };
    class ld3k_7Rnd_408_375gr_API_Mag: ld3k_7Rnd_408_419gr_Mag
    {
        author="Laid3acK";
        displayName=".408 7Rnd 375gr API Mag";
        ammo="ld3k_B_408_375gr_API_Ball";
        initSpeed=945; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        mass=23.8; // 1.5 lbs, 680g https://cheytac.com/product/m200-m300-magazines-2/, .408 375gr cartridge weight 57.15g, 680+ 57.15x7= 1080g, 2.38 lbs
        displaynameshort="API";
    };
    class ld3k_7Rnd_375_350gr_Mag: ld3k_7Rnd_408_419gr_Mag
    {
        author="Laid3acK";
        displayName=".375 7Rnd 350gr Mag";
        ammo="ld3k_B_375_350gr_Ball";
        initSpeed=905; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        descriptionShort="Caliber: .375<br />Rounds: 7<br />Used in: M200 CheyTac";
        mass=23.9; // 1.5 lbs, 680g https://cheytac.com/product/m200-m300-magazines-2/, .375 350gr cartridge weight 58g https://cheytac.com/wp-content/uploads/2024/05/CHEYTAC-USA-CATALOG.pdf#page=17, 680+ 58x7= 1086g, 2.39 lbs
    };
    class ld3k_7Rnd_375_350gr_Mag_Tracer_Red: ld3k_7Rnd_375_350gr_Mag
    {
        author="Laid3acK";
        displayName=".375 7Rnd 350gr Tracer (Red) Mag";
        ammo="ld3k_B_375_350gr_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class ld3k_7Rnd_375_350gr_Mag_Tracer_IR: ld3k_7Rnd_375_350gr_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".375 7Rnd 350gr Tracer (IR) Mag";
        ammo="ld3k_B_375_350gr_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class ld3k_7Rnd_375_391gr_AP_Mag: ld3k_7Rnd_375_350gr_Mag
    {
        author="Laid3acK";
        displayName=".375 7Rnd 391gr AP Mag";
        ammo="ld3k_B_375_391gr_AP_Ball";
        initSpeed=799; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        mass=24.4; // 1.5 lbs, 680g https://cheytac.com/product/m200-m300-magazines-2/, .375 391gr cartridge weight 60.7g, 680+ 60.7x7= 1105g, 2.44 lbs
        displaynameshort="AP";
    };
};
class CfgMagazineWells
{
    /*class M320_408 // official BI tool All-in-one Config Arma3 2.19.152469 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        BI_Magazines[]=
        {
            "7Rnd_408_Mag"
        };
    };*/
    class M200_408
    {
        ld3k_Magazines[]= // Weapon initSpeed -1 with ACE_barrelLength 736.6mm (29"), 869, 1067, 808, 945m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to 7Rnd_408 magazines initSpeed
        {
            "ld3k_7Rnd_408_419gr_Mag",
            "ld3k_7Rnd_408_419gr_Mag_Tracer_Red",
            "ld3k_7Rnd_408_419gr_Mag_Tracer_IR",
            "ld3k_7Rnd_408_305gr_Mag",
            "ld3k_7Rnd_408_305gr_Mag_Tracer_Red",
            "ld3k_7Rnd_408_305gr_Mag_Tracer_IR",
            "ld3k_7Rnd_408_450gr_AP_Mag",
            "ld3k_7Rnd_408_375gr_API_Mag"
        };
    };
    class M200_375
    {
        ld3k_Magazines[]= // Weapon initSpeed -1 with ACE_barrelLength 736.6mm (29"), 905, 799m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to 7Rnd_375 magazines initSpeed
        {
            "ld3k_7Rnd_375_350gr_Mag",
            "ld3k_7Rnd_375_350gr_Mag_Tracer_Red",
            "ld3k_7Rnd_375_350gr_Mag_Tracer_IR",
            "ld3k_7Rnd_375_391gr_AP_Mag"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class LRR_base_F: Rifle_Long_Base_F
    {
        class Single: Mode_SemiAuto
        {
        };
    };
    class srifle_LRR_F: LRR_base_F
    {
    };
    class ld3k_M200_CT_408: srifle_LRR_F
    {
        ACE_RailHeightAboveBore=3.20864;
        ACE_IronSightBaseAngle=0.004011;
        ACE_barrelLength=736.3; // 29"
        ACE_barrelTwist=254; // 1:10" https://cheytac.com/product/m200-intervention-2/
        ace_overheating_closedBolt=1;
        author="Laid3acK";
        _generalMacro="ld3k_M200_CT_408";
        baseWeapon="ld3k_M200_CT_408";
        displayName="M200 CheyTac .408";
        maxZeroing=3200; // .408 CheyTac 419gr distance Mach 0.8 (272m/s), LRR_base_F 2400
        initSpeed=-1; // 869, 1067, 808, 945m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), LRR_base_F 910
        magazines[]=
        {
            "ld3k_7Rnd_408_419gr_Mag",
            "ld3k_7Rnd_408_419gr_Mag_Tracer_Red",
            "ld3k_7Rnd_408_419gr_Mag_Tracer_IR",
            "ld3k_7Rnd_408_305gr_Mag",
            "ld3k_7Rnd_408_305gr_Mag_Tracer_Red",
            "ld3k_7Rnd_408_305gr_Mag_Tracer_IR",
            "ld3k_7Rnd_408_450gr_AP_Mag",
            "ld3k_7Rnd_408_375gr_API_Mag"
        };
        magazineWell[]={};
        class Single: Single // https://cheytac.com/wp-content/uploads/2024/05/CHEYTAC-USA-CATALOG.pdf#page=16
        {
            dispersion=0.000114; // 0.7 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, srifle_LRR_F 0.00018 (0.62 MOA)
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class BaseSoundModeType
            {
            };
            class SilencedSound: BaseSoundModeType
            {
                SoundSetShot[]=
                {
                    "jsrs_2025_mar10_shot_silenced_soundset",
                    "jsrs_2025_weapon_snap_silenced_soundset",
                    "jsrs_2025_127mm_silenced_tails_soundset",
                    "DMR06_silencerShot_SoundSet",
                    "DMR06_silencerTail_SoundSet",
                    "DMR06_silencerInteriorTail_SoundSet"
                };
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=290; // 29 lbs https://cheytac.com/product/m200-intervention-2/, srifle_LRR_F 420
            class MuzzleSlot: MuzzleSlot_408
            {
                iconPosition[]={0,0.4};
                iconScale=0.23;
            };
        };
    };
    class ld3k_M200_CT_camo_408: ld3k_M200_CT_408
    {
        author="Laid3acK";
        _generalMacro="ld3k_M200_CT_camo_408";
        baseWeapon="ld3k_M200_CT_camo_408";
        displayName="M200 CheyTac .408 (Camo)";
        picture="\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\data\UI\gear_M320_LRR_X_CA.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor.rvmat"
        };
    };
    class ld3k_M200_CT_tna_408: ld3k_M200_CT_camo_408
    {
        author="Laid3acK";
        _generalMacro="ld3k_M200_CT_tna_408";
        baseWeapon="ld3k_M200_CT_tna_408";
        displayName="M200 CheyTac .408 (Tropic)";
        picture="\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\UI\icon_srifle_LRR_tna_F_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\srifle_LRR_tna_F_co.paa"
        };
    };
    class ld3k_M200_CT_375: ld3k_M200_CT_408
    {
        ACE_barrelTwist=241.3; // 1:9.5" https://cheytac.com/product/m200-intervention-2/
        author="Laid3acK";
        _generalMacro="ld3k_M200_CT_375";
        baseWeapon="ld3k_M200_CT_375";
        displayName="M200 CheyTac .375";
        descriptionShort="Sniper Rifle<br />Caliber: .375";
        magazines[]=
        {
            "ld3k_7Rnd_375_350gr_Mag",
            "ld3k_7Rnd_375_350gr_Mag_Tracer_Red",
            "ld3k_7Rnd_375_350gr_Mag_Tracer_IR",
            "ld3k_7Rnd_375_391gr_AP_Mag"
        };
    };
    class ld3k_M200_CT_camo_375: ld3k_M200_CT_375
    {
        author="Laid3acK";
        _generalMacro="ld3k_M200_CT_camo_375";
        baseWeapon="ld3k_M200_CT_camo_375";
        displayName="M200 CheyTac .375 (Camo)";
        picture="\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\data\UI\gear_M320_LRR_X_CA.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor.rvmat"
        };
    };
    class ld3k_M200_CT_tna_375: ld3k_M200_CT_camo_375
    {
        author="Laid3acK";
        _generalMacro="ld3k_M200_CT_tna_375";
        baseWeapon="ld3k_M200_CT_tna_375";
        displayName="M200 CheyTac .375 (Tropic)";
        picture="\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\UI\icon_srifle_LRR_tna_F_X_CA.paa";
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F_Exp\LongRangeRifles\M320\Data\srifle_LRR_tna_F_co.paa"
        };
    };
    class ld3k_muzzle_snds_408: ItemCore // muzzle_snds_93mmg
    {
        author="Laid3acK";
        _generalMacro="ld3k_muzzle_snds_408";
        htMin=1;
        htMax=600;
        afMax=0;
        mfMax=0;
        mFact=1;
        tBody=100;
        scope=2;
        displayName="Sound Suppressor (.408, Black)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_93mmg_ca.paa";
        model="\A3\Weapons_F\Acc\acca_snds_93mmg_F.p3d";
        DLC="Mark";
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
            mass=13.8; // based on Surefire SOCOM408-ELR Suppressor 22 oz, muzzle_snds_93mmg 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            soundTypeIndex=1;
            muzzleEnd="zaslehPoint";
            alternativeFire="Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.2;
    };
    class ld3k_muzzle_snds_408_tan: ld3k_muzzle_snds_408
    {
        author="Laid3acK";
        _generalMacro="ld3k_muzzle_snds_408_tan";
        displayName="Sound Suppressor (.408, Tan)";
        picture="\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_93mmg_tan_ca.paa";
        model="\A3\Weapons_F\Acc\acca_snds_93mmg_grn_F.p3d";
        DLC="Mark";
    };
    class optic_LRPS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                };
            };
        };
    };
    class ld3k_optic_LRPS_Night_Vision: optic_LRPS // configured as Nightforce NXS 5.5-22x56 according to CheyTac INTERVENTION System https://usarmorment.com/pdf/cheytac408.pdf#page=4
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=4.2098;
        ACE_ScopeAdjust_Vertical[]={0,29}; // 100 MOA, NXS 5.5-22x56 2020 data https://www.nightforceoptics.com/content/files/downloads/0120_NF_NXS_Family_Sales_Sheet.pdf
        ACE_ScopeAdjust_Horizontal[]={-5.8,5.8}; // 40 MOA, NXS 5.5-22x56 2020 data https://www.nightforceoptics.com/content/files/downloads/0120_NF_NXS_Family_Sales_Sheet.pdf
        ACE_ScopeAdjust_VerticalIncrement=0.1; // should be 1/4 MOA https://www.nightforceoptics.com/riflescopes/nxs/nxs-55-22x56
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // should be 1/4 MOA
        author="Laid3acK";
        _generalMacro="ld3k_optic_LRPS_Night_Vision";
        displayName="LRPS Night Vision";
        class ItemInfo: ItemInfo
        {
            mass=20; // Nightforce NXS 5.5-22x56 907g https://www.nightforceoptics.com/riflescopes/nxs/nxs-55-22x56, optic_LRPS 16
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    opticsZoomMin=0.01; // optic_LRPS
                    opticsZoomMax=0.042; // optic_LRPS
                    opticsZoomInit=0.042; // optic_LRPS
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400}; // max distance at max elevation 29 mRad (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2400;
                    discretefov[]={0.042,0.01}; // optic_LRPS
                    modelOptics[]=
                    {
                        "\ld3k_m200_ct_compat_ace3\acc\ld3k_reticle_lrps_F",
                        "\ld3k_m200_ct_compat_ace3\acc\ld3k_reticle_lrps_z_F"
                    };
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class ld3k_optic_LRPS_Night_Vision_tna_F: ld3k_optic_LRPS_Night_Vision
    {
        author="Laid3acK";
        _generalMacro="ld3k_optic_LRPS_Night_Vision_tna_F";
        displayName="LRPS Night Vision (Tropic)";
        model="\A3\Weapons_F\Acc\acco_sniper02_tna_F.p3d";
        picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_tna_F_ca.paa";
    };
    class ld3k_optic_LRPS_Night_Vision_ghex_F: ld3k_optic_LRPS_Night_Vision
    {
        author="Laid3acK";
        _generalMacro="ld3k_optic_LRPS_Night_Vision_ghex_F";
        displayName="LRPS Night Vision (Green Hex)";
        model="\A3\Weapons_F\Acc\acco_sniper02_ghex_F.p3d";
        picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_ghex_F_ca.paa";
    };
};
class CfgVehicles
{
    class item_Base_F;
    class Weapon_Base_F;
    class Weapon_ld3k_M200_CT_408: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="M200 CheyTac .408";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_M200_CT_408
            {
                weapon="ld3k_M200_CT_408";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_7Rnd_408_419gr_Mag
            {
                magazine="ld3k_7Rnd_408_419gr_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_M200_CT_camo_408: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="M200 CheyTac .408 (Camo)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_M200_CT_camo_408
            {
                weapon="ld3k_M200_CT_camo_408";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_7Rnd_408_419gr_Mag
            {
                magazine="ld3k_7Rnd_408_419gr_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_M200_CT_tna_408: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="M200 CheyTac .408 (Camo)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_M200_CT_tna_408
            {
                weapon="ld3k_M200_CT_tna_408";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_7Rnd_408_419gr_Mag
            {
                magazine="ld3k_7Rnd_408_419gr_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_M200_CT_375: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="M200 CheyTac .375";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_M200_CT_375
            {
                weapon="ld3k_M200_CT_375";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_7Rnd_375_350gr_Mag
            {
                magazine="ld3k_7Rnd_375_350gr_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_M200_CT_camo_375: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="M200 CheyTac .375 (Camo)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_M200_CT_camo_375
            {
                weapon="ld3k_M200_CT_camo_375";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_7Rnd_375_350gr_Mag
            {
                magazine="ld3k_7Rnd_375_350gr_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_M200_CT_tna_375: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="M200 CheyTac .375 (Tropic)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_M200_CT_tna_375
            {
                weapon="ld3k_M200_CT_tna_375";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_7Rnd_375_350gr_Mag
            {
                magazine="ld3k_7Rnd_375_350gr_Mag";
                count=1;
            };
        };
    };
    class Item_ld3k_muzzle_snds_408: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Sound Suppressor (.408, Black)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_muzzle_snds_408
            {
                name="ld3k_muzzle_snds_408";
                count=1;
            };
        };
    };
    class Item_ld3k_muzzle_snds_408_tan: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="Sound Suppressor (.408, Tan)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_FrontSlot";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_muzzle_snds_408_tan
            {
                name="ld3k_muzzle_snds_408_tan";
                count=1;
            };
        };
    };
    class Item_ld3k_optic_LRPS_Night_Vision: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_optic_LRPS_Night_Vision
            {
                name="ld3k_optic_LRPS_Night_Vision";
                count=1;
            };
        };
    };
    class Item_ld3k_optic_LRPS_Night_Vision_tna_F: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision (Tropic)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_optic_LRPS_Night_Vision_tna_F
            {
                name="ld3k_optic_LRPS_Night_Vision_tna_F";
                count=1;
            };
        };
    };
    class Item_ld3k_optic_LRPS_Night_Vision_ghex_F: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision (Green Hex)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_optic_LRPS_Night_Vision_ghex_F
            {
                name="ld3k_optic_LRPS_Night_Vision_ghex_F";
                count=1;
            };
        };
    };
};
class ACE_ATragMX_Presets
{
    class ld3k_B_408_419gr_Ball
    {
        preset[]=
        {
            ".408 CT 419gr",
            869,
            100,
            0.0805291,
            -0.00042608,
            7.37,
            0,
            2,
            10,
            120,
            0,
            0,
            27.151,
            10.03,
            25.40,
            0.949,
            1,
            "ICAO",

            {
                {-15,850},
                {0,855},
                {10,863},
                {15,869},
                {25,884},
                {30,892},
                {35,902}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_408_305gr_Ball
    {
        preset[]=
        {
            ".408 CT 305gr",
            1067,
            100,
            0.0680144,
            -0.00062734,
            7.37,
            0,
            2,
            10,
            120,
            0,
            0,
            19.764,
            9.90,
            25.40,
            0.612,
            1,
            "ICAO",

            {
                {-15,1048},
                {0,1053},
                {10,1061},
                {15,1067},
                {25,1082},
                {30,1090},
                {35,1100}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_408_450gr_AP_Ball
    {
        preset[]=
        {
            ".408 CT AP",
            808,
            100,
            0.0864878,
            -0.00040889,
            7.37,
            0,
            2,
            10,
            120,
            0,
            0,
            29.16,
            10.15,
            25.40,
            1.009,
            1,
            "ICAO",

            {
                {-15,789},
                {0,794},
                {10,802},
                {15,808},
                {25,823},
                {30,831},
                {35,841}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_408_375gr_API_Ball
    {
        preset[]=
        {
            ".408 CT API",
            945,
            100,
            0.074771,
            -0.00050064,
            7.37,
            0,
            2,
            10,
            120,
            0,
            0,
            24.3,
            9.83,
            25.40,
            0.8,
            1,
            "ASM",

            {
                {-15,926},
                {0,931},
                {10,939},
                {15,945},
                {25,960},
                {30,968},
                {35,978}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_375_350gr_Ball
    {
        preset[]=
        {
            ".375 CT 350gr",
            905,
            100,
            0.0774962,
            -0.00040473,
            7.37,
            0,
            2,
            10,
            120,
            0,
            0,
            22.68,
            9.32,
            24.13,
            0.988,
            1,
            "ICAO",

            {
                {-15,886},
                {0,891},
                {10,895},
                {15,905},
                {25,920},
                {30,928},
                {35,938}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_375_391gr_AP_Ball
    {
        preset[]=
        {
            ".375 CT AP",
            799,
            100,
            0.0874283,
            -0.00039269,
            7.37,
            0,
            2,
            10,
            120,
            0,
            0,
            25.336,
            9.50,
            24.13,
            1.054,
            1,
            "ICAO",

            {
                {-15,780},
                {0,785},
                {10,793},
                {15,799},
                {25,814},
                {30,822},
                {35,832}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};