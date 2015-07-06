#include "TCanvas.h"
#include "TColor.h"
#include "TGraph.h"
#include "TMultiGraph.h"
#include "TAxis.h"
#include "Alignment/OfflineValidation/plugins/TkAlStyle.cc"

void z_vs_dz_PXF_1()
{
   TkAlStyle::set(INTERNAL);
//=========Macro generated from canvas: c_z_vs_dz_PXF_1/z vs. dz at PXF level
//=========  (Mon Jul  6 19:49:42 2015) by ROOT version6.02/05
   TCanvas *c_z_vs_dz_PXF_1 = new TCanvas("c_z_vs_dz_PXF_1", "z vs. dz at PXF level"/*,0,0,3508,2480*/);
/*
   c_z_vs_dz_PXF_1->Range(0,0,1,1);
   c_z_vs_dz_PXF_1->SetFillColor(0);
   c_z_vs_dz_PXF_1->SetBorderMode(0);
   c_z_vs_dz_PXF_1->SetBorderSize(2);
   c_z_vs_dz_PXF_1->SetTickx(1);
   c_z_vs_dz_PXF_1->SetTicky(1);
   c_z_vs_dz_PXF_1->SetLeftMargin(0.18);
   c_z_vs_dz_PXF_1->SetRightMargin(0.05);
   c_z_vs_dz_PXF_1->SetBottomMargin(0.16);
   c_z_vs_dz_PXF_1->SetFrameBorderMode(0);
*/
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("z_vs_dz_PXF_1");
   multigraph->SetTitle("PXF;z /cm;#Deltaz /#mum");
   
   Double_t zdzPXFp_fx279[336] = {
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
   Double_t zdzPXFp_fy279[336] = {
   693.4866,
   638.7407,
   572.0588,
   571.6342,
   664.559,
   585.5302,
   534.69,
   691.7676,
   670.5579,
   630.8173,
   621.6617,
   706.6808,
   602.6374,
   562.0707,
   735.3899,
   646.4014,
   531.8625,
   651.8404,
   681.0177,
   631.5345,
   596.4307,
   740.5099,
   699.2849,
   573.608,
   724.8349,
   707.8864,
   577.4558,
   573.0625,
   869.5878,
   684.7151,
   627.7434,
   716.6857,
   694.8278,
   644.3137,
   628.4741,
   732.824,
   739.1643,
   638.3642,
   651.6805,
   704.6472,
   676.1069,
   591.6036,
   650.1516,
   599.2294,
   675.7173,
   534.0039,
   584.9427,
   605.6157,
   617.0181,
   573.0919,
   588.4475,
   605.5059,
   613.4623,
   526.0313,
   604.5014,
   466.5267,
   577.7596,
   657.1519,
   543.9125,
   366.6545,
   623.917,
   577.6642,
   519.3558,
   535.3095,
   609.3459,
   559.6663,
   589.1489,
   551.3944,
   490.3867,
   540.3504,
   666.1683,
   559.6283,
   579.3299,
   759.9222,
   594.3365,
   564.7965,
   597.5129,
   597.4652,
   637.8546,
   551.7426,
   602.8571,
   650.6075,
   522.9254,
   485.9554,
   789.1894,
   592.1955,
   468.7125,
   511.0877,
   605.6954,
   477.7971,
   469.7587,
   718.124,
   666.5472,
   561.0793,
   505.9953,
   652.6951,
   534.5372,
   511.4053,
   666.0742,
   669.0919,
   607.1585,
   566.3833,
   641.3764,
   589.4517,
   579.0659,
   953.5461,
   688.5942,
   644.0211,
   396.656,
   625.7895,
   641.0765,
   596.934,
   947.6349,
   633.861,
   626.4788,
   244.3509,
   741.6294,
   625.0445,
   552.364,
   1466.337,
   579.1716,
   717.2846,
   586.2109,
   709.559,
   516.0328,
   567.98,
   733.5782,
   358.596,
   510.3494,
   525.493,
   487.2805,
   437.3832,
   431.3142,
   589.4137,
   199.0033,
   374.5223,
   141.122,
   394.954,
   431.6933,
   420.5558,
   532.1264,
   549.9932,
   585.4116,
   517.3661,
   548.9544,
   472.2222,
   459.1956,
   607.8171,
   514.4301,
   445.1825,
   392.1914,
   605.1367,
   356.6375,
   344.1175,
   533.5996,
   512.1664,
   447.792,
   262.2146,
   614.7808,
   387.7171,
   312.7836,
   610.9606,
   479.045,
   423.2991,
   203.6434,
   539.2869,
   422.2513,
   359.8758,
   543.6935,
   555.5922,
   440.9198,
   382.5594,
   511.3625,
   452.3155,
   390.3306,
   479.4202,
   438.0475,
   378.0756,
   456.1833,
   350.395,
   370.9178,
   416.7683,
   499.8531,
   410.8493,
   409.5366,
   475.9034,
   427.3338,
   428.0045,
   396.0586,
   492.1787,
   341.1639,
   401.142,
   430.7492,
   355.3206,
   383.7116,
   424.3484,
   407.8227,
   416.3607,
   385.2937,
   465.2432,
   340.7575,
   388.7985,
   383.8168,
   381.4986,
   410.4574,
   325.7088,
   376.0295,
   338.1581,
   343.9244,
   356.2487,
   366.3517,
   421.5169,
   412.1341,
   403.1343,
   337.2117,
   408.8805,
   411.7714,
   446.6491,
   376.9907,
   436.5678,
   516.0294,
   305.8106,
   395.1297,
   395.4504,
   360.1083,
   410.1908,
   434.0164,
   434.4284,
   330.2549,
   345.9436,
   405.5382,
   393.4796,
   369.0901,
   419.3495,
   384.0518,
   326.083,
   385.7919,
   416.1244,
   417.8209,
   463.5782,
   478.3951,
   307.8147,
   392.2379,
   412.2337,
   311.8377,
   425.919,
   511.2082,
   506.7984,
   362.0286,
   369.87,
   523.4573,
   387.5485,
   473.877,
   496.9587,
   598.0483,
   457.0977,
   498.471,
   555.8494,
   468.3055,
   619.6487,
   374.8376,
   341.8337,
   346.6225,
   354.8971,
   327.6212,
   313.8456,
   466.3208,
   348.4422,
   288.346,
   212.4198,
   299.0099,
   309.2164,
   210.2465,
   535.8983,
   371.2632,
   267.86,
   175.8897,
   295.0121,
   339.5401,
   187.9162,
   479.4211,
   267.3974,
   271.4648,
   349.813,
   262.2132,
   204.3964,
   259.1914,
   308.9452,
   319.0989,
   287.2213,
   260.3303,
   272.703,
   226.7027,
   250.89,
   306.9925,
   282.8865,
   239.4766,
   351.8996,
   267.1751,
   245.535,
   265.4386,
   388.0551,
   267.2831,
   330.1404,
   239.1568,
   240.237,
   265.3544,
   252.5904,
   231.0943,
   277.6298,
   353.1418,
   368.5475,
   245.7968,
   230.1662,
   307.0412,
   350.6799,
   204.0663,
   276.335,
   353.6469,
   242.9961,
   212.3698,
   259.3755,
   -54.17115,
   271.3542,
   215.0275,
   444.3795,
   324.2216,
   177.133,
   260.6062,
   307.5086,
   361.1758,
   284.3242,
   208.1031,
   249.5541,
   244.8709,
   237.4379};
   TGraph *graph = new TGraph(336,zdzPXFp_fx279,zdzPXFp_fy279);
   graph->SetName("zdzPXFp");
   graph->SetTitle("PXF at z>=0;z /cm;#Deltaz /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t zdzPXFn_fx280[336] = {
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
   Double_t zdzPXFn_fy280[336] = {
   -5470.489,
   -5532.138,
   -5550.871,
   -5444.141,
   -5444.523,
   -5382.488,
   -5417.04,
   -5476.176,
   -5486.974,
   -5444.279,
   -5384.54,
   -5434.49,
   -5438.213,
   -5383.024,
   -5465.437,
   -5433.427,
   -5413.422,
   -5355.624,
   -5433.828,
   -5387.07,
   -5407.908,
   -5482.37,
   -5457.83,
   -5446.708,
   -5582.191,
   -5478.218,
   -5365.691,
   -5411.399,
   -5537.08,
   -5632.689,
   -5507.586,
   -5419.784,
   -5438.135,
   -5483.577,
   -5376.125,
   -5471.321,
   -5474.792,
   -5480.87,
   -5409.262,
   -5486.266,
   -5448.165,
   -5408.615,
   -5689.792,
   -5484.068,
   -5532.167,
   -5622.235,
   -5510.563,
   -5504.156,
   -5444.344,
   -5587.45,
   -5512.7,
   -5403.976,
   -5385.95,
   -5667.206,
   -5507.176,
   -5316.588,
   -5680.742,
   -5636.294,
   -5480.066,
   -5433.861,
   -5610.896,
   -5529.052,
   -5399.828,
   -5539.518,
   -5530.026,
   -5512.146,
   -5455.849,
   -5577.639,
   -5515.469,
   -5458.372,
   -5551.521,
   -5569.979,
   -5506.257,
   -5434.956,
   -5545.797,
   -5564.923,
   -5493.524,
   -5563.161,
   -5586.091,
   -5522.132,
   -5439.243,
   -5517.567,
   -5505.06,
   -5469.204,
   -5595.496,
   -5485.869,
   -5417.549,
   -5373.569,
   -5527.681,
   -5396.864,
   -5305.149,
   -5732.833,
   -5497.693,
   -5339.985,
   -5325.947,
   -5580.623,
   -5304.191,
   -5330.338,
   -5587.967,
   -5402.68,
   -5304.09,
   -5298.055,
   -5413.762,
   -5263.204,
   -5306.547,
   -5302.432,
   -5520.998,
   -5400.778,
   -5334.426,
   -5502.249,
   -5339.026,
   -5377.026,
   -5715.495,
   -5397.361,
   -5323.487,
   -5380.834,
   -5546.399,
   -5327.253,
   -5355.492,
   -6135.272,
   -5510.114,
   -5414.267,
   -5350.746,
   -5729.608,
   -5407.807,
   -5350.747,
   -6040.21,
   -5992.146,
   -5574.739,
   -5783.251,
   -6054.306,
   -5439.954,
   -5533.949,
   -5797.676,
   -5504.271,
   -5408.401,
   -5578.903,
   -5540.251,
   -5357.103,
   -5378.424,
   -5880.56,
   -5509.803,
   -5541.333,
   -5449.618,
   -5524.72,
   -5307.378,
   -5375.796,
   -5731.058,
   -5587.403,
   -5391.415,
   -5406.607,
   -5598.658,
   -5298.108,
   -5415.802,
   -5728.407,
   -5434.063,
   -5422.64,
   -5460.859,
   -5601.303,
   -5326.965,
   -5418.112,
   -5901.749,
   -5441.779,
   -5450.337,
   -5373.818,
   -5552.394,
   -5311.233,
   -5332.79,
   -4628.841,
   -4765.025,
   -4749.385,
   -4698.112,
   -4621.763,
   -4700.261,
   -4642.883,
   -4875.383,
   -4798.266,
   -4756.421,
   -4675.265,
   -4740.004,
   -4751.374,
   -4678.284,
   -4699.8,
   -4735.359,
   -4742.089,
   -4737.784,
   -4746.109,
   -4719.804,
   -4738.056,
   -4915.945,
   -4813.744,
   -4758.835,
   -4741.851,
   -4732.865,
   -4769.134,
   -4717.32,
   -4830.627,
   -4739.725,
   -4713.573,
   -4834.656,
   -4735.605,
   -4700.494,
   -4733.782,
   -4890.822,
   -4710.759,
   -4646.813,
   -4804.085,
   -4736.445,
   -4695.851,
   -4750.551,
   -4757.084,
   -4769.554,
   -4724.578,
   -4801.97,
   -4732.054,
   -4728.287,
   -4664.094,
   -4766.126,
   -4762.308,
   -4715.283,
   -4800.619,
   -4759.753,
   -4768.625,
   -4623.383,
   -4761.343,
   -4702.37,
   -4754.876,
   -4726.198,
   -4774.716,
   -4644.016,
   -4514.384,
   -4884.826,
   -4782.572,
   -4681.232,
   -4683.73,
   -4786.9,
   -4690.61,
   -4600.157,
   -4755.884,
   -4790.511,
   -4695.013,
   -4640.792,
   -4879.398,
   -4758.806,
   -4597.363,
   -4785.443,
   -4828.82,
   -4655.923,
   -4815.042,
   -4849.35,
   -4698.476,
   -4638.65,
   -5244.797,
   -4694.107,
   -4672.593,
   -4738.314,
   -4672.262,
   -4629.039,
   -4707.12,
   -4761.273,
   -4689.122,
   -4706.752,
   -4762.504,
   -4767.998,
   -4675.343,
   -4743.591,
   -4759.381,
   -4777.7,
   -4661.638,
   -4647.304,
   -4793.143,
   -4628.331,
   -4587.837,
   -4903.476,
   -4680.38,
   -4728.698,
   -4550.739,
   -4808.932,
   -4596.901,
   -4613.371,
   -4812.201,
   -4612.197,
   -4621.216,
   -4575.485,
   -4571.534,
   -4477.755,
   -4642.725,
   -3960.298,
   -4580.753,
   -4631.97,
   -4625.215,
   -4424.095,
   -4496.798,
   -4569.006,
   -4719.66,
   -4526.861,
   -4499.393,
   -4503.319,
   -4647.783,
   -4385.761,
   -4569.18,
   -4621.238,
   -4602.927,
   -4517.564,
   -4561.013,
   -4396.932,
   -4383.031,
   -4544.071,
   -4497.054,
   -4503.926,
   -4490.515,
   -4563.419,
   -4757.395,
   -4548.951,
   -4501.984,
   -4942.464,
   -5152.745,
   -4708.047,
   -4765.203,
   -4682.569,
   -4933.987,
   -4574.906,
   -4722.773,
   -5101.864,
   -4580.988,
   -5091.302,
   -4802.493,
   -5257.803,
   -4514.925,
   -4944.359,
   -4903.513,
   -4875.573,
   -4705.136,
   -4907.869,
   -5188.772,
   -4505.595};
   graph = new TGraph(336,zdzPXFn_fx280,zdzPXFn_fy280);
   graph->SetName("zdzPXFn");
   graph->SetTitle("PXF at z<0;z /cm;#Deltaz /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("z /cm");
   //multigraph->GetXaxis()->SetLabelFont(132);
   //multigraph->GetXaxis()->SetLabelSize(0.08);
   //multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltaz /#mum");
   //multigraph->GetYaxis()->SetLabelFont(132);
   //multigraph->GetYaxis()->SetLabelSize(0.08);
   //multigraph->GetYaxis()->SetTitleSize(0.08);
   //multigraph->GetYaxis()->SetTitleFont(42);
   c_z_vs_dz_PXF_1->Modified();
   c_z_vs_dz_PXF_1->cd();
   c_z_vs_dz_PXF_1->SetSelected(c_z_vs_dz_PXF_1);
   c_z_vs_dz_PXF_1->SaveAs("z_vs_dz_PXF_1.png");
}
