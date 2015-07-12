#include "TCanvas.h"
#include "TColor.h"
#include "TGraph.h"
#include "TMultiGraph.h"
#include "TAxis.h"
#include "TText.h"
#include "TLatex.h"
#include "TkAlStyle.cc"
#include "SetDifferentTextSettings.C"

void r_vs_dz_PXF_1()
{
   TkAlStyle::set(PRELIMINARY);

//=========Macro generated from canvas: c_r_vs_dz_PXF_1/r vs. dz at PXF level
//=========  (Mon Jul  6 19:49:37 2015) by ROOT version6.02/05
   TCanvas *c_r_vs_dz_PXF_1 = new TCanvas("c_r_vs_dz_PXF_1", "r vs. dz at PXF level"/*,0,0,3508,2480*/);
/*
   c_r_vs_dz_PXF_1->Range(0,0,1,1);
   c_r_vs_dz_PXF_1->SetFillColor(0);
   c_r_vs_dz_PXF_1->SetBorderMode(0);
   c_r_vs_dz_PXF_1->SetBorderSize(2);
   c_r_vs_dz_PXF_1->SetTickx(1);
   c_r_vs_dz_PXF_1->SetTicky(1);
   c_r_vs_dz_PXF_1->SetLeftMargin(0.18);
   c_r_vs_dz_PXF_1->SetRightMargin(0.05);
   c_r_vs_dz_PXF_1->SetBottomMargin(0.16);
   c_r_vs_dz_PXF_1->SetFrameBorderMode(0);
*/
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("r_vs_dz_PXF_1");
   multigraph->SetTitle(";r /cm;#Deltaz=z_{Al2}-z_{Al1} /#mum");
   
   Double_t rdzPXFp_fx39[336] = {
   6.106401,
   8.563364,
   11.43401,
   13.90111,
   7.251857,
   10.18789,
   13.11604,
   5.982313,
   8.451392,
   11.31779,
   13.79458,
   7.14822,
   10.0769,
   13.00568,
   5.876385,
   8.356972,
   11.2238,
   13.70129,
   7.051064,
   9.990301,
   12.92379,
   5.817294,
   8.280292,
   11.14038,
   13.61471,
   6.977606,
   9.907657,
   12.84206,
   5.759933,
   8.228557,
   11.09613,
   13.56359,
   6.943403,
   9.87075,
   12.80046,
   5.754254,
   8.22997,
   11.09063,
   13.56243,
   6.944298,
   9.873786,
   12.79802,
   6.692895,
   9.153741,
   12.02981,
   14.49222,
   7.855189,
   10.78746,
   13.71762,
   6.623472,
   9.084364,
   11.95498,
   14.43635,
   7.79897,
   10.72546,
   13.66182,
   6.549788,
   9.017433,
   11.87457,
   14.3494,
   7.72685,
   10.65698,
   13.58635,
   6.454005,
   8.921894,
   11.78555,
   14.25144,
   7.613702,
   10.54158,
   13.4715,
   6.348019,
   8.816017,
   11.69283,
   14.15677,
   7.493212,
   10.42033,
   13.35568,
   6.213303,
   8.67462,
   11.54013,
   14.00932,
   7.378524,
   10.30706,
   13.23215,
   6.082343,
   8.549484,
   11.40962,
   13.87092,
   7.246112,
   10.16292,
   13.09463,
   5.975424,
   8.435238,
   11.29476,
   13.76677,
   7.121896,
   10.04554,
   12.97947,
   5.867922,
   8.330791,
   11.20286,
   13.66574,
   7.024712,
   9.96374,
   12.89054,
   5.776233,
   8.238491,
   11.11639,
   13.60596,
   6.953769,
   9.873045,
   12.80716,
   5.745403,
   8.208947,
   11.07963,
   13.56271,
   6.915414,
   9.851241,
   12.77191,
   5.723717,
   8.213117,
   11.08478,
   13.54397,
   6.909966,
   9.843103,
   12.76847,
   6.6993,
   9.160823,
   12.03088,
   14.51344,
   7.873457,
   10.80234,
   13.7315,
   6.6358,
   9.101232,
   11.97367,
   14.44251,
   7.812913,
   10.74683,
   13.66723,
   6.547237,
   9.012671,
   11.88271,
   14.35989,
   7.722469,
   10.65754,
   13.58543,
   6.467738,
   8.922847,
   11.78781,
   14.25177,
   7.616088,
   10.5314,
   13.46402,
   6.325484,
   8.798816,
   11.65857,
   14.12336,
   7.499458,
   10.42446,
   13.35138,
   6.193932,
   8.66192,
   11.52488,
   13.98813,
   7.363963,
   10.29515,
   13.21634,
   5.852403,
   8.328551,
   11.19268,
   13.67221,
   7.042376,
   9.972835,
   12.89859,
   5.933785,
   8.388553,
   11.25711,
   13.75584,
   7.122422,
   10.05882,
   12.97951,
   6.027087,
   8.502177,
   11.37663,
   13.83459,
   7.237107,
   10.15332,
   13.08506,
   6.135626,
   8.614366,
   11.48796,
   13.95046,
   7.338465,
   10.25681,
   13.18462,
   6.252396,
   8.7333,
   11.597,
   14.07544,
   7.456499,
   10.3768,
   13.29442,
   6.378231,
   8.844039,
   11.71822,
   14.1944,
   7.578437,
   10.49614,
   13.43414,
   6.471997,
   8.943899,
   11.81668,
   14.29861,
   7.68961,
   10.61216,
   13.53092,
   6.575089,
   9.060486,
   11.93002,
   14.39889,
   7.776586,
   10.70387,
   13.63515,
   6.645149,
   9.113589,
   11.98539,
   14.46824,
   7.825317,
   10.7478,
   13.67759,
   6.698929,
   9.16975,
   12.04232,
   14.5097,
   7.85635,
   10.77776,
   13.71474,
   6.713793,
   9.175447,
   12.05279,
   14.52155,
   7.892173,
   10.82422,
   13.7499,
   6.684303,
   9.167706,
   12.03627,
   14.50524,
   7.865965,
   10.7957,
   13.71681,
   5.804626,
   8.295797,
   11.17136,
   13.63895,
   7.018672,
   9.946726,
   12.86819,
   5.909084,
   8.379898,
   11.24628,
   13.72541,
   7.100149,
   10.01755,
   12.94286,
   6.002181,
   8.471779,
   11.3406,
   13.82072,
   7.21245,
   10.13009,
   13.06135,
   6.126344,
   8.598741,
   11.45599,
   13.94933,
   7.313463,
   10.23971,
   13.16042,
   6.256428,
   8.722215,
   11.58859,
   14.06345,
   7.439849,
   10.3593,
   13.28372,
   6.375036,
   8.836886,
   11.71193,
   14.18812,
   7.560885,
   10.48145,
   13.41186,
   6.480867,
   8.959374,
   11.82967,
   14.31648,
   7.678825,
   10.60947,
   13.53926,
   6.576517,
   9.047961,
   11.9189,
   14.40415,
   7.773538,
   10.69928,
   13.63344,
   6.648513,
   9.116757,
   12.00297,
   14.47463,
   7.831963,
   10.7564,
   13.68716,
   6.69787,
   9.172207,
   12.04711,
   14.52133,
   7.88098,
   10.81161,
   13.73324,
   6.709542,
   9.179335,
   12.06113,
   14.53843,
   7.899485,
   10.82994,
   13.76492,
   6.703675,
   9.168508,
   12.04334,
   14.51259,
   7.872284,
   10.79655,
   13.72922};
   Double_t rdzPXFp_fy39[336] = {
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
   TGraph *graph = new TGraph(336,rdzPXFp_fx39,rdzPXFp_fy39);
   graph->SetName("rdzPXFp");
   graph->SetTitle("PXF at z>=0;r /cm;#Deltaz /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t rdzPXFn_fx40[336] = {
   6.090453,
   8.553477,
   11.42126,
   13.88496,
   7.249039,
   10.16592,
   13.09396,
   5.988542,
   8.448001,
   11.31387,
   13.79256,
   7.127621,
   10.02826,
   12.98209,
   5.880697,
   8.34839,
   11.21427,
   13.68651,
   7.051502,
   9.972571,
   12.90246,
   5.80092,
   8.27234,
   11.15047,
   13.63327,
   6.976398,
   9.906002,
   12.83427,
   5.758087,
   8.236194,
   11.1055,
   13.57837,
   6.946638,
   9.87816,
   12.80596,
   5.760213,
   8.226215,
   11.09703,
   13.5756,
   6.929648,
   9.859048,
   12.7805,
   6.690555,
   9.170884,
   12.02925,
   14.51861,
   7.863796,
   10.7922,
   13.72163,
   6.636504,
   9.112585,
   11.98391,
   14.44567,
   7.806471,
   10.74068,
   13.67221,
   6.553238,
   9.015395,
   11.88867,
   14.35616,
   7.728478,
   10.64651,
   13.57028,
   6.454512,
   8.922779,
   11.79433,
   14.26714,
   7.631309,
   10.55385,
   13.47066,
   6.335814,
   8.801602,
   11.66941,
   14.14223,
   7.498204,
   10.42383,
   13.35109,
   6.208178,
   8.676886,
   11.54592,
   14.01066,
   7.383637,
   10.30521,
   13.2446,
   6.108884,
   8.567852,
   11.43937,
   13.91628,
   7.276234,
   10.20838,
   13.1316,
   5.975992,
   8.455853,
   11.31473,
   13.79123,
   7.167102,
   10.08212,
   13.00989,
   5.868651,
   8.350986,
   11.22389,
   13.70169,
   7.05091,
   9.984129,
   12.9154,
   5.785697,
   8.274575,
   11.14489,
   13.61835,
   6.976818,
   9.901198,
   12.83978,
   5.737956,
   8.221829,
   11.09973,
   13.57665,
   6.919716,
   9.847572,
   12.77284,
   5.740235,
   8.197845,
   11.06512,
   13.54575,
   6.910231,
   9.840356,
   12.77064,
   6.683514,
   9.170507,
   12.04061,
   14.50574,
   7.864486,
   10.79445,
   13.72187,
   6.633679,
   9.117276,
   11.97726,
   14.45651,
   7.815224,
   10.73468,
   13.67731,
   6.554899,
   9.0247,
   11.89847,
   14.37244,
   7.744459,
   10.67562,
   13.59823,
   6.475046,
   8.952916,
   11.8121,
   14.29264,
   7.647736,
   10.57038,
   13.49802,
   6.357856,
   8.816862,
   11.68812,
   14.1579,
   7.503355,
   10.42841,
   13.36453,
   6.227358,
   8.687447,
   11.56175,
   14.04066,
   7.399182,
   10.31361,
   13.25159,
   5.81735,
   8.285975,
   11.16177,
   13.62815,
   6.9959,
   9.939433,
   12.86548,
   5.906643,
   8.367805,
   11.23968,
   13.71886,
   7.085088,
   10.01176,
   12.95296,
   5.9958,
   8.475327,
   11.34516,
   13.81367,
   7.197817,
   10.12215,
   13.03958,
   6.12625,
   8.596668,
   11.46357,
   13.94145,
   7.296258,
   10.22207,
   13.14822,
   6.238758,
   8.708011,
   11.57576,
   14.06267,
   7.447596,
   10.36608,
   13.2866,
   6.365893,
   8.821733,
   11.70296,
   14.17441,
   7.564085,
   10.4842,
   13.4192,
   6.476633,
   8.958203,
   11.83431,
   14.30604,
   7.687935,
   10.61218,
   13.53401,
   6.58053,
   9.043353,
   11.92049,
   14.40596,
   7.77615,
   10.70331,
   13.62797,
   6.662018,
   9.118082,
   11.98705,
   14.47104,
   7.825353,
   10.75431,
   13.6897,
   6.683803,
   9.181643,
   12.0423,
   14.53075,
   7.879209,
   10.80725,
   13.73401,
   6.695301,
   9.192938,
   12.06702,
   14.53972,
   7.903214,
   10.8295,
   13.76846,
   6.709623,
   9.159146,
   12.03408,
   14.51725,
   7.880524,
   10.80729,
   13.74153,
   5.826606,
   8.298418,
   11.17202,
   13.65139,
   7.024576,
   9.945642,
   12.87836,
   5.909302,
   8.379614,
   11.24827,
   13.73502,
   7.112674,
   10.02377,
   12.96002,
   6.007825,
   8.455112,
   11.3417,
   13.81301,
   7.209785,
   10.12138,
   13.05715,
   6.119111,
   8.591737,
   11.45979,
   13.94295,
   7.324453,
   10.24658,
   13.16744,
   6.256484,
   8.710257,
   11.57471,
   14.05518,
   7.439933,
   10.3625,
   13.29156,
   6.327653,
   8.812431,
   11.6869,
   14.15976,
   7.558739,
   10.47803,
   13.4098,
   6.47803,
   8.951065,
   11.82415,
   14.30397,
   7.673491,
   10.5921,
   13.51522,
   6.56377,
   9.03582,
   11.90557,
   14.37729,
   7.756217,
   10.68625,
   13.6134,
   6.637022,
   9.108074,
   11.97892,
   14.4509,
   7.82767,
   10.75191,
   13.68551,
   6.671311,
   9.161541,
   12.0237,
   14.48633,
   7.882243,
   10.80782,
   13.74436,
   6.688168,
   9.168689,
   12.04034,
   14.50945,
   7.896389,
   10.823,
   13.7501,
   6.694081,
   9.154744,
   12.02198,
   14.50744,
   7.880587,
   10.79385,
   13.73415};
   Double_t rdzPXFn_fy40[336] = {
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
   graph = new TGraph(336,rdzPXFn_fx40,rdzPXFn_fy40);
   graph->SetName("rdzPXFn");
   graph->SetTitle("PXF at z<0;r /cm;#Deltaz /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");

   TText* textRed = new TText(0.40,0.87,"red: z<0,");
   SetTextRed(textRed);
   textRed->Draw("same");

   TText* textBlack = new TText();
   SetTextBlack(textBlack);
   textBlack->Draw("same");


   TkAlStyle::drawStandardTitle();

   TText* text1 = new TText(0.20,0.65,"FPIX");
   SetTextAll(text1);
   text1->Draw("same");

   TText* text_z2 = new TText(0.20,0.60,"");
   SetTextAlignmentLineUp(text_z2);
   text_z2->Draw("same");
   TText* text_z1 = new TText(0.20,0.55,"");
   SetTextAlignmentLineDown(text_z1);
   text_z1->Draw("same");

   multigraph->GetXaxis()->SetTitle("r [cm]");
   //multigraph->GetXaxis()->SetLabelFont(132);
   //multigraph->GetXaxis()->SetLabelSize(0.08);
   //multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltaz [#mum]");
   //multigraph->GetYaxis()->SetLabelFont(132);
   //multigraph->GetYaxis()->SetLabelSize(0.08);
   //multigraph->GetYaxis()->SetTitleSize(0.08);
   //multigraph->GetYaxis()->SetTitleFont(42);
   c_r_vs_dz_PXF_1->Modified();
   c_r_vs_dz_PXF_1->cd();
   c_r_vs_dz_PXF_1->SetSelected(c_r_vs_dz_PXF_1);
   c_r_vs_dz_PXF_1->SaveAs("r_vs_dz_PXF_1.png");
   c_r_vs_dz_PXF_1->SaveAs("r_vs_dz_PXF_1.pdf");
}
