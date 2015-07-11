void phi_vs_dz_PXF_1()
{
//=========Macro generated from canvas: c_phi_vs_dz_PXF_1/phi vs. dz at PXF level
//=========  (Mon Jul  6 19:49:40 2015) by ROOT version6.02/05
   TCanvas *c_phi_vs_dz_PXF_1 = new TCanvas("c_phi_vs_dz_PXF_1", "phi vs. dz at PXF level",0,0,3508,2480);
   c_phi_vs_dz_PXF_1->Range(0,0,1,1);
   c_phi_vs_dz_PXF_1->SetFillColor(0);
   c_phi_vs_dz_PXF_1->SetBorderMode(0);
   c_phi_vs_dz_PXF_1->SetBorderSize(2);
   c_phi_vs_dz_PXF_1->SetTickx(1);
   c_phi_vs_dz_PXF_1->SetTicky(1);
   c_phi_vs_dz_PXF_1->SetLeftMargin(0.18);
   c_phi_vs_dz_PXF_1->SetRightMargin(0.05);
   c_phi_vs_dz_PXF_1->SetBottomMargin(0.16);
   c_phi_vs_dz_PXF_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("phi_vs_dz_PXF_1");
   multigraph->SetTitle("PXF;#phi /rad;#Deltaz /#mum");
   
   Double_t phidzPXFp_fx159[336] = {
   0.03707204,
   0.06572064,
   0.08218531,
   0.09115235,
   0.08693143,
   0.09998118,
   0.1068499,
   0.3065918,
   0.3320202,
   0.3468187,
   0.3542428,
   0.3567289,
   0.3658471,
   0.3721865,
   0.5818166,
   0.6031603,
   0.6155913,
   0.6230803,
   0.6296661,
   0.6358432,
   0.6404777,
   0.8622158,
   0.877214,
   0.8870639,
   0.8921788,
   0.907784,
   0.9093263,
   0.9105654,
   1.146829,
   1.153567,
   1.159252,
   1.162967,
   1.187358,
   1.183316,
   1.182122,
   1.42996,
   1.430485,
   1.432247,
   1.434169,
   1.464473,
   1.456681,
   1.452774,
   -1.483776,
   -1.47053,
   -1.462275,
   -1.457803,
   -1.442694,
   -1.441321,
   -1.440833,
   -1.237815,
   -1.222041,
   -1.210934,
   -1.204749,
   -1.194717,
   -1.190821,
   -1.188098,
   -0.9896035,
   -0.9701132,
   -0.9562725,
   -0.948854,
   -0.9470805,
   -0.938107,
   -0.9332997,
   -0.7380887,
   -0.7158789,
   -0.7004722,
   -0.6922821,
   -0.6927169,
   -0.6829804,
   -0.6766416,
   -0.4834208,
   -0.4592298,
   -0.4433111,
   -0.4342809,
   -0.4374454,
   -0.4255397,
   -0.4187371,
   -0.2232073,
   -0.1991689,
   -0.182557,
   -0.1722469,
   -0.1759571,
   -0.1636451,
   -0.1569825,
   0.03822906,
   0.06348842,
   0.08142661,
   0.09076495,
   0.08658688,
   0.09943336,
   0.1066581,
   0.3051218,
   0.3309211,
   0.3471613,
   0.355645,
   0.3541694,
   0.3652247,
   0.3720132,
   0.5813602,
   0.6036806,
   0.6173933,
   0.6245371,
   0.6297503,
   0.6359167,
   0.6411327,
   0.8611215,
   0.8770744,
   0.8869609,
   0.8922262,
   0.9055944,
   0.9090186,
   0.9109377,
   1.143884,
   1.153743,
   1.160219,
   1.163329,
   1.18583,
   1.183872,
   1.182896,
   1.432045,
   1.431427,
   1.434304,
   1.436925,
   1.467835,
   1.459294,
   1.455382,
   -1.481782,
   -1.470719,
   -1.462347,
   -1.458634,
   -1.444249,
   -1.442312,
   -1.441858,
   -1.238909,
   -1.222029,
   -1.211976,
   -1.20587,
   -1.196013,
   -1.191368,
   -1.189235,
   -0.9953528,
   -0.9715819,
   -0.9579877,
   -0.9510288,
   -0.9487534,
   -0.9394466,
   -0.9340245,
   -0.7445422,
   -0.7187906,
   -0.7021529,
   -0.6938176,
   -0.6966009,
   -0.685028,
   -0.6781793,
   -0.4868703,
   -0.4618858,
   -0.4447153,
   -0.4349291,
   -0.4390792,
   -0.4262554,
   -0.4189115,
   -0.2275489,
   -0.2002353,
   -0.1824453,
   -0.1737983,
   -0.1803244,
   -0.1648234,
   -0.1574786,
   1.720786,
   1.717322,
   1.713523,
   1.709936,
   1.755666,
   1.739899,
   1.731112,
   1.998645,
   1.988421,
   1.98181,
   1.977642,
   2.029595,
   2.009152,
   1.998407,
   2.271969,
   2.257024,
   2.248544,
   2.244433,
   2.299212,
   2.277085,
   2.265015,
   2.540776,
   2.522505,
   2.514681,
   2.510153,
   2.564984,
   2.5427,
   2.529948,
   2.802712,
   2.787429,
   2.777093,
   2.772318,
   2.826782,
   2.804675,
   2.791866,
   3.061917,
   3.047653,
   3.037784,
   3.0328,
   3.086659,
   3.064643,
   3.052489,
   -2.970032,
   -2.981079,
   -2.988164,
   -2.991976,
   -2.943871,
   -2.961724,
   -2.971922,
   -2.71909,
   -2.728863,
   -2.73434,
   -2.735229,
   -2.6922,
   -2.708748,
   -2.717769,
   -2.474648,
   -2.480153,
   -2.481996,
   -2.482895,
   -2.445318,
   -2.457609,
   -2.464748,
   -2.227289,
   -2.228385,
   -2.22714,
   -2.226402,
   -2.196817,
   -2.205167,
   -2.209687,
   -1.987255,
   -1.978823,
   -1.976505,
   -1.974708,
   -1.949281,
   -1.954399,
   -1.957103,
   -1.741132,
   -1.731721,
   -1.724877,
   -1.719712,
   -1.703971,
   -1.703725,
   -1.702896,
   1.724872,
   1.716462,
   1.712165,
   1.709139,
   1.753109,
   1.737168,
   1.72926,
   1.998784,
   1.988683,
   1.982655,
   1.978334,
   2.028977,
   2.008659,
   1.998911,
   2.274307,
   2.256907,
   2.247968,
   2.245317,
   2.298127,
   2.276754,
   2.264646,
   2.541758,
   2.522847,
   2.514254,
   2.5099,
   2.565489,
   2.542297,
   2.529553,
   2.80751,
   2.787982,
   2.776865,
   2.771839,
   2.828746,
   2.805718,
   2.792033,
   3.061655,
   3.046018,
   3.036971,
   3.032793,
   3.085279,
   3.063826,
   3.052793,
   -2.967497,
   -2.979411,
   -2.986734,
   -2.992123,
   -2.941452,
   -2.961055,
   -2.972797,
   -2.719492,
   -2.7296,
   -2.734487,
   -2.736711,
   -2.692122,
   -2.708107,
   -2.717859,
   -2.472185,
   -2.477553,
   -2.480354,
   -2.482621,
   -2.443396,
   -2.456018,
   -2.46344,
   -2.225075,
   -2.227865,
   -2.227971,
   -2.226592,
   -2.194877,
   -2.203704,
   -2.208804,
   -1.98452,
   -1.979159,
   -1.975841,
   -1.974879,
   -1.948535,
   -1.953812,
   -1.95619,
   -1.738781,
   -1.731554,
   -1.724693,
   -1.720351,
   -1.702636,
   -1.702732,
   -1.703144};
   Double_t phidzPXFp_fy159[336] = {
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
   TGraph *graph = new TGraph(336,phidzPXFp_fx159,phidzPXFp_fy159);
   graph->SetName("phidzPXFp");
   graph->SetTitle("PXF at z>=0;#phi /rad;#Deltaz /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t phidzPXFn_fx160[336] = {
   0.04355085,
   0.06777824,
   0.08351708,
   0.09202548,
   0.09097906,
   0.1026975,
   0.1091356,
   0.3096733,
   0.3328182,
   0.3475623,
   0.3561382,
   0.3578325,
   0.367344,
   0.3735934,
   0.5838707,
   0.6036637,
   0.6167653,
   0.6236252,
   0.6298422,
   0.6368385,
   0.6416927,
   0.8606913,
   0.8783124,
   0.8879402,
   0.8914567,
   0.9073825,
   0.9092222,
   0.9110281,
   1.143402,
   1.153534,
   1.159294,
   1.161634,
   1.185403,
   1.183033,
   1.181925,
   1.428313,
   1.433194,
   1.433188,
   1.43447,
   1.464533,
   1.457633,
   1.453445,
   -1.479667,
   -1.469412,
   -1.461666,
   -1.459283,
   -1.443099,
   -1.441575,
   -1.440459,
   -1.235469,
   -1.220558,
   -1.210298,
   -1.204855,
   -1.19565,
   -1.190301,
   -1.18682,
   -0.9863617,
   -0.968881,
   -0.9564871,
   -0.9496163,
   -0.944903,
   -0.9366772,
   -0.9316084,
   -0.7372772,
   -0.7151625,
   -0.6994649,
   -0.6928551,
   -0.6924233,
   -0.6820195,
   -0.6754242,
   -0.4822705,
   -0.4583304,
   -0.442691,
   -0.4345694,
   -0.4358999,
   -0.424303,
   -0.4171041,
   -0.2269344,
   -0.1999408,
   -0.182845,
   -0.1734107,
   -0.1773612,
   -0.1635262,
   -0.1562627,
   0.04125866,
   0.06590513,
   0.08130966,
   0.09012213,
   0.08866837,
   0.10033,
   0.107363,
   0.307371,
   0.330312,
   0.3450549,
   0.3527437,
   0.3561215,
   0.3656262,
   0.3715907,
   0.5825259,
   0.600633,
   0.6128814,
   0.6196787,
   0.627615,
   0.6361929,
   0.6398928,
   0.8620672,
   0.8745062,
   0.8843268,
   0.8894793,
   0.9054701,
   0.9084625,
   0.9096652,
   1.141527,
   1.151365,
   1.15758,
   1.160117,
   1.182583,
   1.180642,
   1.180315,
   1.429657,
   1.429129,
   1.431818,
   1.433137,
   1.465028,
   1.457154,
   1.452881,
   -1.479725,
   -1.468485,
   -1.461447,
   -1.458736,
   -1.4406,
   -1.440563,
   -1.439641,
   -1.232903,
   -1.220375,
   -1.210434,
   -1.206788,
   -1.193231,
   -1.189002,
   -1.186756,
   -0.9870288,
   -0.970394,
   -0.9570899,
   -0.9501584,
   -0.9432815,
   -0.9359777,
   -0.9322301,
   -0.7398854,
   -0.7180137,
   -0.7017815,
   -0.6954724,
   -0.6923591,
   -0.6827323,
   -0.6769936,
   -0.4827428,
   -0.4599814,
   -0.4441333,
   -0.4358282,
   -0.4371115,
   -0.4259948,
   -0.4198907,
   -0.222824,
   -0.1999466,
   -0.1829325,
   -0.1741489,
   -0.1772044,
   -0.1642293,
   -0.1573976,
   1.724661,
   1.716903,
   1.712434,
   1.708929,
   1.755796,
   1.738524,
   1.729447,
   2.005807,
   1.990864,
   1.982398,
   1.97891,
   2.030781,
   2.010406,
   1.99869,
   2.275078,
   2.259278,
   2.250159,
   2.24423,
   2.299881,
   2.277933,
   2.265874,
   2.542594,
   2.526163,
   2.51589,
   2.509329,
   2.568998,
   2.545476,
   2.531991,
   2.808799,
   2.789691,
   2.77935,
   2.773134,
   2.831429,
   2.806464,
   2.793979,
   3.065209,
   3.048576,
   3.039316,
   3.033078,
   3.088877,
   3.066314,
   3.054185,
   -2.965215,
   -2.979062,
   -2.987111,
   -2.992682,
   -2.93912,
   -2.959055,
   -2.970356,
   -2.712232,
   -2.725761,
   -2.731512,
   -2.73522,
   -2.688812,
   -2.705364,
   -2.71542,
   -2.467135,
   -2.475093,
   -2.479344,
   -2.481296,
   -2.441441,
   -2.455092,
   -2.461689,
   -2.226312,
   -2.226264,
   -2.226545,
   -2.227509,
   -2.194716,
   -2.202863,
   -2.207935,
   -1.983954,
   -1.978856,
   -1.975919,
   -1.973985,
   -1.950163,
   -1.952971,
   -1.95537,
   -1.737303,
   -1.730068,
   -1.72289,
   -1.720066,
   -1.702001,
   -1.704286,
   -1.701922,
   1.722114,
   1.716324,
   1.712347,
   1.708217,
   1.752607,
   1.737857,
   1.729113,
   1.99586,
   1.987813,
   1.982087,
   1.978396,
   2.027167,
   2.008981,
   1.998843,
   2.271539,
   2.257919,
   2.25053,
   2.246156,
   2.299181,
   2.279158,
   2.267396,
   2.546841,
   2.52534,
   2.515693,
   2.510586,
   2.568116,
   2.54447,
   2.531893,
   2.806234,
   2.787806,
   2.777651,
   2.772854,
   2.830413,
   2.807298,
   2.793414,
   3.061911,
   3.048534,
   3.038222,
   3.034172,
   3.085545,
   3.065243,
   3.052956,
   -2.970078,
   -2.979718,
   -2.987785,
   -2.992433,
   -2.942572,
   -2.9605,
   -2.971565,
   -2.716174,
   -2.72656,
   -2.731698,
   -2.73428,
   -2.691567,
   -2.707261,
   -2.715737,
   -2.465894,
   -2.474668,
   -2.478136,
   -2.479934,
   -2.441154,
   -2.454161,
   -2.461196,
   -2.228307,
   -2.228323,
   -2.228502,
   -2.22831,
   -2.194967,
   -2.20354,
   -2.208583,
   -1.984632,
   -1.980144,
   -1.97654,
   -1.975002,
   -1.948422,
   -1.952795,
   -1.955948,
   -1.73752,
   -1.731216,
   -1.724185,
   -1.718883,
   -1.703089,
   -1.702786,
   -1.703042};
   Double_t phidzPXFn_fy160[336] = {
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
   graph = new TGraph(336,phidzPXFn_fx160,phidzPXFn_fy160);
   graph->SetName("phidzPXFn");
   graph->SetTitle("PXF at z<0;#phi /rad;#Deltaz /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("#phi /rad");
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltaz /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_phi_vs_dz_PXF_1->Modified();
   c_phi_vs_dz_PXF_1->cd();
   c_phi_vs_dz_PXF_1->SetSelected(c_phi_vs_dz_PXF_1);
}
