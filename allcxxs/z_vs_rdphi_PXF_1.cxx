void z_vs_rdphi_PXF_1()
{
//=========Macro generated from canvas: c_z_vs_rdphi_PXF_1/z vs. rdphi at PXF level
//=========  (Mon Jul  6 19:49:43 2015) by ROOT version6.02/05
   TCanvas *c_z_vs_rdphi_PXF_1 = new TCanvas("c_z_vs_rdphi_PXF_1", "z vs. rdphi at PXF level",0,0,3508,2480);
   c_z_vs_rdphi_PXF_1->Range(0,0,1,1);
   c_z_vs_rdphi_PXF_1->SetFillColor(0);
   c_z_vs_rdphi_PXF_1->SetBorderMode(0);
   c_z_vs_rdphi_PXF_1->SetBorderSize(2);
   c_z_vs_rdphi_PXF_1->SetTickx(1);
   c_z_vs_rdphi_PXF_1->SetTicky(1);
   c_z_vs_rdphi_PXF_1->SetLeftMargin(0.18);
   c_z_vs_rdphi_PXF_1->SetRightMargin(0.05);
   c_z_vs_rdphi_PXF_1->SetBottomMargin(0.16);
   c_z_vs_rdphi_PXF_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("z_vs_rdphi_PXF_1");
   multigraph->SetTitle("PXF;z /cm;r#Delta#phi /#mum rad");
   
   Double_t zrdphiPXFp_fx303[336] = {
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
   Double_t zrdphiPXFp_fy303[336] = {
   43.23175,
   36.12288,
   44.35579,
   42.14736,
   43.48618,
   35.72636,
   41.1862,
   90.2065,
   83.22927,
   80.77296,
   78.70278,
   82.60127,
   75.50875,
   72.4174,
   120.3966,
   103.581,
   100.2599,
   102.2786,
   104.8848,
   102.3561,
   94.85153,
   155.7279,
   127.0582,
   119.5964,
   126.5847,
   128.419,
   116.8491,
   112.6602,
   163.6852,
   128.5596,
   135.7122,
   127.2593,
   140.9948,
   129.9435,
   126.8111,
   150.1271,
   136.4951,
   126.2372,
   124.5332,
   117.9526,
   124.8911,
   119.3479,
   -137.9804,
   -145.784,
   -134.7952,
   -130.0912,
   -147.6585,
   -143.6749,
   -135.7286,
   -124.1217,
   -133.7602,
   -119.1935,
   -109.175,
   -139.8524,
   -124.9782,
   -124.9439,
   -118.0847,
   -123.8862,
   -111.2481,
   -100.9578,
   -119.7588,
   -121.6995,
   -112.4289,
   -80.1675,
   -84.19543,
   -86.16978,
   -78.48239,
   -81.49154,
   -91.70502,
   -80.57542,
   -44.79606,
   -52.87909,
   -44.8113,
   -36.51767,
   -54.08721,
   -59.20918,
   -44.24006,
   2.281273,
   -10.03691,
   -7.244262,
   3.13858,
   -15.9858,
   -17.38036,
   -2.105484,
   320.1046,
   58.12084,
   41.14661,
   38.55925,
   81.18893,
   41.11118,
   27.76843,
   174.3966,
   86.31551,
   74.23115,
   61.72369,
   99.91619,
   70.68809,
   58.4054,
   124.5656,
   95.56159,
   77.67194,
   72.71741,
   99.61822,
   69.1352,
   65.16491,
   196.7166,
   120.3416,
   94.34158,
   86.11782,
   113.5492,
   94.15562,
   86.12738,
   141.8757,
   117.6098,
   85.61957,
   97.24684,
   110.8507,
   102.0461,
   92.14355,
   -2.878025,
   89.64983,
   93.85425,
   86.42484,
   99.09819,
   73.71722,
   81.38319,
   -22.66167,
   -122.379,
   -131.3001,
   -139.7449,
   -88.21394,
   -130.7992,
   -138.1238,
   -3.097903,
   -108.0976,
   -122.3422,
   -105.3462,
   -81.6852,
   -122.6828,
   -112.7947,
   -65.58645,
   -83.75511,
   -95.01373,
   -90.66591,
   -79.86786,
   -93.17766,
   -100.1417,
   -3.599661,
   -48.53556,
   -47.47204,
   -62.13847,
   -58.57811,
   -52.86309,
   -66.21201,
   28.31314,
   -34.21041,
   -38.89612,
   -45.26019,
   -28.81122,
   -39.62365,
   -45.93738,
   81.2187,
   14.92535,
   5.131301,
   -7.646204,
   17.36261,
   -8.216052,
   -9.649328,
   23.68627,
   43.92879,
   45.09647,
   47.44468,
   14.96718,
   37.31103,
   39.23027,
   4.246614,
   4.567792,
   15.32696,
   20.32528,
   -9.324496,
   1.816882,
   14.00728,
   -25.43058,
   -21.1829,
   -6.631485,
   -0.343662,
   -23.02365,
   -16.68032,
   -5.200593,
   -32.45222,
   -42.05893,
   -26.72292,
   -21.06516,
   -43.00476,
   -41.59883,
   -24.54823,
   -62.89516,
   -45.15794,
   -36.51599,
   -32.88704,
   -55.71315,
   -45.20436,
   -35.7759,
   -46.87402,
   -61.85508,
   -59.52952,
   -45.39674,
   -58.35806,
   -70.16033,
   -51.15533,
   -54.96353,
   -64.9631,
   -61.49137,
   -67.69423,
   -70.25171,
   -68.32974,
   -67.81843,
   -69.85246,
   -80.25558,
   -69.39548,
   -69.25813,
   -75.74715,
   -77.25183,
   -72.27199,
   -63.1757,
   -69.78644,
   -61.3331,
   -72.25768,
   -72.83518,
   -73.36661,
   -68.18192,
   -50.20177,
   -64.96826,
   -59.95333,
   -56.28493,
   -59.5549,
   -71.19324,
   -63.73804,
   -47.5769,
   -60.36321,
   -55.51189,
   -54.75522,
   -54.74731,
   -70.71551,
   -57.68869,
   -39.47775,
   -47.30432,
   -47.74553,
   -41.81011,
   -46.60189,
   -55.00627,
   -51.79407,
   74.61726,
   26.85699,
   44.73142,
   40.09275,
   24.13618,
   20.95994,
   41.45676,
   62.86336,
   19.85571,
   18.46784,
   26.32478,
   4.049303,
   9.645583,
   21.51312,
   33.81072,
   1.478195,
   0.5080913,
   13.17105,
   -20.36279,
   0.5570083,
   7.237912,
   158.052,
   0.08422427,
   -4.269511,
   3.038464,
   -13.62647,
   -5.14031,
   -7.360662,
   53.8715,
   -17.34229,
   -3.764637,
   3.675311,
   -16.85688,
   -13.93214,
   -5.168633,
   154.5603,
   -10.24421,
   -15.7694,
   -19.74774,
   7.715076,
   -14.16687,
   -24.02409,
   41.49173,
   -21.95074,
   -33.95271,
   -23.98265,
   -25.67863,
   -36.50352,
   -27.51528,
   28.32618,
   -34.83077,
   -37.50015,
   -33.97745,
   -41.79121,
   -37.43561,
   -42.92553,
   11.14771,
   -38.37751,
   -39.61982,
   -39.21415,
   -39.58405,
   -45.3288,
   -47.11572,
   25.58803,
   -41.07985,
   -47.84973,
   -46.35477,
   -62.14378,
   -42.32021,
   -46.21028,
   33.50344,
   -36.49738,
   -48.27426,
   -44.06526,
   -39.45773,
   -43.83028,
   -54.50216,
   58.12646,
   -26.49495,
   -35.59509,
   -39.81512,
   7.455233,
   -39.49065,
   -46.00843};
   TGraph *graph = new TGraph(336,zrdphiPXFp_fx303,zrdphiPXFp_fy303);
   graph->SetName("zrdphiPXFp");
   graph->SetTitle("PXF at z>=0;z /cm;r#Delta#phi /#mum rad");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t zrdphiPXFn_fx304[336] = {
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
   Double_t zrdphiPXFn_fy304[336] = {
   -145.0329,
   -288.1073,
   -231.3607,
   -150.3043,
   -208.2151,
   -213.3404,
   -207.6046,
   -175.9923,
   -188.3707,
   -183.9003,
   -186.0116,
   -194.8999,
   -188.5045,
   -191.5902,
   -145.5714,
   -172.2217,
   -165.9176,
   -166.3221,
   -166.2664,
   -176.0096,
   -176.7106,
   -102.9243,
   -145.6689,
   -136.8845,
   -144.3039,
   -132.514,
   -152.2384,
   -149.1891,
   -84.33382,
   -97.37572,
   -105.898,
   -112.8391,
   -97.95202,
   -112.4155,
   -117.0703,
   -24.71255,
   -62.43452,
   -64.74947,
   -77.08146,
   -53.17981,
   -74.82192,
   -81.85939,
   -67.53976,
   -78.59191,
   -81.03469,
   -82.47266,
   -75.37745,
   -81.96393,
   -84.71969,
   -109.0989,
   -128.1621,
   -121.4858,
   -114.4371,
   -214.9775,
   -104.0923,
   -91.9663,
   -137.9644,
   -156.4017,
   -149.1802,
   -153.3027,
   -149.1932,
   -161.2623,
   -157.2417,
   -149.994,
   -165.4293,
   -175.1239,
   -176.7962,
   -166.1742,
   -182.0531,
   -182.599,
   -171.7984,
   -198.7487,
   -197.7665,
   -201.2492,
   -189.5959,
   -207.7297,
   -206.73,
   -174.6473,
   -193.7998,
   -200.3429,
   -211.7172,
   -206.4776,
   -204.5992,
   -207.1841,
   -87.54882,
   -136.6997,
   -167.6484,
   -180.9904,
   -104.9466,
   -158.4024,
   -183.3621,
   -25.16269,
   -136.9148,
   -159.3305,
   -157.8814,
   -97.6601,
   -158.0749,
   -158.3472,
   -79.09391,
   -120.2192,
   -147.0979,
   -143.8301,
   -82.71339,
   -148.271,
   -151.823,
   62.51605,
   -67.04766,
   -107.1026,
   -112.8716,
   -41.09451,
   -96.64388,
   -115.8689,
   -22.2031,
   -59.10128,
   -72.3784,
   -84.66017,
   -54.95343,
   -72.99126,
   -85.06301,
   128.9291,
   -8.467831,
   -46.61678,
   -56.34597,
   22.9144,
   -48.50487,
   -65.68382,
   -58.85767,
   -56.23796,
   -84.44892,
   -90.86966,
   -64.5894,
   -81.16367,
   -93.82573,
   -16.25797,
   -95.52596,
   -119.0918,
   -120.2951,
   -89.06182,
   -117.3899,
   -123.4384,
   24.45655,
   -113.2149,
   -134.2458,
   -137.1252,
   -103.1828,
   -148.3971,
   -162.4438,
   -50.47245,
   -131.4613,
   -160.0367,
   -173.416,
   -96.2968,
   -157.8463,
   -173.4555,
   -132.3738,
   -140.6775,
   -171.4665,
   -182.7502,
   -130.4723,
   -165.675,
   -192.2031,
   -0.2527597,
   -160.5297,
   -178.7807,
   -184.367,
   -132.4486,
   -183.6052,
   -186.3074,
   386.2805,
   374.5798,
   378.468,
   371.4508,
   387.7611,
   380.5779,
   386.391,
   478.2259,
   493.8375,
   487.6697,
   481.9551,
   481.4576,
   489.002,
   481.9526,
   514.7126,
   544.7079,
   550.3353,
   542.1032,
   533.6332,
   549.8663,
   547.6558,
   557.3809,
   576.6613,
   578.7052,
   577.4103,
   555.0901,
   579.1079,
   573.0262,
   484.3452,
   547.951,
   570.071,
   576.8719,
   529.4182,
   554.3966,
   564.7328,
   464.3389,
   495.8125,
   512.6598,
   525.4393,
   474.7592,
   497.7441,
   515.2899,
   410.6136,
   435.7356,
   441.6739,
   449.4561,
   407.7708,
   428.8523,
   439.0258,
   309.3232,
   332.3281,
   344.4226,
   356.4147,
   294.6053,
   326.5611,
   333.1907,
   210.4651,
   216.487,
   221.6777,
   225.081,
   51.45291,
   53.64196,
   218.5068,
   84.85822,
   69.33311,
   76.48674,
   89.82241,
   48.25872,
   51.72823,
   66.89275,
   -45.04426,
   -74.19876,
   -58.41956,
   -53.93765,
   -89.76625,
   -82.06757,
   -71.51988,
   -182.0458,
   -179.9746,
   -184.8912,
   -179.1474,
   -195.1706,
   -196.5958,
   -201.2186,
   404.8106,
   407.1113,
   407.1165,
   407.4834,
   410.3874,
   405.7711,
   412.7548,
   453.3633,
   492.985,
   513.217,
   510.1316,
   478.4231,
   496.2733,
   519.6849,
   543.6959,
   535.7401,
   550.5439,
   552.9894,
   533.0097,
   537.382,
   558.9535,
   568.3206,
   548.0354,
   572.3896,
   588.6592,
   526.5914,
   551.5247,
   580.4282,
   565.1754,
   528.7665,
   546.9101,
   560.7793,
   501.898,
   531.3943,
   551.6977,
   488.6392,
   478.8569,
   505.0359,
   510.8937,
   416.0363,
   482.5398,
   499.3706,
   225.7473,
   302.8317,
   327.6446,
   270.8407,
   367.9027,
   405.4435,
   426.754,
   433.42,
   278.5491,
   171.1852,
   296.6847,
   81.67406,
   165.3497,
   168.1961,
   393.2389,
   125.9833,
   21.9643,
   33.46381,
   166.9449,
   171.4155,
   191.786,
   190.3623,
   62.56044,
   65.19949,
   71.08241,
   67.69637,
   43.38736,
   53.35668,
   10.50363,
   -43.84986,
   -89.15549,
   -70.31701,
   -11.56076,
   -89.38054,
   -91.96113,
   -204.9771,
   -195.1228,
   -206.1766,
   -197.4484,
   -184.9785,
   -209.5629,
   -219.9927};
   graph = new TGraph(336,zrdphiPXFn_fx304,zrdphiPXFn_fy304);
   graph->SetName("zrdphiPXFn");
   graph->SetTitle("PXF at z<0;z /cm;r#Delta#phi /#mum rad");
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
   multigraph->GetYaxis()->SetTitle("r#Delta#phi /#mum rad");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_z_vs_rdphi_PXF_1->Modified();
   c_z_vs_rdphi_PXF_1->cd();
   c_z_vs_rdphi_PXF_1->SetSelected(c_z_vs_rdphi_PXF_1);
}
