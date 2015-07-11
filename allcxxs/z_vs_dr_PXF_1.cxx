void z_vs_dr_PXF_1()
{
//=========Macro generated from canvas: c_z_vs_dr_PXF_1/z vs. dr at PXF level
//=========  (Mon Jul  6 19:49:42 2015) by ROOT version6.02/05
   TCanvas *c_z_vs_dr_PXF_1 = new TCanvas("c_z_vs_dr_PXF_1", "z vs. dr at PXF level",0,0,3508,2480);
   c_z_vs_dr_PXF_1->Range(0,0,1,1);
   c_z_vs_dr_PXF_1->SetFillColor(0);
   c_z_vs_dr_PXF_1->SetBorderMode(0);
   c_z_vs_dr_PXF_1->SetBorderSize(2);
   c_z_vs_dr_PXF_1->SetTickx(1);
   c_z_vs_dr_PXF_1->SetTicky(1);
   c_z_vs_dr_PXF_1->SetLeftMargin(0.18);
   c_z_vs_dr_PXF_1->SetRightMargin(0.05);
   c_z_vs_dr_PXF_1->SetBottomMargin(0.16);
   c_z_vs_dr_PXF_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("z_vs_dr_PXF_1");
   multigraph->SetTitle("PXF;z /cm;#Deltar /#mum");
   
   Double_t zdrPXFp_fx255[336] = {
   33.27489,
   33.25649,
   33.24274,
   33.24043,
   33.96278,
   33.95279,
   33.94971,
   33.87533,
   33.8661,
   33.85547,
   33.86097,
   34.56554,
   34.56194,
   34.55051,
   34.47862,
   34.46641,
   34.45467,
   34.45409,
   35.16404,
   35.15594,
   35.15042,
   35.07016,
   35.05978,
   35.04423,
   35.0375,
   35.75315,
   35.74413,
   35.74062,
   35.67743,
   35.66114,
   35.65063,
   35.64979,
   36.3527,
   36.35024,
   36.34109,
   36.2632,
   36.24187,
   36.23549,
   36.2338,
   36.94903,
   36.94073,
   36.92902,
   33.29956,
   33.27227,
   33.25466,
   33.23468,
   33.96698,
   33.95147,
   33.93531,
   33.884,
   33.8695,
   33.85504,
   33.83904,
   34.56604,
   34.55997,
   34.53783,
   34.47898,
   34.46547,
   34.43938,
   34.43303,
   35.16963,
   35.15479,
   35.13766,
   35.06694,
   35.05347,
   35.03469,
   35.02539,
   35.75613,
   35.74212,
   35.73038,
   35.6771,
   35.65854,
   35.64186,
   35.63125,
   36.36346,
   36.3479,
   36.33842,
   36.27473,
   36.26207,
   36.24351,
   36.23086,
   36.96238,
   36.94128,
   36.93075,
   46.27909,
   46.24847,
   46.23506,
   46.23615,
   46.94691,
   46.93538,
   46.93394,
   46.8726,
   46.8527,
   46.83795,
   46.82777,
   47.55893,
   47.53979,
   47.53629,
   47.46975,
   47.4567,
   47.44548,
   47.4407,
   48.15211,
   48.14855,
   48.14474,
   48.07006,
   48.06018,
   48.05163,
   48.05151,
   48.75838,
   48.75209,
   48.74662,
   48.68314,
   48.65288,
   48.63713,
   48.63242,
   49.35898,
   49.34353,
   49.33535,
   49.28631,
   49.24583,
   49.23727,
   49.22893,
   49.946,
   49.92733,
   49.92656,
   46.29516,
   46.25055,
   46.23252,
   46.22619,
   46.96693,
   46.93659,
   46.92667,
   46.89408,
   46.84734,
   46.83038,
   46.83373,
   47.55666,
   47.5266,
   47.53138,
   47.47414,
   47.45131,
   47.42873,
   47.42716,
   48.15453,
   48.12473,
   48.11396,
   48.07623,
   48.0429,
   48.02491,
   48.00806,
   48.75728,
   48.72842,
   48.71671,
   48.66209,
   48.647,
   48.62902,
   48.61339,
   49.35938,
   49.32551,
   49.31636,
   49.27194,
   49.25126,
   49.23168,
   49.21662,
   49.96197,
   49.93614,
   49.92197,
   33.24725,
   33.23412,
   33.21304,
   33.21927,
   33.92675,
   33.92134,
   33.91085,
   33.839,
   33.82267,
   33.80646,
   33.81255,
   34.51488,
   34.50957,
   34.50761,
   34.42381,
   34.41667,
   34.40935,
   34.40509,
   35.1112,
   35.10627,
   35.10215,
   35.03558,
   35.0192,
   35.0073,
   35.00212,
   35.71815,
   35.70953,
   35.70922,
   35.62476,
   35.61872,
   35.61284,
   35.61196,
   36.31716,
   36.31672,
   36.31483,
   36.22949,
   36.22016,
   36.21326,
   36.21675,
   36.91833,
   36.91728,
   36.91969,
   33.21711,
   33.21465,
   33.20805,
   33.20619,
   33.90368,
   33.90592,
   33.9071,
   33.81379,
   33.80529,
   33.8096,
   33.79669,
   34.49991,
   34.50507,
   34.5055,
   34.40831,
   34.41693,
   34.41682,
   34.41509,
   35.10181,
   35.10872,
   35.11831,
   35.01965,
   35.00912,
   35.00625,
   34.99559,
   35.70967,
   35.7098,
   35.70993,
   35.63153,
   35.61374,
   35.61479,
   35.60489,
   36.3078,
   36.31376,
   36.30041,
   36.22807,
   36.22549,
   36.21772,
   36.19537,
   36.91012,
   36.91732,
   36.90213,
   46.22884,
   46.21998,
   46.2166,
   46.22267,
   46.92217,
   46.91557,
   46.91166,
   46.85358,
   46.82365,
   46.8168,
   46.81785,
   47.52057,
   47.51682,
   47.51248,
   47.43252,
   47.42532,
   47.41679,
   47.40229,
   48.11647,
   48.11623,
   48.10936,
   48.03602,
   48.02158,
   48.00265,
   47.99189,
   48.70409,
   48.70782,
   48.69715,
   48.64509,
   48.61978,
   48.61288,
   48.60833,
   49.31509,
   49.3049,
   49.30339,
   49.21587,
   49.21471,
   49.20408,
   49.19655,
   49.90747,
   49.89999,
   49.90098,
   46.21512,
   46.20794,
   46.19812,
   46.21951,
   46.90448,
   46.89972,
   46.90549,
   46.83795,
   46.81971,
   46.81946,
   46.81898,
   47.51276,
   47.50868,
   47.51261,
   47.42781,
   47.4203,
   47.42644,
   47.43542,
   48.12106,
   48.11508,
   48.12857,
   48.03899,
   48.02127,
   48.02181,
   48.02031,
   48.71407,
   48.70821,
   48.71858,
   48.60214,
   48.60118,
   48.59371,
   48.61718,
   49.3013,
   49.29485,
   49.30245,
   49.27571,
   49.23699,
   49.22664,
   49.22564,
   49.95038,
   49.90559,
   49.91224};
   Double_t zdrPXFp_fy255[336] = {
   -173.8585,
   -168.2283,
   -182.0404,
   -181.9111,
   -167.4649,
   -169.4084,
   -192.3893,
   -157.4151,
   -151.3491,
   -150.1819,
   -128.7667,
   -139.5442,
   -158.5631,
   -153.2977,
   -112.7486,
   -122.5923,
   -150.1668,
   -101.4418,
   -107.0321,
   -119.1298,
   -118.0129,
   -78.02402,
   -77.79842,
   -108.3295,
   -43.19092,
   -67.47466,
   -102.9515,
   -97.03371,
   -19.92798,
   -31.53419,
   -55.93726,
   -21.35859,
   -32.62429,
   -40.7903,
   -45.89198,
   -9.791154,
   9.119967,
   -9.99957,
   4.132749,
   3.235336,
   1.305726,
   -27.85463,
   -41.12379,
   -41.27604,
   -28.46895,
   -73.61821,
   -47.29285,
   -40.91631,
   -36.36501,
   -90.34822,
   -80.67421,
   -84.42236,
   -86.61971,
   -91.26941,
   -79.95473,
   -130.8299,
   -122.8874,
   -87.32482,
   -121.7229,
   -199.7477,
   -104.231,
   -109.2135,
   -128.1133,
   -162.3725,
   -139.0905,
   -145.7391,
   -139.6281,
   -154.6359,
   -164.7152,
   -154.0882,
   -145.6155,
   -168.2446,
   -157.6031,
   -85.34521,
   -154.6739,
   -156.5063,
   -141.5901,
   -185.5219,
   -156.1233,
   -176.6014,
   -169.7708,
   -153.5522,
   -173.9998,
   -207.2019,
   -112.2619,
   -116.5526,
   -147.3612,
   -141.8741,
   -114.2318,
   -141.3153,
   -150.027,
   -126.0887,
   -90.65429,
   -127.4247,
   -140.3961,
   -86.16689,
   -119.4936,
   -129.3629,
   -78.16324,
   -70.53374,
   -92.85004,
   -110.7105,
   -67.40345,
   -83.09625,
   -97.1601,
   240.4998,
   -39.58593,
   -51.37254,
   -126.9593,
   -33.2207,
   -40.97911,
   -62.77937,
   18.07193,
   -20.78418,
   -11.36707,
   -139.5665,
   4.654867,
   -17.14461,
   -43.95,
   462.3173,
   -2.80019,
   21.78201,
   -9.522903,
   13.03144,
   -10.72041,
   -13.27684,
   -91.95066,
   -117.1627,
   -72.35909,
   -61.17556,
   -111.4329,
   -92.6081,
   -85.86539,
   -139.6737,
   -170.0247,
   -130.7295,
   -224.326,
   -144.3604,
   -112.8027,
   -128.0203,
   -141.2428,
   -122.7242,
   -104.3406,
   -121.8431,
   -118.6144,
   -132.2382,
   -130.9915,
   -138.2373,
   -143.5659,
   -173.3455,
   -178.4703,
   -107.987,
   -180.8685,
   -185.1328,
   -151.5496,
   -134.3158,
   -159.9984,
   -208.2184,
   -109.6454,
   -162.1585,
   -192.2911,
   -176.9651,
   -158.7309,
   -171.324,
   -227.7211,
   -142.1729,
   -157.1672,
   -182.0441,
   53.72735,
   54.90171,
   34.62496,
   12.37332,
   52.57906,
   38.6159,
   29.15981,
   52.24456,
   35.5818,
   23.22349,
   58.89892,
   27.59569,
   22.08561,
   41.09744,
   62.41735,
   44.48327,
   33.57953,
   62.23752,
   46.73149,
   42.38232,
   30.35213,
   51.11937,
   27.07225,
   35.28822,
   45.06741,
   28.33777,
   34.24047,
   36.43291,
   34.78216,
   26.68874,
   14.17487,
   47.71983,
   16.05088,
   14.45141,
   11.51112,
   7.199676,
   23.16976,
   -8.309722,
   11.97892,
   3.245975,
   1.951384,
   -5.205595,
   -13.12749,
   -0.8043238,
   -10.00395,
   -6.918408,
   -12.08002,
   -5.171017,
   -3.386575,
   -1.4145,
   -9.39847,
   -10.10582,
   27.85024,
   -25.59993,
   -8.57093,
   -22.40227,
   -42.6118,
   -20.20905,
   -22.9898,
   -20.03738,
   -39.59074,
   -37.57041,
   -25.65011,
   -39.12092,
   -44.73719,
   -42.48043,
   -57.45401,
   -49.34991,
   -38.43633,
   -39.67376,
   -33.03909,
   -15.12687,
   -20.77782,
   -99.81397,
   -29.78046,
   -21.99922,
   -80.08864,
   -50.47044,
   -12.96649,
   -19.73442,
   -78.26907,
   -48.33701,
   -4.542609,
   -56.90495,
   5.378826,
   15.12615,
   26.09496,
   -0.131377,
   16.60587,
   28.45283,
   -1.220179,
   61.14641,
   2.735958,
   -21.95669,
   -27.42202,
   20.43623,
   -12.47998,
   -36.06691,
   30.00013,
   11.84781,
   -15.98889,
   -56.71672,
   18.79015,
   -8.554493,
   -48.94735,
   16.37879,
   7.385787,
   -22.33726,
   -59.15707,
   0.5400996,
   -1.928354,
   -49.79641,
   53.41652,
   -7.016038,
   -25.47178,
   -14.00471,
   0.8990882,
   -29.93527,
   -39.5004,
   -59.6126,
   2.879641,
   -16.07368,
   -35.10313,
   -5.487442,
   -22.96254,
   -30.53704,
   -16.40028,
   -13.73505,
   -31.67362,
   -21.79816,
   -5.180115,
   -23.43589,
   -35.83607,
   -13.59937,
   -11.66345,
   -7.916754,
   -45.48249,
   -12.37914,
   -15.30025,
   -28.37986,
   -60.21947,
   -19.98636,
   0.6562396,
   -5.635466,
   -24.29108,
   -28.28398,
   -19.37774,
   -18.76174,
   -27.37117,
   -24.48612,
   -17.4447,
   -2.729607,
   -38.74067,
   -38.40882,
   -120.4656,
   -15.15881,
   -37.28208,
   17.98068,
   -1.565678,
   -40.89248,
   -24.00968,
   -68.00942,
   -20.46274,
   -34.59311,
   -59.51208,
   -70.45026,
   -37.50679,
   -39.16422};
   TGraph *graph = new TGraph(336,zdrPXFp_fx255,zdrPXFp_fy255);
   graph->SetName("zdrPXFp");
   graph->SetTitle("PXF at z>=0;z /cm;#Deltar /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t zdrPXFn_fx256[336] = {
   -34.78711,
   -34.77715,
   -34.76987,
   -34.75834,
   -35.47632,
   -35.46437,
   -35.4614,
   -35.40694,
   -35.39286,
   -35.37223,
   -35.35828,
   -36.09199,
   -36.08569,
   -36.05942,
   -35.99912,
   -35.97691,
   -35.96273,
   -35.95506,
   -36.6866,
   -36.67295,
   -36.65891,
   -36.61117,
   -36.58837,
   -36.5702,
   -36.57151,
   -37.29136,
   -37.26892,
   -37.25856,
   -37.21792,
   -37.19262,
   -37.17239,
   -37.161,
   -37.89429,
   -37.88043,
   -37.85577,
   -37.81255,
   -37.78156,
   -37.77303,
   -37.75888,
   -38.50627,
   -38.48558,
   -38.47019,
   -34.81509,
   -34.78963,
   -34.75871,
   -34.76787,
   -35.49628,
   -35.4707,
   -35.45259,
   -35.39877,
   -35.37808,
   -35.36066,
   -35.35314,
   -36.08751,
   -36.06892,
   -36.04457,
   -36.00823,
   -35.99231,
   -35.9663,
   -35.95469,
   -36.69121,
   -36.67426,
   -36.65248,
   -36.5909,
   -36.57889,
   -36.55679,
   -36.55429,
   -37.28292,
   -37.27149,
   -37.25708,
   -37.20253,
   -37.1962,
   -37.17006,
   -37.15862,
   -37.8896,
   -37.87907,
   -37.86464,
   -37.80687,
   -37.79827,
   -37.77845,
   -37.76418,
   -38.49835,
   -38.48262,
   -38.46757,
   -47.79998,
   -47.7809,
   -47.76908,
   -47.76015,
   -48.48631,
   -48.46661,
   -48.45536,
   -48.42828,
   -48.39386,
   -48.36732,
   -48.36916,
   -49.10032,
   -49.06579,
   -49.06245,
   -49.01825,
   -48.98448,
   -48.96527,
   -48.96873,
   -49.6902,
   -49.66378,
   -49.65643,
   -49.59462,
   -49.60087,
   -49.57233,
   -49.56363,
   -50.29795,
   -50.27182,
   -50.26582,
   -50.22659,
   -50.18034,
   -50.16212,
   -50.15903,
   -50.89458,
   -50.85894,
   -50.85109,
   -50.86794,
   -50.79061,
   -50.76222,
   -50.7495,
   -51.51617,
   -51.47191,
   -51.45169,
   -47.78378,
   -47.77496,
   -47.75903,
   -47.76237,
   -48.47762,
   -48.45275,
   -48.44798,
   -48.41842,
   -48.37706,
   -48.36485,
   -48.36992,
   -49.07818,
   -49.05941,
   -49.04995,
   -49.02374,
   -48.98526,
   -48.97088,
   -48.95458,
   -49.68358,
   -49.66371,
   -49.64734,
   -49.6157,
   -49.59268,
   -49.56186,
   -49.55591,
   -50.29727,
   -50.2662,
   -50.25776,
   -50.218,
   -50.17928,
   -50.16692,
   -50.16413,
   -50.90059,
   -50.87327,
   -50.86567,
   -50.83582,
   -50.78267,
   -50.76823,
   -50.76032,
   -51.49437,
   -51.46156,
   -51.45931,
   -34.83071,
   -34.81696,
   -34.80786,
   -34.8013,
   -35.51928,
   -35.51037,
   -35.49425,
   -35.44073,
   -35.43225,
   -35.41652,
   -35.40622,
   -36.12519,
   -36.11466,
   -36.10536,
   -36.02432,
   -36.02082,
   -36.00815,
   -36.00773,
   -36.71909,
   -36.71149,
   -36.70804,
   -36.64837,
   -36.63376,
   -36.61609,
   -36.60054,
   -37.32113,
   -37.3151,
   -37.29161,
   -37.23844,
   -37.22423,
   -37.20306,
   -37.20464,
   -37.91482,
   -37.90772,
   -37.89278,
   -37.83813,
   -37.81632,
   -37.79448,
   -37.79905,
   -38.51529,
   -38.5044,
   -38.49532,
   -34.83701,
   -34.8226,
   -34.79806,
   -34.78906,
   -35.52029,
   -35.50502,
   -35.47902,
   -35.44364,
   -35.42976,
   -35.39995,
   -35.38593,
   -36.13277,
   -36.11987,
   -36.09319,
   -36.04433,
   -36.02288,
   -36.00355,
   -35.98823,
   -36.7323,
   -36.70825,
   -36.68428,
   -36.66178,
   -36.62565,
   -36.59786,
   -36.57814,
   -37.33469,
   -37.30103,
   -37.27286,
   -37.24777,
   -37.23158,
   -37.209,
   -37.17806,
   -37.9402,
   -37.91811,
   -37.88361,
   -37.85893,
   -37.83923,
   -37.81253,
   -37.79745,
   -38.54022,
   -38.53598,
   -38.49224,
   -47.87779,
   -47.81731,
   -47.80832,
   -47.82155,
   -48.51908,
   -48.50743,
   -48.51275,
   -48.39873,
   -48.39687,
   -48.39167,
   -48.39437,
   -49.09703,
   -49.08984,
   -49.09761,
   -49.03156,
   -49.01293,
   -48.99029,
   -48.98678,
   -49.71748,
   -49.69651,
   -49.68514,
   -49.61583,
   -49.58361,
   -49.5881,
   -49.58143,
   -50.30091,
   -50.28726,
   -50.28543,
   -50.23363,
   -50.20494,
   -50.19244,
   -50.18372,
   -50.91411,
   -50.88852,
   -50.88818,
   -50.74285,
   -50.80707,
   -50.79947,
   -50.7687,
   -51.50434,
   -51.49572,
   -51.48769,
   -47.83073,
   -47.81586,
   -47.78989,
   -47.79012,
   -48.51976,
   -48.48944,
   -48.48852,
   -48.42832,
   -48.41381,
   -48.39179,
   -48.3823,
   -49.11136,
   -49.08369,
   -49.08568,
   -49.0286,
   -49.01074,
   -48.98287,
   -48.97657,
   -49.72829,
   -49.691,
   -49.67727,
   -49.67002,
   -49.63038,
   -49.59268,
   -49.57832,
   -50.33202,
   -50.29759,
   -50.28023,
   -50.267,
   -50.23546,
   -50.19385,
   -50.18824,
   -50.95126,
   -50.9048,
   -50.88273,
   -50.8909,
   -50.82652,
   -50.81824,
   -50.79675,
   -51.56165,
   -51.50628,
   -51.50278};
   Double_t zdrPXFn_fy256[336] = {
   -115.9937,
   -199.4001,
   -228.4314,
   -319.11,
   -63.1433,
   -77.88931,
   -78.35739,
   -87.38721,
   -91.27217,
   -103.5049,
   -115.0969,
   -89.05672,
   -97.22427,
   -115.7153,
   -123.8146,
   -124.826,
   -141.4886,
   -150.258,
   -119.1933,
   -137.1685,
   -130.2087,
   -150.6087,
   -142.3883,
   -159.258,
   -109.9651,
   -132.4324,
   -156.1794,
   -155.0714,
   -163.6783,
   -133.0232,
   -163.8136,
   -185.9698,
   -174.6324,
   -163.6719,
   -198.1451,
   -190.4205,
   -179.6008,
   -188.206,
   -212.4373,
   -172.0972,
   -173.483,
   -204.2023,
   178.8107,
   125.6558,
   149.5124,
   206.4627,
   146.3824,
   139.6118,
   131.406,
   153.3479,
   150.6028,
   111.7885,
   95.24426,
   124.5134,
   240.1675,
   282.9092,
   136.5803,
   150.8833,
   111.1754,
   96.82406,
   133.4869,
   130.6654,
   89.24302,
   69.63476,
   72.12235,
   68.60552,
   59.87815,
   89.33436,
   81.24513,
   62.22064,
   47.02215,
   60.54922,
   43.99526,
   25.70473,
   54.6647,
   65.70562,
   46.93119,
   13.95058,
   22.6952,
   6.457978,
   -6.701698,
   17.98355,
   8.785631,
   -1.045204,
   -94.51808,
   -92.28318,
   -105.2007,
   -117.2755,
   -86.27373,
   -101.3147,
   -121.3965,
   -91.75249,
   -87.51537,
   -129.3777,
   -142.6357,
   -75.97206,
   -125.1222,
   -136.0079,
   -171.0878,
   -117.4774,
   -138.0659,
   -157.9939,
   -125.2589,
   -144.2863,
   -151.2287,
   -255.206,
   -121.7444,
   -133.5822,
   -154.6702,
   -130.5555,
   -150.3411,
   -135.7296,
   -128.5847,
   -132.6978,
   -158.2959,
   -144.6364,
   -104.2859,
   -153.4682,
   -159.1038,
   -49.84445,
   -134.9309,
   -153.166,
   -173.8887,
   -94.92913,
   -143.7288,
   -158.4373,
   164.2745,
   174.8299,
   91.37351,
   149.9459,
   203.6758,
   66.87775,
   83.27386,
   108.8983,
   91.97143,
   72.43831,
   114.1533,
   104.8302,
   65.33109,
   59.40973,
   89.17096,
   70.63589,
   70.63319,
   32.15337,
   74.06548,
   43.67017,
   55.38694,
   51.04462,
   63.85896,
   20.30551,
   21.73288,
   61.58641,
   7.225418,
   27.22796,
   56.25225,
   -1.379139,
   -6.750434,
   -5.726612,
   36.65432,
   -19.84695,
   -2.129817,
   -30.98948,
   -28.86685,
   -34.51254,
   -63.27309,
   -18.00762,
   -55.07351,
   -69.22313,
   -453.9038,
   -426.8325,
   -428.9865,
   -451.9723,
   -446.1649,
   -436.4727,
   -463.2982,
   -280.4763,
   -310.4285,
   -324.5518,
   -351.4674,
   -288.6707,
   -299.5569,
   -330.2682,
   -177.9044,
   -185.4178,
   -201.8093,
   -189.2958,
   -151.8424,
   -174.8241,
   -184.9806,
   15.46406,
   -18.00676,
   -41.34657,
   -40.83601,
   -2.542113,
   -17.6668,
   -35.25761,
   152.6263,
   114.9271,
   91.45112,
   137.5351,
   146.2491,
   114.7358,
   124.2997,
   282.0317,
   239.9023,
   210.1443,
   262.111,
   268.2472,
   251.215,
   249.8818,
   342.022,
   344.6404,
   334.7863,
   371.54,
   359.4832,
   355.0955,
   325.7523,
   425.0398,
   435.6278,
   425.149,
   464.5329,
   456.9914,
   452.9458,
   410.4407,
   495.3664,
   486.3538,
   501.5449,
   505.6788,
   340.255,
   347.9825,
   403.2083,
   551.9427,
   545.2789,
   526.6595,
   518.2646,
   546.0625,
   528.7205,
   492.5056,
   504.3978,
   540.993,
   512.7745,
   495.571,
   548.3505,
   522.2057,
   475.7788,
   478.3461,
   483.1741,
   429.9645,
   501.1088,
   485.5806,
   439.0433,
   430.8952,
   -283.1339,
   -409.092,
   -416.1031,
   -404.0583,
   -383.4251,
   -407.2781,
   -402.2028,
   -248.9984,
   -286.6983,
   -295.0019,
   -284.445,
   -234.9163,
   -272.8809,
   -276.9421,
   -164.9189,
   -124.2577,
   -165.3398,
   -168.3876,
   -95.43156,
   -146.1325,
   -176.0866,
   3.223628,
   7.867178,
   -3.638863,
   -72.32247,
   65.86848,
   -13.39598,
   -40.34617,
   133.9669,
   125.1127,
   103.6439,
   69.83466,
   143.5028,
   97.49174,
   105.9977,
   -42.71726,
   242.2945,
   229.16,
   222.1194,
   257.0394,
   230.7512,
   226.2153,
   420.0888,
   415.1811,
   404.3689,
   381.4839,
   349.666,
   285.718,
   310.0954,
   501.1822,
   495.4195,
   471.4341,
   440.9185,
   485.1871,
   464.909,
   470.214,
   557.6902,
   538.7833,
   502.6327,
   495.4157,
   531.4361,
   487.8386,
   461.1927,
   575.3851,
   649.9109,
   545.7467,
   568.066,
   550.3399,
   595.6921,
   506.6971,
   494.8064,
   590.553,
   495.7263,
   618.2996,
   499.1544,
   635.8079,
   458.7135,
   555.8433,
   528.7991,
   506.9406,
   439.0708,
   505.1177,
   559.6124,
   385.0189};
   graph = new TGraph(336,zdrPXFn_fx256,zdrPXFn_fy256);
   graph->SetName("zdrPXFn");
   graph->SetTitle("PXF at z<0;z /cm;#Deltar /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("z /cm");
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltar /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_z_vs_dr_PXF_1->Modified();
   c_z_vs_dr_PXF_1->cd();
   c_z_vs_dr_PXF_1->SetSelected(c_z_vs_dr_PXF_1);
}
