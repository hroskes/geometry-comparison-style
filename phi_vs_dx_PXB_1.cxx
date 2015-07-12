#include "TCanvas.h"
#include "TColor.h"
#include "TGraph.h"
#include "TMultiGraph.h"
#include "TAxis.h"
#include "TText.h"
#include "TLatex.h"
#include "TkAlStyle.cc"
#include "SetDifferentTextSettings.C"

void phi_vs_dx_PXB_1()
{

   TkAlStyle::set(PRELIMINARY);
//=========Macro generated from canvas: c_phi_vs_dx_PXB_1/phi vs. dx at PXB level
//=========  (Mon Jul  6 19:49:41 2015) by ROOT version6.02/05
   TCanvas *c_phi_vs_dx_PXB_1 = new TCanvas("c_phi_vs_dx_PXB_1", "phi vs. dx at PXB level"/*,0,0,3508,2480*/);
/*
   c_phi_vs_dx_PXB_1->Range(0,0,1,1);
   c_phi_vs_dx_PXB_1->SetFillColor(0);
   c_phi_vs_dx_PXB_1->SetBorderMode(0);
   c_phi_vs_dx_PXB_1->SetBorderSize(2);
   c_phi_vs_dx_PXB_1->SetTickx(1);
   c_phi_vs_dx_PXB_1->SetTicky(1);
   c_phi_vs_dx_PXB_1->SetLeftMargin(0.18);
   c_phi_vs_dx_PXB_1->SetRightMargin(0.05);
   c_phi_vs_dx_PXB_1->SetBottomMargin(0.16);
   c_phi_vs_dx_PXB_1->SetFrameBorderMode(0);
*/   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("phi_vs_dx_PXB_1");
   multigraph->SetTitle(";#phi /rad;#Deltax /#mum");
   
   Double_t phidxPXBp_fx205[384] = {
   0.1399743,
   0.1391777,
   0.1410298,
   0.1386822,
   0.4887377,
   0.4914247,
   0.4910614,
   0.4940408,
   0.8616887,
   0.8638305,
   0.8611163,
   0.8604243,
   1.221992,
   1.220494,
   1.218319,
   1.219357,
   1.489858,
   1.493982,
   1.492009,
   1.496993,
   -1.493899,
   -1.492745,
   -1.491511,
   -1.493447,
   -1.246794,
   -1.248348,
   -1.250908,
   -1.249602,
   -0.9141306,
   -0.9136644,
   -0.9133969,
   -0.9125322,
   -0.5653455,
   -0.5633923,
   -0.5631633,
   -0.5625502,
   -0.2239832,
   -0.2220305,
   -0.2203927,
   -0.2211608,
   0.07908306,
   0.0797918,
   0.07949503,
   0.079368,
   0.2924597,
   0.2938677,
   0.2937936,
   0.2939614,
   0.5067659,
   0.5077255,
   0.5078931,
   0.5078778,
   0.7186792,
   0.7199592,
   0.719963,
   0.7220691,
   0.9351264,
   0.9357814,
   0.9363914,
   0.9377799,
   1.148902,
   1.149828,
   1.151578,
   1.149898,
   1.366723,
   1.365771,
   1.365512,
   1.365285,
   1.525421,
   1.523751,
   1.524274,
   1.525319,
   -1.524901,
   -1.524908,
   -1.525896,
   -1.525936,
   -1.376604,
   -1.376214,
   -1.376192,
   -1.375381,
   -1.171721,
   -1.169929,
   -1.17177,
   -1.17228,
   -0.9654227,
   -0.9644425,
   -0.9647557,
   -0.9654574,
   -0.7575619,
   -0.7566179,
   -0.7587671,
   -0.7597107,
   -0.54754,
   -0.5475883,
   -0.5483315,
   -0.548426,
   -0.3422222,
   -0.341186,
   -0.3420765,
   -0.3422934,
   -0.1296327,
   -0.1290071,
   -0.1295772,
   -0.1283944,
   0.05698055,
   0.05763031,
   0.05637043,
   0.05822333,
   0.2071399,
   0.2081499,
   0.2080788,
   0.2083156,
   0.3623789,
   0.3621701,
   0.3624206,
   0.3622331,
   0.5118482,
   0.5109686,
   0.5109877,
   0.5113187,
   0.6646067,
   0.664494,
   0.6648301,
   0.6655437,
   0.8142258,
   0.8142548,
   0.8150514,
   0.8151566,
   0.9685884,
   0.9691567,
   0.9697807,
   0.9685067,
   1.11935,
   1.118896,
   1.119287,
   1.120107,
   1.27171,
   1.27245,
   1.272688,
   1.2732,
   1.424867,
   1.424223,
   1.425473,
   1.42488,
   1.534455,
   1.534987,
   1.536878,
   1.53605,
   -1.53749,
   -1.537198,
   -1.538371,
   -1.536938,
   -1.429584,
   -1.430355,
   -1.431013,
   -1.431753,
   -1.283013,
   -1.284385,
   -1.284304,
   -1.283951,
   -1.134787,
   -1.135756,
   -1.136218,
   -1.138349,
   -0.9878361,
   -0.9873453,
   -0.9873807,
   -0.9876237,
   -0.8400979,
   -0.8400316,
   -0.8405091,
   -0.8414383,
   -0.6910982,
   -0.6908487,
   -0.6917589,
   -0.6914618,
   -0.5416304,
   -0.5413526,
   -0.542211,
   -0.5421299,
   -0.3941425,
   -0.3937779,
   -0.3928682,
   -0.3931624,
   -0.2435163,
   -0.2439339,
   -0.2440461,
   -0.2443075,
   -0.09464122,
   -0.09376766,
   -0.09253496,
   -0.09431621,
   1.713524,
   1.713537,
   1.709614,
   1.70994,
   1.968099,
   1.967667,
   1.968294,
   1.967142,
   2.322739,
   2.324281,
   2.324392,
   2.325832,
   2.668195,
   2.668848,
   2.667922,
   2.668117,
   3.013838,
   3.012637,
   3.012572,
   3.013575,
   -2.936911,
   -2.936237,
   -2.937031,
   -2.936722,
   -2.605341,
   -2.603517,
   -2.603342,
   -2.604321,
   -2.268214,
   -2.271882,
   -2.268934,
   -2.27,
   -1.941673,
   -1.945175,
   -1.942609,
   -1.943339,
   -1.690581,
   -1.692045,
   -1.690553,
   -1.687858,
   1.652225,
   1.65382,
   1.65432,
   1.655218,
   1.804426,
   1.80556,
   1.805438,
   1.807038,
   2.020924,
   2.0224,
   2.023121,
   2.022556,
   2.228983,
   2.230474,
   2.231232,
   2.231903,
   2.442689,
   2.44204,
   2.441743,
   2.442319,
   2.649601,
   2.650163,
   2.65064,
   2.650715,
   2.858282,
   2.858271,
   2.858734,
   2.857705,
   3.06232,
   3.062145,
   3.062944,
   3.063083,
   -3.014144,
   -3.014498,
   -3.015543,
   -3.014975,
   -2.811839,
   -2.812629,
   -2.813321,
   -2.812698,
   -2.606936,
   -2.606341,
   -2.607968,
   -2.608602,
   -2.404577,
   -2.405094,
   -2.405046,
   -2.404886,
   -2.201682,
   -2.202574,
   -2.202893,
   -2.202888,
   -1.999073,
   -1.999334,
   -1.999237,
   -2.00124,
   -1.792848,
   -1.795354,
   -1.795984,
   -1.796612,
   -1.645712,
   -1.646503,
   -1.645102,
   -1.648411,
   1.632967,
   1.633048,
   1.633326,
   1.632952,
   1.741457,
   1.742041,
   1.742214,
   1.743351,
   1.893183,
   1.89344,
   1.893891,
   1.894556,
   2.043315,
   2.04523,
   2.044977,
   2.04615,
   2.195199,
   2.195031,
   2.194494,
   2.195228,
   2.344562,
   2.345707,
   2.345165,
   2.345291,
   2.494977,
   2.493972,
   2.49422,
   2.494212,
   2.643025,
   2.641911,
   2.641846,
   2.642738,
   2.790399,
   2.789376,
   2.790807,
   2.790238,
   2.938438,
   2.937266,
   2.939228,
   2.938201,
   3.084276,
   3.085144,
   3.08533,
   3.08605,
   -3.052085,
   -3.052615,
   -3.051846,
   -3.051724,
   -2.904079,
   -2.904156,
   -2.904321,
   -2.904276,
   -2.757271,
   -2.758547,
   -2.757829,
   -2.758703,
   -2.612355,
   -2.61299,
   -2.612851,
   -2.612759,
   -2.466445,
   -2.466432,
   -2.467057,
   -2.467001,
   -2.322078,
   -2.321584,
   -2.321531,
   -2.321783,
   -2.173479,
   -2.173232,
   -2.174022,
   -2.174928,
   -2.028793,
   -2.030143,
   -2.029264,
   -2.031065,
   -1.881429,
   -1.880778,
   -1.881575,
   -1.882501,
   -1.736417,
   -1.736918,
   -1.736835,
   -1.736903,
   -1.630513,
   -1.630682,
   -1.630046,
   -1.630559};
   Double_t phidxPXBp_fy205[384] = {
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
   TGraph *graph = new TGraph(384,phidxPXBp_fx205,phidxPXBp_fy205);
   graph->SetName("phidxPXBp");
   graph->SetTitle("PXB at z>=0;#phi /rad;#Deltax /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t phidxPXBn_fx206[384] = {
   0.1342633,
   0.1368944,
   0.1377243,
   0.1382603,
   0.4891599,
   0.4881614,
   0.4901413,
   0.4891748,
   0.8558584,
   0.8580484,
   0.8580521,
   0.8590024,
   1.218226,
   1.217118,
   1.216936,
   1.218674,
   1.491935,
   1.490222,
   1.491225,
   1.490802,
   -1.49779,
   -1.498178,
   -1.495222,
   -1.494893,
   -1.250464,
   -1.249071,
   -1.249259,
   -1.250217,
   -0.9130836,
   -0.9136742,
   -0.9136889,
   -0.9130875,
   -0.5643464,
   -0.564753,
   -0.5652241,
   -0.5659431,
   -0.2222409,
   -0.2232385,
   -0.2219953,
   -0.221313,
   0.07728155,
   0.07777407,
   0.0784426,
   0.0791092,
   0.2929462,
   0.2925035,
   0.2915714,
   0.2929906,
   0.5027888,
   0.5062335,
   0.5063275,
   0.5071834,
   0.7153226,
   0.7172098,
   0.7173777,
   0.7177539,
   0.9311596,
   0.9326013,
   0.9332436,
   0.9344013,
   1.145907,
   1.147915,
   1.147063,
   1.148975,
   1.36289,
   1.364016,
   1.364714,
   1.365052,
   1.521232,
   1.520656,
   1.524932,
   1.523962,
   -1.524792,
   -1.524007,
   -1.525416,
   -1.526271,
   -1.374859,
   -1.375658,
   -1.376104,
   -1.376418,
   -1.170018,
   -1.170403,
   -1.169808,
   -1.170323,
   -0.9641701,
   -0.9642563,
   -0.9652564,
   -0.965198,
   -0.7563691,
   -0.7567699,
   -0.7582921,
   -0.7582045,
   -0.5470568,
   -0.5470988,
   -0.5479596,
   -0.5470064,
   -0.3432128,
   -0.3413939,
   -0.3412541,
   -0.3405749,
   -0.1305412,
   -0.1308935,
   -0.1305073,
   -0.1305288,
   0.05466821,
   0.05533461,
   0.05536929,
   0.05610896,
   0.2068577,
   0.2087099,
   0.2081602,
   0.2073187,
   0.3594028,
   0.3598696,
   0.3613403,
   0.3608299,
   0.5100049,
   0.5108218,
   0.5114371,
   0.5120432,
   0.66225,
   0.6629518,
   0.6630234,
   0.66402,
   0.812494,
   0.812402,
   0.8131236,
   0.8131081,
   0.9670641,
   0.9674108,
   0.9678736,
   0.9673824,
   1.117649,
   1.117782,
   1.118489,
   1.118833,
   1.270638,
   1.270571,
   1.271692,
   1.271281,
   1.422609,
   1.423036,
   1.422868,
   1.424379,
   1.534755,
   1.535268,
   1.534247,
   1.535464,
   -1.534279,
   -1.53538,
   -1.535276,
   -1.536419,
   -1.430302,
   -1.429648,
   -1.428546,
   -1.429575,
   -1.281638,
   -1.281682,
   -1.281635,
   -1.282847,
   -1.13232,
   -1.133153,
   -1.133143,
   -1.13385,
   -0.9865154,
   -0.9860513,
   -0.9864112,
   -0.9865556,
   -0.8397707,
   -0.8404347,
   -0.8407934,
   -0.8402509,
   -0.6897812,
   -0.6898038,
   -0.6904444,
   -0.6901197,
   -0.5428998,
   -0.5425285,
   -0.5430606,
   -0.5434911,
   -0.3939573,
   -0.392659,
   -0.3928734,
   -0.3939208,
   -0.2452778,
   -0.2451814,
   -0.2443585,
   -0.2443548,
   -0.09440686,
   -0.09359328,
   -0.09367909,
   -0.09244803,
   1.703496,
   1.707219,
   1.707395,
   1.706543,
   1.960917,
   1.96463,
   1.962549,
   1.963828,
   2.321402,
   2.32087,
   2.326941,
   2.321624,
   2.665894,
   2.666684,
   2.666721,
   2.666887,
   3.012042,
   3.013469,
   3.013789,
   3.01348,
   -2.937051,
   -2.936084,
   -2.937586,
   -2.937916,
   -2.603012,
   -2.603104,
   -2.603875,
   -2.6044,
   -2.270048,
   -2.26633,
   -2.26804,
   -2.2679,
   -1.940769,
   -1.940109,
   -1.940851,
   -1.939897,
   -1.68657,
   -1.687184,
   -1.690989,
   -1.69154,
   1.648808,
   1.649944,
   1.65067,
   1.651856,
   1.803214,
   1.802508,
   1.800892,
   1.802992,
   2.020041,
   2.021576,
   2.020311,
   2.021853,
   2.229394,
   2.228285,
   2.228265,
   2.22951,
   2.440288,
   2.441165,
   2.441084,
   2.442986,
   2.649203,
   2.648062,
   2.649894,
   2.650592,
   2.857672,
   2.858631,
   2.859761,
   2.85963,
   3.061287,
   3.06185,
   3.062278,
   3.061535,
   -3.014611,
   -3.013612,
   -3.014517,
   -3.015226,
   -2.811581,
   -2.811837,
   -2.812409,
   -2.812457,
   -2.606032,
   -2.605545,
   -2.604675,
   -2.605226,
   -2.404941,
   -2.404263,
   -2.404837,
   -2.404983,
   -2.199977,
   -2.198467,
   -2.199544,
   -2.199726,
   -1.997126,
   -1.999378,
   -1.99825,
   -1.99903,
   -1.792549,
   -1.794441,
   -1.79433,
   -1.793838,
   -1.639153,
   -1.640544,
   -1.641695,
   -1.643734,
   1.632038,
   1.63101,
   1.631436,
   1.632183,
   1.739496,
   1.739687,
   1.739863,
   1.740328,
   1.892089,
   1.892078,
   1.892702,
   1.893167,
   2.041811,
   2.043069,
   2.043454,
   2.043549,
   2.193876,
   2.195201,
   2.195306,
   2.194758,
   2.343797,
   2.343581,
   2.344071,
   2.34354,
   2.494413,
   2.493123,
   2.494213,
   2.494388,
   2.641673,
   2.640774,
   2.641298,
   2.642274,
   2.789469,
   2.78961,
   2.789578,
   2.788929,
   2.93737,
   2.93822,
   2.937117,
   2.937272,
   3.084453,
   3.085244,
   3.084746,
   3.084769,
   -3.050969,
   -3.052279,
   -3.052286,
   -3.053272,
   -2.903594,
   -2.903594,
   -2.904403,
   -2.903273,
   -2.75743,
   -2.75801,
   -2.758729,
   -2.75923,
   -2.612157,
   -2.611924,
   -2.611628,
   -2.612018,
   -2.465549,
   -2.464734,
   -2.466409,
   -2.466079,
   -2.320199,
   -2.320079,
   -2.320388,
   -2.321385,
   -2.172024,
   -2.172376,
   -2.172812,
   -2.173053,
   -2.027551,
   -2.027901,
   -2.028135,
   -2.029041,
   -1.880347,
   -1.880751,
   -1.881131,
   -1.881538,
   -1.733503,
   -1.735523,
   -1.735075,
   -1.734134,
   -1.626316,
   -1.62811,
   -1.62803,
   -1.629369};
   Double_t phidxPXBn_fy206[384] = {
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
   graph = new TGraph(384,phidxPXBn_fx206,phidxPXBn_fy206);
   graph->SetName("phidxPXBn");
   graph->SetTitle("PXB at z<0;#phi /rad;#Deltax /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);

   multigraph->Add(graph,"P");

   multigraph->Draw("A");

   TText* textRed = new TText();
   SetTextRed(textRed);
   TString titRed = textRed->GetTitle();
   textRed->SetText(0.20,0.87,titRed);
   textRed->Draw("same");

   TText* textBlack = new TText();
   SetTextBlack(textBlack);
   TString titBlack = textBlack->GetTitle();
   textBlack->SetText(0.34,0.87,titBlack);
   textBlack->Draw("same");


   TText* text_z2 = new TText(0.20,0.30,"");
   SetTextAlignmentLineUp(text_z2);
   text_z2->Draw("same");
   TText* text_z1 = new TText(0.20,0.25,"");
   SetTextAlignmentLineDown(text_z1);
   text_z1->Draw("same");

   TLatex* textLabelUp1 = new TLatex(0.47,0.38,"BPIX half barrel -#pi/2<#phi<#pi/2");
   SetTextAll(textLabelUp1);
   textLabelUp1->Draw("same");

   TLatex* textLabelDown1 = new TLatex(0.38,0.17,"BPIX half barrel #phi<-#pi/2 and #phi>#pi/2");
   SetTextAll(textLabelDown1);
   textLabelDown1->SetTextSize(0.04);
   textLabelDown1->Draw("same");

   TkAlStyle::drawStandardTitle();

   multigraph->GetXaxis()->SetTitle("#phi [rad]");
   //multigraph->GetXaxis()->SetLabelFont(132);
   //multigraph->GetXaxis()->SetLabelSize(0.08);
   //multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltax [#mum]");
   //multigraph->GetYaxis()->SetLabelFont(132);
   //multigraph->GetYaxis()->SetLabelSize(0.08);
   //multigraph->GetYaxis()->SetTitleSize(0.08);
   //multigraph->GetYaxis()->SetTitleFont(42);
   c_phi_vs_dx_PXB_1->Modified();
   c_phi_vs_dx_PXB_1->cd();
   c_phi_vs_dx_PXB_1->SetSelected(c_phi_vs_dx_PXB_1);
   c_phi_vs_dx_PXB_1->SaveAs("phi_vs_dx_PXB_1.png");
   c_phi_vs_dx_PXB_1->SaveAs("phi_vs_dx_PXB_1.pdf");
}
