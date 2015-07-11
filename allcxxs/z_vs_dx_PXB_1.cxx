void z_vs_dx_PXB_1()
{
//=========Macro generated from canvas: c_z_vs_dx_PXB_1/z vs. dx at PXB level
//=========  (Mon Jul  6 19:49:43 2015) by ROOT version6.02/05
   TCanvas *c_z_vs_dx_PXB_1 = new TCanvas("c_z_vs_dx_PXB_1", "z vs. dx at PXB level",0,0,3508,2480);
   c_z_vs_dx_PXB_1->Range(0,0,1,1);
   c_z_vs_dx_PXB_1->SetFillColor(0);
   c_z_vs_dx_PXB_1->SetBorderMode(0);
   c_z_vs_dx_PXB_1->SetBorderSize(2);
   c_z_vs_dx_PXB_1->SetTickx(1);
   c_z_vs_dx_PXB_1->SetTicky(1);
   c_z_vs_dx_PXB_1->SetLeftMargin(0.18);
   c_z_vs_dx_PXB_1->SetRightMargin(0.05);
   c_z_vs_dx_PXB_1->SetBottomMargin(0.16);
   c_z_vs_dx_PXB_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("z_vs_dx_PXB_1");
   multigraph->SetTitle("PXB;z /cm;#Deltax /#mum");
   
   Double_t zdxPXBp_fx325[384] = {
   2.646289,
   9.337986,
   16.04902,
   22.77117,
   2.666301,
   9.370008,
   16.05782,
   22.78312,
   2.639967,
   9.348424,
   16.04345,
   22.76335,
   2.654287,
   9.354937,
   16.06381,
   22.77334,
   2.640183,
   9.342795,
   16.05619,
   22.74825,
   2.662246,
   9.365382,
   16.068,
   22.76395,
   2.655645,
   9.356251,
   16.06781,
   22.76055,
   2.658139,
   9.369458,
   16.05778,
   22.76626,
   2.632562,
   9.336891,
   16.05177,
   22.76606,
   2.66314,
   9.38756,
   16.06756,
   22.77541,
   2.684032,
   9.378505,
   16.06912,
   22.76409,
   2.680529,
   9.37915,
   16.07843,
   22.78236,
   2.665866,
   9.379652,
   16.06421,
   22.76969,
   2.669742,
   9.37523,
   16.06678,
   22.77011,
   2.682814,
   9.381301,
   16.05668,
   22.77653,
   2.676243,
   9.377932,
   16.08325,
   22.77005,
   2.677175,
   9.37958,
   16.07139,
   22.7571,
   2.678198,
   9.387134,
   16.06691,
   22.77308,
   2.671387,
   9.37948,
   16.07773,
   22.76417,
   2.677313,
   9.38042,
   16.07075,
   22.77,
   2.667456,
   9.373466,
   16.0614,
   22.76471,
   2.668232,
   9.370587,
   16.06914,
   22.76414,
   2.68528,
   9.369059,
   16.06715,
   22.77132,
   2.676961,
   9.373245,
   16.07269,
   22.76466,
   2.678335,
   9.362214,
   16.06124,
   22.76247,
   2.673376,
   9.376987,
   16.08579,
   22.76413,
   2.655041,
   9.364053,
   16.06371,
   22.77002,
   2.668923,
   9.368483,
   16.05953,
   22.76355,
   2.6747,
   9.364873,
   16.05162,
   22.75961,
   2.670413,
   9.35817,
   16.05674,
   22.75191,
   2.663933,
   9.37003,
   16.063,
   22.77283,
   2.661171,
   9.370193,
   16.06854,
   22.76478,
   2.644344,
   9.344816,
   16.0324,
   22.73731,
   2.652459,
   9.37123,
   16.06536,
   22.76168,
   2.632046,
   9.341182,
   16.03093,
   22.72815,
   2.651011,
   9.338195,
   16.05553,
   22.74293,
   2.686675,
   9.364719,
   16.05533,
   22.77307,
   2.665655,
   9.355249,
   16.07576,
   22.77258,
   2.675274,
   9.368411,
   16.06758,
   22.78371,
   2.668067,
   9.351741,
   16.06626,
   22.7613,
   2.666102,
   9.367855,
   16.05532,
   22.75467,
   2.657956,
   9.366828,
   16.07497,
   22.76802,
   2.661044,
   9.349078,
   16.05707,
   22.76278,
   2.652116,
   9.358247,
   16.05252,
   22.75414,
   2.661503,
   9.35045,
   16.04682,
   22.75652,
   2.644923,
   9.35099,
   16.04357,
   22.74172,
   2.656941,
   9.347925,
   16.06151,
   22.74125,
   2.660137,
   9.362606,
   16.07526,
   22.77007,
   2.709722,
   9.405238,
   16.12542,
   22.82746,
   2.690921,
   9.398899,
   16.08719,
   22.7974,
   2.714242,
   9.41662,
   16.09669,
   22.82191,
   2.687824,
   9.394251,
   16.10055,
   22.79224,
   2.705273,
   9.396933,
   16.10412,
   22.79955,
   2.681507,
   9.384789,
   16.07851,
   22.77831,
   2.727161,
   9.417168,
   16.10507,
   22.80409,
   2.669404,
   9.374843,
   16.09933,
   22.78991,
   2.71294,
   9.412154,
   16.11087,
   22.79753,
   2.672462,
   9.386406,
   16.08663,
   22.78089,
   2.701836,
   9.424616,
   16.12029,
   22.80037,
   2.685351,
   9.385593,
   16.08341,
   22.7907,
   2.716794,
   9.406796,
   16.09702,
   22.79594,
   2.71523,
   9.400956,
   16.11155,
   22.80283,
   2.725304,
   9.408076,
   16.10232,
   22.81054,
   2.72277,
   9.417318,
   16.10994,
   22.81475,
   2.717138,
   9.411324,
   16.10046,
   22.79919,
   2.707366,
   9.423172,
   16.11149,
   22.81217,
   2.713292,
   9.412416,
   16.09733,
   22.78848,
   2.696682,
   9.40013,
   16.10313,
   22.79646,
   2.715195,
   9.406778,
   16.09662,
   22.79899,
   2.695388,
   9.405046,
   16.10702,
   22.80318,
   2.716427,
   9.409138,
   16.10125,
   22.80737,
   2.668185,
   9.377719,
   16.07584,
   22.78614,
   2.71144,
   9.410464,
   16.11031,
   22.80454,
   2.717299,
   9.421694,
   16.1102,
   22.8017,
   2.728201,
   9.420522,
   16.11371,
   22.80862,
   2.686871,
   9.395877,
   16.09404,
   22.80604,
   2.708241,
   9.41329,
   16.11413,
   22.79763,
   2.710056,
   9.39516,
   16.09903,
   22.79747,
   2.717434,
   9.405101,
   16.10561,
   22.8077,
   2.701542,
   9.401895,
   16.10313,
   22.80215,
   2.70282,
   9.399329,
   16.10007,
   22.80363,
   2.710497,
   9.405642,
   16.09881,
   22.81888,
   2.716729,
   9.400583,
   16.11595,
   22.82121,
   2.681263,
   9.383019,
   16.08904,
   22.79219,
   2.708876,
   9.411193,
   16.10602,
   22.8128,
   2.717726,
   9.421535,
   16.1156,
   22.81353,
   2.697004,
   9.395789,
   16.09949,
   22.80707,
   2.680578,
   9.366659,
   16.08464,
   22.77106,
   2.693653,
   9.386807,
   16.08928,
   22.79052,
   2.687053,
   9.369891,
   16.08749,
   22.77492,
   2.69806,
   9.395931,
   16.08673,
   22.78516,
   2.687324,
   9.393633,
   16.09178,
   22.79958,
   2.711085,
   9.403598,
   16.10326,
   22.7907,
   2.691136,
   9.383962,
   16.08858,
   22.78955,
   2.693016,
   9.390393,
   16.10811,
   22.80231,
   2.697376,
   9.399783,
   16.10637,
   22.79107};
   Double_t zdxPXBp_fy325[384] = {
   1619.445,
   1484.94,
   1370.501,
   1264.41,
   1611.152,
   1499.339,
   1379.881,
   1266.145,
   1666.014,
   1541.546,
   1424.788,
   1312.676,
   1581.441,
   1549.448,
   1477.435,
   1297.73,
   1582.146,
   1549.28,
   1438.316,
   1328.817,
   1525.618,
   1381.442,
   1311.721,
   1182.459,
   1493.836,
   1349.7,
   1230.343,
   1168.966,
   1523.374,
   1407.35,
   1294.384,
   1190.88,
   1543.408,
   1492.898,
   1332.446,
   1224.502,
   1564.903,
   1457.118,
   1353.879,
   1236.044,
   1605.491,
   1515.516,
   1408.1,
   1302.106,
   1699.377,
   1562.202,
   1450.004,
   1321.647,
   1607.815,
   1562.453,
   1421.579,
   1309.399,
   1688.117,
   1546.917,
   1546.292,
   1338.374,
   1620.09,
   1621.958,
   1432.708,
   1276.745,
   1710.479,
   1574.374,
   1470.448,
   1360.73,
   1640.113,
   1570.761,
   1460.463,
   1354.012,
   1683.603,
   1579.048,
   1474.947,
   1402.979,
   1504.885,
   1399.532,
   1287.287,
   1191.252,
   1508.746,
   1402.723,
   1291.766,
   1186.619,
   1514.628,
   1501.731,
   1358.487,
   1131.007,
   1544.538,
   1436.645,
   1324.5,
   1210.295,
   1572.388,
   1501.084,
   1335.024,
   1221.557,
   1577.698,
   1463.716,
   1351.041,
   1240.99,
   1586.306,
   1471.529,
   1407.023,
   1243.796,
   1620.099,
   1497.592,
   1362.079,
   1283.525,
   1627.624,
   1509.474,
   1441.505,
   1281.357,
   1625.809,
   1510.006,
   1433.057,
   1298.418,
   1643.755,
   1549.609,
   1415.684,
   1334.747,
   1612.074,
   1584.571,
   1434.304,
   1376.485,
   1705.952,
   1602.269,
   1499.372,
   1360.64,
   1652.503,
   1550.765,
   1492.122,
   1354.098,
   1747.511,
   1592.536,
   1532.637,
   1433.542,
   1684.066,
   1578.741,
   1477.63,
   1375.895,
   1723.097,
   1571.161,
   1650.815,
   1441.377,
   1559.161,
   1531.785,
   1513.235,
   1332.169,
   1704.187,
   1602.457,
   1496.456,
   1394.337,
   1475.39,
   1372.289,
   1267.451,
   1299.397,
   1476.437,
   1373.056,
   1268.072,
   1165.391,
   1488.737,
   1358.202,
   1281.744,
   1171.845,
   1510.037,
   1402.784,
   1292.138,
   1179.043,
   1494.791,
   1418.041,
   1305.479,
   1194.679,
   1547.232,
   1438.517,
   1327.185,
   1206.751,
   1563.765,
   1444.27,
   1332.568,
   1206.098,
   1581.141,
   1476.819,
   1322.804,
   1224.509,
   1565.715,
   1459.651,
   1349.123,
   1246.176,
   1625.37,
   1498.353,
   1371.592,
   1265.011,
   1594.884,
   1681.328,
   1382.857,
   1234.877,
   833.7949,
   835.2446,
   838.171,
   838.4251,
   839.9442,
   840.2043,
   848.5354,
   845.8034,
   812.4628,
   821.6288,
   819.7177,
   817.6461,
   800.6282,
   796.4993,
   795.3939,
   795.8796,
   785.8081,
   793.8124,
   784.272,
   788.4615,
   765.6158,
   757.0339,
   752.3641,
   743.2017,
   769.2227,
   759.1078,
   743.5556,
   744.3803,
   757.0973,
   741.0834,
   720.7155,
   715.7958,
   763.9904,
   751.1629,
   723.199,
   727.9191,
   759.533,
   747.3489,
   708.6141,
   705.1445,
   866.9713,
   860.8397,
   855.6012,
   831.9984,
   873.9539,
   865.8015,
   856.9393,
   852.744,
   849.3239,
   843.9058,
   838.8262,
   842.9984,
   842.5032,
   834.096,
   830.3431,
   834.8432,
   819.537,
   813.9913,
   817.0458,
   817.2801,
   804.1395,
   801.7341,
   800.2781,
   799.8408,
   790.7635,
   786.1599,
   786.7789,
   793.3519,
   766.1373,
   768.2388,
   765.8062,
   772.5601,
   757.8319,
   762.0632,
   759.1591,
   761.7042,
   738.8982,
   734.3931,
   737.7225,
   728.0464,
   739.9702,
   733.1786,
   727.2694,
   718.0108,
   730.4058,
   721.8466,
   711.4529,
   705.829,
   739.209,
   727.191,
   714.1384,
   700.0727,
   725.5778,
   716.2867,
   706.9808,
   677.1764,
   733.1437,
   724.5839,
   711.2341,
   682.825,
   724.7787,
   716.556,
   702.6439,
   677.8624,
   885.9286,
   873.7361,
   868.6576,
   855.8807,
   882.8257,
   880.4415,
   869.4875,
   860.0696,
   869.3122,
   864.3776,
   855.584,
   851.8198,
   863.4484,
   856.696,
   845.2339,
   850.1234,
   842.1249,
   836.6309,
   833.0562,
   840.8537,
   832.8185,
   827.5129,
   815.918,
   825.7047,
   818.4474,
   814.7684,
   809.3867,
   815.1862,
   805.9048,
   799.1076,
   803.0205,
   814.3293,
   800.8234,
   794.7626,
   791.8339,
   800.6371,
   782.4332,
   784.5801,
   788.9294,
   772.5279,
   778.1584,
   777.8165,
   784.5422,
   785.9161,
   751.9616,
   750.8181,
   742.9819,
   759.8541,
   742.9831,
   746.0175,
   737.8361,
   740.7355,
   725.4133,
   721.183,
   711.5114,
   713.1843,
   722.8807,
   719.7364,
   714.3875,
   707.8852,
   697.0872,
   691.1793,
   693.4377,
   682.3511,
   705.5218,
   701.9429,
   693.1202,
   694.4572,
   692.3149,
   689.5737,
   675.1277,
   673.1635,
   690.6036,
   695.7421,
   679.8318,
   679.4158,
   680.436,
   675.8209,
   672.5646,
   665.7832,
   690.3319,
   687.1631,
   679.2068,
   669.5676,
   685.2398,
   679.5729,
   674.1879,
   669.9634};
   TGraph *graph = new TGraph(384,zdxPXBp_fx325,zdxPXBp_fy325);
   graph->SetName("zdxPXBp");
   graph->SetTitle("PXB at z>=0;z /cm;#Deltax /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t zdxPXBn_fx326[384] = {
   -24.15461,
   -17.46145,
   -10.74909,
   -4.05123,
   -24.13627,
   -17.44083,
   -10.73194,
   -4.044533,
   -24.15312,
   -17.46052,
   -10.76496,
   -4.065466,
   -24.13299,
   -17.44011,
   -10.7386,
   -4.050313,
   -24.1742,
   -17.46979,
   -10.7605,
   -4.055026,
   -24.15516,
   -17.44901,
   -10.72388,
   -4.042159,
   -24.16432,
   -17.45107,
   -10.74259,
   -4.047327,
   -24.14362,
   -17.44145,
   -10.73536,
   -4.041788,
   -24.15758,
   -17.45065,
   -10.75147,
   -4.049566,
   -24.14251,
   -17.44735,
   -10.73309,
   -4.042559,
   -24.11992,
   -17.4208,
   -10.71863,
   -4.033659,
   -24.1175,
   -17.42258,
   -10.72798,
   -4.017517,
   -24.11665,
   -17.4336,
   -10.72351,
   -4.027956,
   -24.13219,
   -17.43958,
   -10.73686,
   -4.034793,
   -24.13688,
   -17.44051,
   -10.74164,
   -4.051191,
   -24.13647,
   -17.43539,
   -10.72667,
   -4.040546,
   -24.12925,
   -17.43863,
   -10.73531,
   -4.034133,
   -24.13315,
   -17.42757,
   -10.71686,
   -4.012542,
   -24.13897,
   -17.44016,
   -10.72366,
   -4.021469,
   -24.13059,
   -17.42882,
   -10.72307,
   -4.015441,
   -24.12927,
   -17.41038,
   -10.72539,
   -4.033881,
   -24.13457,
   -17.42875,
   -10.73601,
   -4.024287,
   -24.12973,
   -17.42773,
   -10.73274,
   -4.022253,
   -24.12899,
   -17.42172,
   -10.72148,
   -4.018538,
   -24.12441,
   -17.43813,
   -10.7191,
   -4.025394,
   -24.11985,
   -17.42508,
   -10.72906,
   -4.028607,
   -24.13573,
   -17.43929,
   -10.73645,
   -4.034165,
   -24.13197,
   -17.4352,
   -10.73598,
   -4.044492,
   -24.13787,
   -17.43444,
   -10.72645,
   -4.02503,
   -24.13758,
   -17.43385,
   -10.73054,
   -4.035603,
   -24.12507,
   -17.42773,
   -10.73868,
   -4.038673,
   -24.13143,
   -17.42568,
   -10.74927,
   -4.038636,
   -24.15638,
   -17.45266,
   -10.75421,
   -4.0611,
   -24.14238,
   -17.4307,
   -10.72864,
   -4.031725,
   -24.15105,
   -17.45495,
   -10.75551,
   -4.05832,
   -24.14904,
   -17.44742,
   -10.75488,
   -4.051293,
   -24.14539,
   -17.41315,
   -10.72328,
   -4.025099,
   -24.13622,
   -17.42795,
   -10.74237,
   -4.029588,
   -24.12964,
   -17.42756,
   -10.72953,
   -4.032565,
   -24.13087,
   -17.44392,
   -10.72682,
   -4.022453,
   -24.14194,
   -17.44727,
   -10.73961,
   -4.054184,
   -24.13608,
   -17.43702,
   -10.73276,
   -4.03547,
   -24.13451,
   -17.44211,
   -10.73769,
   -4.028227,
   -24.14907,
   -17.44715,
   -10.75323,
   -4.06076,
   -24.1401,
   -17.44833,
   -10.74626,
   -4.041639,
   -24.1295,
   -17.43894,
   -10.74456,
   -4.040605,
   -24.14232,
   -17.44252,
   -10.74146,
   -4.054765,
   -24.12719,
   -17.44416,
   -10.73733,
   -4.026716,
   -24.09715,
   -17.4033,
   -10.68245,
   -4.00017,
   -24.12028,
   -17.41611,
   -10.71628,
   -4.010556,
   -24.1058,
   -17.40062,
   -10.68633,
   -4.004498,
   -24.11602,
   -17.41055,
   -10.71153,
   -4.004717,
   -24.10306,
   -17.40407,
   -10.70944,
   -3.999013,
   -24.12834,
   -17.42934,
   -10.72713,
   -4.024436,
   -24.09241,
   -17.38827,
   -10.68697,
   -3.986749,
   -24.12997,
   -17.41213,
   -10.72095,
   -4.027361,
   -24.09672,
   -17.39344,
   -10.71039,
   -4.005141,
   -24.14203,
   -17.43292,
   -10.72525,
   -4.021425,
   -24.09967,
   -17.40151,
   -10.68847,
   -3.998468,
   -24.11513,
   -17.41756,
   -10.71535,
   -4.011903,
   -24.09345,
   -17.39556,
   -10.69985,
   -4.007737,
   -24.11052,
   -17.39486,
   -10.68564,
   -3.994666,
   -24.08549,
   -17.3838,
   -10.69686,
   -3.976266,
   -24.0977,
   -17.39569,
   -10.68493,
   -3.989543,
   -24.08829,
   -17.39982,
   -10.70538,
   -4.010453,
   -24.09908,
   -17.40288,
   -10.68513,
   -3.98941,
   -24.10147,
   -17.40207,
   -10.71086,
   -4.01322,
   -24.08982,
   -17.39596,
   -10.69133,
   -4.002541,
   -24.09638,
   -17.3895,
   -10.69005,
   -4.008609,
   -24.09256,
   -17.39176,
   -10.70387,
   -4.000671,
   -24.0873,
   -17.38654,
   -10.68727,
   -3.99811,
   -24.11482,
   -17.42791,
   -10.73262,
   -4.025284,
   -24.09684,
   -17.40641,
   -10.69488,
   -3.996149,
   -24.09946,
   -17.41869,
   -10.70976,
   -4.009859,
   -24.08995,
   -17.40581,
   -10.69521,
   -3.999367,
   -24.09362,
   -17.40486,
   -10.69157,
   -4.007199,
   -24.09168,
   -17.39656,
   -10.69719,
   -4.003226,
   -24.09613,
   -17.39194,
   -10.69511,
   -3.993402,
   -24.08849,
   -17.40112,
   -10.69688,
   -3.99081,
   -24.08422,
   -17.39216,
   -10.67937,
   -3.983813,
   -24.0868,
   -17.39448,
   -10.70566,
   -3.993996,
   -24.0932,
   -17.394,
   -10.68083,
   -3.983694,
   -24.09052,
   -17.39179,
   -10.6999,
   -4.00889,
   -24.11383,
   -17.41183,
   -10.71311,
   -4.000909,
   -24.08478,
   -17.39189,
   -10.70408,
   -4.003777,
   -24.09816,
   -17.38329,
   -10.68692,
   -3.983116,
   -24.09421,
   -17.40055,
   -10.69091,
   -4.009061,
   -24.12241,
   -17.4225,
   -10.71301,
   -4.01065,
   -24.09428,
   -17.41403,
   -10.71853,
   -4.006264,
   -24.12044,
   -17.41883,
   -10.72999,
   -4.015109,
   -24.10523,
   -17.41424,
   -10.71046,
   -4.01607,
   -24.11585,
   -17.41655,
   -10.71824,
   -4.012744,
   -24.11211,
   -17.39353,
   -10.71142,
   -3.993314,
   -24.10249,
   -17.4057,
   -10.71925,
   -4.019571,
   -24.11342,
   -17.39694,
   -10.70466,
   -4.014853,
   -24.10775,
   -17.39997,
   -10.6984,
   -3.992731};
   Double_t zdxPXBn_fy326[384] = {
   2035.393,
   1914.557,
   1809.376,
   1700.173,
   2058.729,
   1940.161,
   1825.62,
   1720.002,
   2089.34,
   1977.833,
   1861.437,
   1755.142,
   2083.096,
   1971.612,
   1862.036,
   1753.36,
   2106.1,
   1985.405,
   1873.954,
   1764.537,
   1920.775,
   1796.885,
   1694.05,
   1599.534,
   1893.212,
   1786.74,
   1692.462,
   1593.101,
   1917.065,
   1809.614,
   1721.989,
   1623.542,
   1952.644,
   1842.549,
   1745,
   1639.92,
   1994.389,
   1868.378,
   1769.45,
   1671.78,
   2056.843,
   1936.029,
   1833.581,
   1731.166,
   2072.331,
   1963.587,
   1857.551,
   1749.923,
   2077.975,
   1972.693,
   1860.126,
   1751.944,
   2106.781,
   1932.987,
   1910.483,
   1806.608,
   2122.135,
   1991.518,
   1882.303,
   1774.724,
   2127.614,
   2008.692,
   1890.568,
   1782.326,
   2123.698,
   2007.733,
   1891.464,
   1785.472,
   2128.638,
   2010.447,
   1894.304,
   1798.019,
   1948.734,
   1822.196,
   1723.084,
   1616.765,
   1942.295,
   1831.78,
   1724.618,
   1617.889,
   1951.849,
   1842.263,
   1739.686,
   1634.131,
   1973.861,
   1861.214,
   1759.846,
   1653.878,
   1967.862,
   1869.74,
   1770.885,
   1668.083,
   1998.247,
   1900.977,
   1798.855,
   1687.376,
   2008.151,
   1906.413,
   1804.793,
   1701.918,
   2040.337,
   1929.28,
   1829.242,
   1730.309,
   2035.045,
   1939.489,
   1867.652,
   1742.063,
   2019.546,
   1921.12,
   1831.724,
   1733.432,
   2045.98,
   1955.277,
   1852.108,
   1823.433,
   2052.858,
   1954.993,
   1856.403,
   1759.646,
   2074.941,
   1982.741,
   1883.472,
   1788.349,
   2089.678,
   1978.3,
   1882.838,
   1786.822,
   2100.841,
   1997.75,
   1888.628,
   1789.768,
   2108.067,
   1963.372,
   1840.097,
   1880.008,
   2114.437,
   2011.643,
   1902.64,
   1800.968,
   2112.683,
   2008.071,
   1905.988,
   1802.499,
   2109.971,
   2009.662,
   1906.622,
   1806.546,
   1916.381,
   1800.919,
   1691.912,
   1579.609,
   1920.06,
   1803.315,
   1689.65,
   1586.025,
   1923.888,
   1813.676,
   1705.981,
   1597.911,
   1934.212,
   1834.079,
   1727.377,
   1618.282,
   1935.487,
   1840.813,
   1738.404,
   1634.942,
   1954.224,
   1859.599,
   1759.645,
   1655.199,
   1965.34,
   1861.492,
   1758.369,
   1660.158,
   1982.458,
   1882.583,
   1778.949,
   1678.004,
   1978.266,
   1887.499,
   1782.684,
   1677.361,
   1994.864,
   1906.479,
   1817.701,
   1715.06,
   2000.99,
   1887.441,
   1808.897,
   1708.675,
   817.6432,
   839.3546,
   838.1973,
   835.052,
   830.9276,
   836.0301,
   845.6022,
   840.4684,
   811.0921,
   817.4267,
   821.5316,
   820.9857,
   789.1528,
   794.3951,
   799.2513,
   805.8322,
   785.6629,
   784.3309,
   792.4212,
   789.2643,
   764.5314,
   772.4504,
   775.8278,
   774.9564,
   790.2827,
   774.0983,
   773.0605,
   772.0679,
   758.822,
   759.3678,
   761.6602,
   763.3153,
   776.7216,
   769.8824,
   768.6571,
   763.8228,
   760.4283,
   761.626,
   760.9203,
   762.6241,
   867.8856,
   868.9365,
   876.9155,
   873.3712,
   861.1724,
   871.3539,
   876.1154,
   872.7369,
   847.0298,
   858.7745,
   860.4889,
   857.3543,
   837.9803,
   843.8445,
   843.9447,
   841.7117,
   823.847,
   833.7195,
   829.3749,
   826.1732,
   817.2733,
   815.806,
   810.8515,
   807.2873,
   801.7819,
   810.5696,
   806.2951,
   798.6826,
   780.622,
   786.1898,
   780.6093,
   770.3358,
   771.0972,
   781.4714,
   772.2383,
   765.8173,
   760.2221,
   762.2615,
   752.1199,
   749.3534,
   757.0932,
   756.374,
   751.4264,
   745.4472,
   741.993,
   743.3254,
   741.6605,
   740.8128,
   736.5987,
   740.3632,
   742.4393,
   739.9349,
   1008.487,
   740.2609,
   738.7615,
   733.7693,
   738.2115,
   736.9206,
   735.9678,
   735.0614,
   731.7707,
   732.2073,
   737.9119,
   730.6537,
   890.9828,
   894.3451,
   893.994,
   886.6342,
   888.8494,
   895.6113,
   890.797,
   888.4173,
   884.6068,
   885.6326,
   882.5111,
   878.8065,
   877.5,
   872.4846,
   869.2874,
   862.4651,
   881.0195,
   867.825,
   855.2039,
   848.1711,
   864.0518,
   848.3428,
   836.1304,
   831.5172,
   853.5055,
   846.7469,
   837.6956,
   828.7687,
   834.5374,
   822.6374,
   815.551,
   807.6187,
   828.9133,
   824.7286,
   814.1078,
   811.0974,
   794.4991,
   807.9093,
   794.8646,
   788.3696,
   788.7933,
   803.8553,
   795.0948,
   782.0406,
   783.0094,
   767.3585,
   769.8406,
   757.9966,
   774.0355,
   773.6384,
   763.1095,
   755.3708,
   749.8588,
   752.6169,
   744.1387,
   738.2938,
   746.5416,
   747.7108,
   736.0593,
   732.082,
   727.952,
   720.6487,
   716.2558,
   711.9633,
   732.872,
   718.5272,
   711.5331,
   707.2537,
   718.902,
   707.2451,
   706.1839,
   697.7254,
   712.6213,
   708.4521,
   702.5396,
   693.3253,
   706.3108,
   702.67,
   693.8979,
   690.4521,
   703.2958,
   698.9091,
   696.9835,
   690.7263,
   700.6155,
   698.5801,
   697.2369,
   688.8418};
   graph = new TGraph(384,zdxPXBn_fx326,zdxPXBn_fy326);
   graph->SetName("zdxPXBn");
   graph->SetTitle("PXB at z<0;z /cm;#Deltax /#mum");
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
   multigraph->GetYaxis()->SetTitle("#Deltax /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_z_vs_dx_PXB_1->Modified();
   c_z_vs_dx_PXB_1->cd();
   c_z_vs_dx_PXB_1->SetSelected(c_z_vs_dx_PXB_1);
}
