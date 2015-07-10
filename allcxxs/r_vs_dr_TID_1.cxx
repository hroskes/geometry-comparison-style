void r_vs_dr_TID_1()
{
//=========Macro generated from canvas: c_r_vs_dr_TID_1/r vs. dr at TID level
//=========  (Mon Jul  6 19:49:37 2015) by ROOT version6.02/05
   TCanvas *c_r_vs_dr_TID_1 = new TCanvas("c_r_vs_dr_TID_1", "r vs. dr at TID level",0,0,3508,2480);
   c_r_vs_dr_TID_1->Range(0,0,1,1);
   c_r_vs_dr_TID_1->SetFillColor(0);
   c_r_vs_dr_TID_1->SetBorderMode(0);
   c_r_vs_dr_TID_1->SetBorderSize(2);
   c_r_vs_dr_TID_1->SetTickx(1);
   c_r_vs_dr_TID_1->SetTicky(1);
   c_r_vs_dr_TID_1->SetLeftMargin(0.18);
   c_r_vs_dr_TID_1->SetRightMargin(0.05);
   c_r_vs_dr_TID_1->SetBottomMargin(0.16);
   c_r_vs_dr_TID_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("r_vs_dr_TID_1");
   multigraph->SetTitle("TID;r /cm;#Deltar /#mum");
   
   Double_t rdrTIDp_fx19[408] = {
   28.50827,
   28.50958,
   28.36989,
   28.37155,
   28.32464,
   28.32084,
   28.37696,
   28.36577,
   28.50604,
   28.5023,
   28.67494,
   28.67907,
   28.84758,
   28.84787,
   28.97701,
   28.97659,
   29.02617,
   29.02839,
   28.9863,
   28.9866,
   28.84972,
   28.85146,
   28.67715,
   28.68001,
   28.42313,
   28.42269,
   28.34623,
   28.34883,
   28.36251,
   28.3605,
   28.45885,
   28.45617,
   28.61181,
   28.61252,
   28.79293,
   28.79395,
   28.92851,
   28.93265,
   29.00601,
   29.0064,
   28.98274,
   28.98584,
   28.89797,
   28.89716,
   28.74408,
   28.74335,
   28.57174,
   28.56967,
   36.51485,
   36.50647,
   36.40314,
   36.39975,
   36.3704,
   36.36822,
   36.42545,
   36.42542,
   36.55374,
   36.55669,
   36.72995,
   36.72562,
   36.88118,
   36.88501,
   36.99835,
   36.99685,
   37.03447,
   37.03831,
   36.96411,
   36.96358,
   36.82715,
   36.82323,
   36.66876,
   36.67259,
   36.4399,
   36.43946,
   36.36234,
   36.36588,
   36.38689,
   36.38509,
   36.48643,
   36.48755,
   36.64454,
   36.64684,
   36.81951,
   36.81611,
   36.96297,
   36.94967,
   37.02606,
   37.02936,
   37.0091,
   37.01151,
   36.91522,
   36.91639,
   36.75586,
   36.7533,
   36.58981,
   36.59058,
   44.59728,
   44.51104,
   44.44849,
   44.41982,
   44.4213,
   44.45479,
   44.51907,
   44.60843,
   44.70566,
   44.79832,
   44.9028,
   44.98318,
   45.04211,
   45.08591,
   45.08664,
   45.04325,
   44.9788,
   44.89736,
   44.79729,
   44.69362,
   44.53497,
   44.44464,
   44.41095,
   44.38246,
   44.41146,
   44.45991,
   44.5439,
   44.63538,
   44.7485,
   44.85387,
   44.96404,
   45.03996,
   45.0901,
   45.11119,
   45.10027,
   45.04187,
   44.96807,
   44.86012,
   44.74313,
   44.62514,
   28.50243,
   28.49796,
   28.36939,
   28.36726,
   28.32419,
   28.32067,
   28.37016,
   28.37109,
   28.51388,
   28.51011,
   28.69183,
   28.69196,
   28.86537,
   28.86237,
   28.98472,
   28.98538,
   29.03306,
   29.03354,
   28.98203,
   28.97944,
   28.85305,
   28.8546,
   28.6807,
   28.67927,
   28.42698,
   28.4244,
   28.34461,
   28.34342,
   28.35712,
   28.35658,
   28.45293,
   28.45387,
   28.60507,
   28.60487,
   28.7825,
   28.78357,
   28.93272,
   28.92841,
   29.0057,
   29.00754,
   29.00252,
   29.00061,
   28.90307,
   28.90307,
   28.74842,
   28.75265,
   28.57432,
   28.57146,
   36.52092,
   36.52062,
   36.39033,
   36.38968,
   36.34532,
   36.35068,
   36.39272,
   36.39102,
   36.54306,
   36.54188,
   36.70961,
   36.71283,
   36.88059,
   36.87703,
   36.99957,
   37.00071,
   37.04498,
   37.04637,
   36.99203,
   36.99316,
   36.85989,
   36.86109,
   36.6854,
   36.69011,
   36.45071,
   36.45055,
   36.36604,
   36.367,
   36.3643,
   36.36707,
   36.46244,
   36.46293,
   36.61929,
   36.62719,
   36.79446,
   36.79625,
   36.95159,
   36.95004,
   37.03716,
   37.04306,
   37.02877,
   37.03404,
   36.9365,
   36.94012,
   36.78428,
   36.78255,
   36.60469,
   36.59724,
   44.56472,
   44.48045,
   44.42609,
   44.40902,
   44.42067,
   44.46978,
   44.53207,
   44.62403,
   44.7233,
   44.83733,
   44.92648,
   45.00663,
   45.06509,
   45.09456,
   45.08681,
   45.05116,
   44.97683,
   44.87434,
   44.77435,
   44.66248,
   44.5065,
   44.43155,
   44.38596,
   44.37645,
   44.39271,
   44.45573,
   44.55634,
   44.65455,
   44.76519,
   44.88524,
   44.99472,
   45.06013,
   45.11044,
   45.12323,
   45.09473,
   45.03568,
   44.94655,
   44.84013,
   44.7262,
   44.60649,
   28.54307,
   28.53978,
   28.37986,
   28.38069,
   28.3085,
   28.30861,
   28.33249,
   28.33258,
   28.45276,
   28.44908,
   28.62764,
   28.62801,
   28.81918,
   28.81943,
   28.97287,
   28.97294,
   29.04827,
   29.04526,
   29.03166,
   29.03373,
   28.91188,
   28.9119,
   28.73122,
   28.72814,
   28.43904,
   28.44193,
   28.33942,
   28.33967,
   28.32513,
   28.32458,
   28.40454,
   28.40423,
   28.56016,
   28.56277,
   28.74083,
   28.739,
   28.90719,
   28.90698,
   29.01315,
   29.01158,
   29.03094,
   29.02251,
   28.94575,
   28.94831,
   28.79321,
   28.79008,
   28.61182,
   28.60896,
   36.54475,
   36.54459,
   36.39915,
   36.38847,
   36.33261,
   36.33001,
   36.36843,
   36.36417,
   36.50058,
   36.49754,
   36.66968,
   36.66916,
   36.85181,
   36.85267,
   36.99269,
   36.99256,
   37.05802,
   37.05115,
   37.02817,
   37.02642,
   36.90986,
   36.90785,
   36.72646,
   36.72665,
   36.4523,
   36.45098,
   36.34835,
   36.34761,
   36.33905,
   36.34332,
   36.42167,
   36.42202,
   36.56582,
   36.56661,
   36.76255,
   36.76447,
   36.9409,
   36.93532,
   37.04665,
   37.03984,
   37.05062,
   37.05308,
   36.97297,
   36.97205,
   36.81564,
   36.81074,
   36.69869,
   36.63268,
   44.60563,
   44.51262,
   44.4314,
   44.39642,
   44.38302,
   44.41082,
   44.46672,
   44.55621,
   44.66161,
   44.78568,
   44.90059,
   44.98902,
   45.05563,
   45.10845,
   45.12468,
   45.09292,
   45.02158,
   44.93347,
   44.83855,
   44.72215,
   44.55023,
   44.45789,
   44.38711,
   44.36167,
   44.36659,
   44.41821,
   44.49796,
   44.59949,
   44.71354,
   44.84377,
   44.94785,
   45.04256,
   45.10179,
   45.14234,
   45.12624,
   45.07907,
   45.00238,
   44.897,
   44.77934,
   44.65274};
   Double_t rdrTIDp_fy19[408] = {
   88.13667,
   68.70805,
   -146.3183,
   -173.5533,
   -187.594,
   -230.7989,
   -177.3456,
   -303.2574,
   -75.86491,
   -94.15661,
   -162.6081,
   -121.2066,
   105.7172,
   118.0308,
   269.4911,
   261.2879,
   255.1817,
   279.5235,
   209.3372,
   205.2116,
   240.0589,
   237.3761,
   67.15763,
   70.40544,
   -90.42051,
   -59.55388,
   -192.1456,
   -126.3526,
   -125.9694,
   -124.6109,
   -132.4633,
   -147.9124,
   -30.20708,
   -7.457409,
   101.0053,
   128.0829,
   142.9679,
   176.4701,
   228.9883,
   225.1826,
   185.8247,
   240.5232,
   126.0119,
   146.9359,
   126.016,
   156.3127,
   -14.6554,
   -6.205554,
   -28.42147,
   -106.0784,
   -184.5923,
   -207.6575,
   -252.2394,
   -255.3941,
   -328.7194,
   -312.6143,
   -242.9427,
   -229.3441,
   -36.66455,
   -98.86595,
   33.1759,
   55.60933,
   103.2731,
   73.11861,
   196.0194,
   190.1996,
   108.0174,
   90.749,
   160.9882,
   83.89381,
   -23.53364,
   0.9062276,
   -246.2732,
   -223.5816,
   -195.8255,
   -118.2571,
   -126.9422,
   -116.3626,
   -222.0842,
   -178.8882,
   -49.52008,
   1.131065,
   50.70937,
   9.616553,
   319.2573,
   168.289,
   177.6183,
   205.1159,
   176.7484,
   205.4908,
   103.1145,
   111.5945,
   31.32945,
   24.1624,
   -126.0892,
   -92.84052,
   -84.7261,
   19.25764,
   -152.2829,
   -200.4933,
   -171.9336,
   -46.24905,
   -188.2891,
   -92.22141,
   -168.9335,
   -67.26104,
   64.10236,
   353.655,
   218.2539,
   419.9402,
   204.8222,
   135.0165,
   123.2414,
   121.0145,
   7.860001,
   78.19945,
   -114.7567,
   -225.3898,
   -179.1375,
   -305.9665,
   -119.2146,
   -277.5637,
   -69.05056,
   -169.1167,
   -148.4153,
   -193.0219,
   -111.9415,
   38.8922,
   82.97758,
   96.8997,
   222.2068,
   47.20501,
   111.8606,
   66.23602,
   -92.59208,
   -59.96101,
   -8.723448,
   -68.24175,
   -87.81623,
   -110.9209,
   -203.4426,
   -226.8851,
   -204.8339,
   -202.3831,
   -91.17667,
   -126.5668,
   54.99297,
   43.89402,
   -21.37346,
   -50.56736,
   77.31644,
   52.46655,
   240.5032,
   209.363,
   152.2431,
   106.2108,
   158.4655,
   156.4001,
   109.7881,
   80.83955,
   -94.75745,
   -89.75606,
   -125.8701,
   -117.6156,
   -149.7691,
   -143.7401,
   -139.3969,
   -133.749,
   -57.21922,
   -79.98521,
   112.5327,
   89.49702,
   285.4851,
   206.1876,
   227.5857,
   215.1202,
   151.5344,
   103.3062,
   39.3881,
   44.27798,
   5.186852,
   46.43096,
   -90.72518,
   -99.88695,
   -52.61063,
   -66.52989,
   -219.9906,
   -210.7669,
   -238.9808,
   -153.8335,
   -258.9507,
   -262.2688,
   -92.46408,
   -85.33859,
   -35.93612,
   -28.76286,
   120.4852,
   63.49361,
   152.3033,
   153.8172,
   217.181,
   195.0148,
   83.51421,
   69.27902,
   80.06539,
   66.59496,
   -60.95739,
   -13.28997,
   -114.295,
   -110.353,
   -297.9302,
   -277.1666,
   -161.2847,
   -115.0755,
   -146.265,
   -157.2511,
   -170.5386,
   -89.33157,
   69.54492,
   61.00774,
   126.6522,
   91.35629,
   188.4267,
   244.5215,
   138.9359,
   176.98,
   97.61975,
   144.3699,
   67.31678,
   44.93162,
   -66.95887,
   -132.4142,
   30.19672,
   -15.44366,
   -229.1893,
   -187.0093,
   201.211,
   -113.0951,
   136.8094,
   -192.2005,
   -200.9491,
   -3.92354,
   73.02839,
   -15.48756,
   314.461,
   -77.49533,
   141.1924,
   123.9393,
   235.5273,
   117.601,
   52.83526,
   5.211148,
   -149.8369,
   -279.7485,
   -260.3997,
   -301.7539,
   -393.1037,
   -334.5231,
   -258.7547,
   -181.9917,
   -219.6085,
   -194.5382,
   100.8476,
   150.9147,
   90.28726,
   191.95,
   168.7025,
   278.7137,
   -28.95956,
   37.81383,
   111.2367,
   -19.082,
   9.313657,
   -56.27694,
   -96.11057,
   -134.0468,
   -124.1925,
   -158.7322,
   -166.3586,
   -183.3877,
   -112.6774,
   -153.8759,
   -115.4256,
   -116.8524,
   82.68446,
   102.8249,
   132.3721,
   171.6538,
   265.1744,
   247.2205,
   257.5536,
   288.8174,
   204.3057,
   210.0815,
   66.98513,
   16.55102,
   -157.7469,
   -106.2545,
   -98.40363,
   -84.75539,
   -122.1978,
   -128.6133,
   -53.98513,
   -63.26073,
   -27.27306,
   -5.705365,
   14.82495,
   -8.843183,
   174.8309,
   177.7543,
   192.0609,
   192.2798,
   187.6442,
   141.7625,
   129.542,
   188.2239,
   27.43708,
   36.49429,
   47.07942,
   38.91509,
   -2.470167,
   13.86499,
   -167.9659,
   -238.7464,
   -192.6935,
   -202.2638,
   -262.6272,
   -297.2751,
   -169.8391,
   -208.7872,
   -29.58972,
   -34.24159,
   -18.68988,
   -3.901419,
   80.34821,
   86.51323,
   194.1827,
   158.7659,
   167.1236,
   169.7314,
   88.05436,
   92.78732,
   76.4101,
   74.82327,
   -174.426,
   -164.0767,
   -245.3194,
   -230.8679,
   -233.7707,
   -166.8704,
   -156.8117,
   -147.5194,
   -158.4848,
   -138.896,
   -108.2008,
   -67.11915,
   162.2641,
   127.1979,
   202.4542,
   167.5907,
   69.39159,
   117.8276,
   154.8212,
   178.7803,
   0.8658525,
   -8.721419,
   -14.67768,
   -653.184,
   -6.392241,
   -171.6131,
   -266.475,
   -235.1982,
   -246.8026,
   -129.47,
   -172.2986,
   -120.8224,
   -103.769,
   45.2565,
   168.0662,
   284.9314,
   195.3757,
   247.2846,
   259.5737,
   184.5793,
   83.91914,
   65.58162,
   184.1904,
   96.3263,
   -74.49515,
   -227.1791,
   -360.3527,
   -302.5121,
   -265.6927,
   -267.3784,
   -247.7923,
   -124.1164,
   -41.932,
   76.31392,
   61.29885,
   225.8462,
   241.289,
   303.4859,
   171.0587,
   226.2798,
   150.0759,
   -37.05238,
   11.01963,
   -74.37513};
   TGraph *graph = new TGraph(408,rdrTIDp_fx19,rdrTIDp_fy19);
   graph->SetName("rdrTIDp");
   graph->SetTitle("TID at z>=0;r /cm;#Deltar /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t rdrTIDn_fx20[408] = {
   28.53669,
   28.53476,
   28.36146,
   28.36057,
   28.27429,
   28.27457,
   28.29843,
   28.29734,
   28.4258,
   28.42577,
   28.62421,
   28.62624,
   28.80216,
   28.80226,
   28.97163,
   28.97209,
   29.04532,
   29.04605,
   29.05019,
   29.05094,
   28.93246,
   28.93195,
   28.73572,
   28.73837,
   28.45673,
   28.45475,
   28.32909,
   28.33081,
   28.2965,
   28.29539,
   28.36906,
   28.37027,
   28.53108,
   28.53208,
   28.7179,
   28.71729,
   28.90187,
   28.9023,
   29.02145,
   29.01805,
   29.04692,
   29.04859,
   28.98624,
   28.98592,
   28.83443,
   28.83211,
   28.63828,
   28.63305,
   36.5704,
   36.56993,
   36.40133,
   36.40173,
   36.32199,
   36.32019,
   36.33757,
   36.33502,
   36.45086,
   36.4514,
   36.64795,
   36.64859,
   36.85114,
   36.85362,
   37.00404,
   37.00397,
   37.07194,
   37.0735,
   37.04791,
   37.04634,
   36.94312,
   36.94097,
   36.76578,
   36.76029,
   36.53954,
   36.48073,
   36.35588,
   36.35519,
   36.31125,
   36.31384,
   36.37686,
   36.37894,
   36.53322,
   36.5336,
   36.72585,
   36.7224,
   36.90643,
   36.90556,
   37.03944,
   37.04089,
   37.08147,
   37.08548,
   37.02074,
   37.01971,
   36.86447,
   36.86303,
   36.66461,
   36.66639,
   44.59457,
   44.49166,
   44.41383,
   44.37529,
   44.37813,
   44.40437,
   44.46411,
   44.56837,
   44.67938,
   44.7924,
   44.90389,
   45.00556,
   45.08502,
   45.13265,
   45.12901,
   45.09612,
   45.02571,
   44.93379,
   44.80373,
   44.70598,
   44.54885,
   44.44609,
   44.39363,
   44.34756,
   44.35374,
   44.39708,
   44.46688,
   44.57736,
   44.70555,
   44.84631,
   44.93964,
   45.04883,
   45.11721,
   45.14359,
   45.13613,
   45.10742,
   45.02261,
   44.91308,
   44.79379,
   44.66696,
   28.56149,
   28.56154,
   28.36446,
   28.36118,
   28.25611,
   28.25282,
   28.26007,
   28.25928,
   28.37572,
   28.37064,
   28.57504,
   28.57659,
   28.80152,
   28.80351,
   28.9942,
   28.99747,
   29.10536,
   29.10885,
   29.09633,
   29.09406,
   28.99139,
   28.9869,
   28.78718,
   28.78602,
   28.40198,
   28.40533,
   28.26429,
   28.26984,
   28.24593,
   28.24932,
   28.34983,
   28.35271,
   28.52803,
   28.52974,
   28.74424,
   28.74317,
   28.95026,
   28.94854,
   29.08369,
   29.07976,
   29.09658,
   29.09571,
   29.00215,
   29.00287,
   28.8219,
   28.8213,
   28.60948,
   28.60772,
   36.51068,
   36.50739,
   36.3381,
   36.333,
   36.26002,
   36.25353,
   36.30144,
   36.30068,
   36.44916,
   36.44928,
   36.65474,
   36.6586,
   36.88667,
   36.90262,
   37.05729,
   37.05939,
   37.13834,
   37.13661,
   37.09115,
   37.0918,
   36.95259,
   36.95136,
   36.73427,
   36.73009,
   36.39222,
   36.40861,
   36.27478,
   36.2756,
   36.26029,
   36.26086,
   36.3583,
   36.36319,
   36.56323,
   36.56205,
   36.78284,
   36.78803,
   37.00198,
   36.9955,
   37.11902,
   37.11808,
   37.12773,
   37.12772,
   37.02933,
   37.03231,
   36.84417,
   36.85642,
   36.60159,
   36.60041,
   44.64695,
   44.52653,
   44.44072,
   44.36725,
   44.33859,
   44.33996,
   44.38734,
   44.47791,
   44.59443,
   44.72128,
   44.86335,
   44.97848,
   45.07181,
   45.12841,
   45.15753,
   45.14619,
   45.10428,
   45.00666,
   44.9025,
   44.77077,
   44.59237,
   44.46442,
   44.3728,
   44.32383,
   44.29734,
   44.34364,
   44.41257,
   44.51774,
   44.63647,
   44.78258,
   44.9131,
   45.03271,
   45.1117,
   45.17945,
   45.18395,
   45.16744,
   45.09391,
   44.98577,
   44.85489,
   44.72533,
   28.50518,
   28.50646,
   28.28981,
   28.29039,
   28.17985,
   28.18327,
   28.21679,
   28.21393,
   28.36908,
   28.36604,
   28.60011,
   28.59885,
   28.86644,
   28.8631,
   29.07185,
   29.0675,
   29.16884,
   29.16416,
   29.14381,
   29.14502,
   28.99551,
   28.99652,
   28.76152,
   28.75908,
   28.40096,
   28.40109,
   28.24571,
   28.24476,
   28.20082,
   28.20063,
   28.2933,
   28.29532,
   28.48495,
   28.48833,
   28.72976,
   28.73088,
   28.96073,
   28.95758,
   29.11009,
   29.10893,
   29.1524,
   29.15115,
   29.06003,
   29.05572,
   28.86944,
   28.86957,
   28.62905,
   28.63122,
   36.52883,
   36.52752,
   36.32227,
   36.31966,
   36.21885,
   36.21785,
   36.25443,
   36.24985,
   36.398,
   36.39725,
   36.63739,
   36.63083,
   36.87676,
   36.87451,
   37.0724,
   37.07423,
   37.17556,
   37.16978,
   37.14539,
   37.14592,
   37.00278,
   37.00097,
   36.7725,
   36.77602,
   36.41896,
   36.41773,
   36.26213,
   36.26498,
   36.22076,
   36.22191,
   36.30347,
   36.30432,
   36.49643,
   36.49481,
   36.75008,
   36.74846,
   36.98024,
   36.97656,
   37.14414,
   37.14038,
   37.17262,
   37.17237,
   37.08733,
   37.08442,
   36.89321,
   36.89245,
   36.65388,
   36.65385,
   44.57159,
   44.45027,
   44.34635,
   44.29305,
   44.27879,
   44.31098,
   44.3906,
   44.51254,
   44.64658,
   44.78883,
   44.93874,
   45.06091,
   45.16306,
   45.20249,
   45.21381,
   45.19063,
   45.09425,
   44.98103,
   44.85279,
   44.71676,
   44.49129,
   44.38039,
   44.29108,
   44.24493,
   44.25171,
   44.30859,
   44.41556,
   44.5377,
   44.69072,
   44.85941,
   45.0034,
   45.12597,
   45.20914,
   45.24691,
   45.24782,
   45.18074,
   45.1,
   44.96227,
   44.80064,
   44.63688};
   Double_t rdrTIDn_fy20[408] = {
   -88.58374,
   -92.52834,
   -270.9462,
   -257.2587,
   -247.8142,
   -240.4549,
   -309.786,
   -318.8317,
   -130.6279,
   -127.9436,
   17.17691,
   67.4956,
   91.8703,
   91.78336,
   191.3831,
   191.3468,
   240.4311,
   240.5278,
   232.2645,
   264.9406,
   224.6757,
   238.0846,
   -12.46122,
   51.15444,
   41.78888,
   24.09057,
   -108.3432,
   -77.56264,
   -98.88831,
   -105.396,
   -194.9063,
   -142.8484,
   -45.38828,
   19.32976,
   -11.55756,
   35.97617,
   24.92583,
   91.23161,
   108.7781,
   144.1856,
   161.0915,
   239.5873,
   146.4326,
   161.2639,
   127.3016,
   131.8136,
   72.1923,
   7.018298,
   -66.88315,
   -67.37554,
   -245.2022,
   -225.4517,
   -253.8892,
   -247.6556,
   -229.033,
   -222.7712,
   -201.1173,
   -141.5045,
   -35.20615,
   11.4364,
   91.53428,
   137.1307,
   193.0634,
   236.5611,
   145.7599,
   217.0661,
   213.9771,
   193.7515,
   184.7056,
   170.6734,
   74.22231,
   19.79715,
   -140.8627,
   -719.1589,
   -104.5305,
   -107.5259,
   -186.6597,
   -143.2011,
   -189.0113,
   -131.7555,
   -161.2692,
   -106.3702,
   17.94563,
   46.75424,
   -19.55766,
   12.66365,
   -6.227374,
   25.78531,
   77.20328,
   130.1716,
   100.6117,
   100.9827,
   135.9693,
   138.8984,
   76.25748,
   115.3148,
   -363.2834,
   -299.0269,
   -524.1833,
   -422.2112,
   -395.0088,
   -397.0275,
   -246.4069,
   -125.3807,
   -93.036,
   -164.3725,
   -92.4865,
   -39.478,
   170.7372,
   233.3538,
   168.5353,
   153.7195,
   102.0137,
   30.28389,
   -215.6049,
   -157.4624,
   -262.1805,
   -276.4462,
   -192.0457,
   -123.1893,
   -165.1161,
   -188.4727,
   -263.8178,
   -156.7718,
   -13.92989,
   198.0981,
   -95.89267,
   140.2728,
   226.6776,
   196.7933,
   176.3643,
   278.5497,
   234.3003,
   159.3687,
   28.95491,
   -152.0609,
   25.17783,
   50.62753,
   -161.2284,
   -152.1702,
   -253.3962,
   -231.6239,
   -310.5887,
   -267.0086,
   -176.8896,
   -212.3311,
   -41.70356,
   -41.91774,
   86.62959,
   86.44907,
   191.1648,
   191.142,
   245.2374,
   245.3337,
   244.6678,
   175.1192,
   295.6294,
   218.0265,
   173.7358,
   145.1081,
   -160.9555,
   -182.3967,
   -306.3746,
   -285.1859,
   -250.0481,
   -249.9366,
   -206.3766,
   -206.1803,
   -106.4499,
   -106.2355,
   21.33657,
   21.55905,
   142.7929,
   142.8643,
   225.8913,
   225.8623,
   220.5807,
   235.0126,
   174.1849,
   198.5806,
   139.6503,
   115.271,
   39.53813,
   -8.429809,
   -182.0471,
   -252.091,
   -259.8404,
   -358.642,
   -198.668,
   -310.7813,
   -187.4029,
   -270.7621,
   -96.27905,
   -162.0791,
   -44.93375,
   -45.18069,
   84.16177,
   219.0405,
   190.5372,
   190.489,
   204.666,
   172.4295,
   150.136,
   156.3661,
   166.7196,
   134.7951,
   -0.8380638,
   -63.28391,
   -251.8208,
   -135.0462,
   -213.6748,
   -271.3512,
   -215.935,
   -275.7265,
   -221.0101,
   -218.9062,
   53.08571,
   19.37164,
   51.90302,
   89.31776,
   214.9845,
   155.4285,
   177.6215,
   174.5365,
   133.7411,
   159.8976,
   131.0493,
   159.5572,
   21.83154,
   139.4298,
   -175.4621,
   -209.9894,
   -120.4231,
   -278.0804,
   -224.9763,
   -314.1859,
   -232.1743,
   -263.9793,
   -201.5482,
   -232.6565,
   -125.406,
   -86.33563,
   149.1355,
   137.2824,
   210.6259,
   101.6158,
   161.6206,
   101.6871,
   152.841,
   46.60191,
   93.50565,
   -82.16407,
   -195.6037,
   -385.5138,
   -311.3242,
   -211.3443,
   -358.8845,
   -152.9481,
   -216.4236,
   -93.68879,
   -102.2614,
   33.94968,
   176.1109,
   75.27438,
   148.827,
   306.5446,
   253.5558,
   235.8844,
   157.204,
   127.9818,
   -15.42252,
   3.947463,
   -83.39359,
   -43.41387,
   -255.4224,
   -254.8134,
   -319.7618,
   -289.8003,
   -271.6017,
   -325.1992,
   -95.29004,
   -162.93,
   6.800641,
   -62.90111,
   193.5955,
   111.9699,
   194.7033,
   119.537,
   366.8557,
   285.5695,
   302.6099,
   300.4801,
   249.4805,
   245.0924,
   155.6123,
   146.775,
   -95.35428,
   -93.29187,
   -160.9325,
   -158.3354,
   -190.2495,
   -193.8206,
   -286.8539,
   -270.9532,
   -152.0452,
   -119.3652,
   21.30211,
   28.70451,
   174.5215,
   149.983,
   130.724,
   120.9144,
   189.9286,
   179.8632,
   209.1775,
   157.4303,
   189.8299,
   186.4335,
   32.58094,
   56.89339,
   -39.50999,
   -68.12052,
   -210.5268,
   -227.7408,
   -316.0729,
   -323.2156,
   -304.7477,
   -363.5073,
   246.7653,
   -124.1646,
   18.83695,
   -64.64223,
   69.07169,
   39.59721,
   206.8929,
   188.2257,
   250.0773,
   180.3938,
   211.2267,
   196.1063,
   144.216,
   116.1041,
   106.4376,
   137.5061,
   -165.6917,
   -188.6959,
   -240.841,
   -210.4339,
   -254.0228,
   -228.0371,
   -228.7829,
   -224.1463,
   -172.7836,
   -188.2063,
   -27.45133,
   -39.72766,
   90.79414,
   62.62422,
   225.0962,
   189.9345,
   159.5367,
   158.7244,
   157.5807,
   130.164,
   76.93198,
   42.55304,
   42.59023,
   41.32969,
   21.51766,
   -262.7619,
   -314.6822,
   -270.7506,
   -275.6007,
   -294.2228,
   -235.2201,
   -103.8911,
   -80.80634,
   -34.32579,
   -12.58445,
   60.73021,
   166.6369,
   91.05527,
   151.5916,
   216.204,
   70.56874,
   37.52347,
   -34.25819,
   7.159531,
   -128.9967,
   -245.0511,
   -211.5588,
   -245.9178,
   -266.2273,
   -247.8319,
   -91.07269,
   -110.0916,
   -131.313,
   46.66138,
   137.2644,
   75.0064,
   318.3385,
   196.1619,
   210.1539,
   147.7356,
   115.9351,
   71.92415,
   -132.7194,
   -141.5091};
   graph = new TGraph(408,rdrTIDn_fx20,rdrTIDn_fy20);
   graph->SetName("rdrTIDn");
   graph->SetTitle("TID at z<0;r /cm;#Deltar /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("r /cm");
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltar /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_r_vs_dr_TID_1->Modified();
   c_r_vs_dr_TID_1->cd();
   c_r_vs_dr_TID_1->SetSelected(c_r_vs_dr_TID_1);
}
