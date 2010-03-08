/* Generated by tuneup.c, 2010-03-07, gcc 4.1 */

#define MUL_KARATSUBA_THRESHOLD          44
#define MUL_TOOM3_THRESHOLD             177
#define MUL_TOOM4_THRESHOLD             890
#define MUL_TOOM8H_THRESHOLD            890

#define SQR_BASECASE_THRESHOLD           22
#define SQR_KARATSUBA_THRESHOLD         119
#define SQR_TOOM3_THRESHOLD             214
#define SQR_TOOM4_THRESHOLD             996
#define SQR_TOOM8_THRESHOLD             996

#define MULLOW_BASECASE_THRESHOLD        21
#define MULLOW_DC_THRESHOLD              24
#define MULLOW_MUL_THRESHOLD           7123

#define MULHIGH_BASECASE_THRESHOLD       37
#define MULHIGH_DC_THRESHOLD             37
#define MULHIGH_MUL_THRESHOLD          7123

#define MULMOD_2EXPM1_THRESHOLD          32

#define DIV_SB_PREINV_THRESHOLD           0  /* preinv always */
#define DC_DIV_QR_THRESHOLD              30
#define DC_DIVAPPR_Q_N_THRESHOLD        229
#define INV_DIV_QR_THRESHOLD           1078
#define INV_DIVAPPR_Q_N_THRESHOLD       339
#define DC_DIV_Q_THRESHOLD              263
#define INV_DIV_Q_THRESHOLD            1164
#define DC_DIVAPPR_Q_THRESHOLD          177
#define INV_DIVAPPR_Q_THRESHOLD        4581
#define DC_BDIV_QR_THRESHOLD            108
#define DC_BDIV_Q_THRESHOLD              96
#define POWM_THRESHOLD                  287
#define FAC_UI_THRESHOLD               6906

#define GCD_ACCEL_THRESHOLD              60
#define GCDEXT_THRESHOLD                  9
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD           0  /* preinv always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* preinv always */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVREM_2_THRESHOLD                0  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */
#define MOD_1_1_THRESHOLD                 7
#define MOD_1_2_THRESHOLD                 7
#define MOD_1_3_THRESHOLD                17
#define DIVREM_HENSEL_QR_1_THRESHOLD     10
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      7
#define DIVREM_EUCLID_HENSEL_THRESHOLD      8

#define ROOTREM_THRESHOLD                11

#define GET_STR_DC_THRESHOLD             19
#define GET_STR_PRECOMPUTE_THRESHOLD     24
#define SET_STR_THRESHOLD              9394

#define MUL_FFT_TABLE  { 272, 608, 1472, 1792, 7168, 20480, 81920, 327680, 0 }
#define MUL_FFT_MODF_THRESHOLD          200
#define MUL_FFT_THRESHOLD              1664

#define SQR_FFT_TABLE  { 784, 864, 1472, 2304, 7168, 20480, 81920, 327680, 0 }
#define SQR_FFT_MODF_THRESHOLD          800
#define SQR_FFT_THRESHOLD              1536

/* Tuneup completed successfully, took 170 seconds */


#define MUL_FFT_TABLE2 {{1, 3}, {205, 2}, {210, 3}, {215, 2}, {242, 3}, {260, 4}, {278, 5}, {285, 4}, {292, 5}, {313, 4}, {320, 5}, {328, 4}, {336, 5}, {352, 4}, {368, 3}, {377, 4}, {413, 5}, {423, 4}, {443, 5}, {519, 4}, {531, 5}, {543, 4}, {568, 5}, {665, 6}, {680, 4}, {695, 5}, {711, 6}, {889, 5}, {909, 6}, {1038, 5}, {1061, 6}, {1266, 7}, {1294, 6}, {1444, 7}, {1476, 6}, {1509, 7}, {1543, 6}, {1577, 7}, {1839, 6}, {1880, 7}, {2239, 8}, {2289, 7}, {2610, 8}, {2668, 7}, {2727, 8}, {2849, 7}, {2912, 8}, {5478, 9}, {5721, 8}, {6518, 9}, {6661, 8}, {6957, 9}, {7756, 8}, {8100, 9}, {10980, 10}, {11467, 9}, {13939, 10}, {15535, 9}, {16944, 10}, {17316, 9}, {17696, 10}, {19722, 9}, {20154, 10}, {23970, 9}, {24495, 10}, {25032, 11}, {25581, 10}, {27898, 11}, {31091, 10}, {40326, 11}, {47962, 10}, {52305, 11}, {53451, 12}, {63570, 10}, {64963, 11}, {98051, 12}, {127165, 11}, {129950, 10}, {132796, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {296001, 12}, {329862, 11}, {359720, 12}, {367597, 11}, {427785, 12}, {456509, 11}, {497829, 12}, {508731, 13}, {519871, 12}, {784582, 10}, {801763, 11}, {819320, 12}, {995682, 13}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 3}, {205, 2}, {210, 3}, {215, 2}, {225, 3}, {236, 4}, {242, 2}, {248, 3}, {254, 4}, {272, 3}, {278, 4}, {285, 3}, {292, 2}, {306, 3}, {313, 4}, {320, 5}, {336, 6}, {344, 4}, {352, 5}, {368, 4}, {377, 3}, {395, 4}, {404, 5}, {507, 6}, {519, 4}, {568, 5}, {636, 6}, {650, 5}, {695, 6}, {711, 5}, {727, 6}, {760, 7}, {777, 5}, {831, 6}, {850, 5}, {889, 6}, {1015, 7}, {1109, 6}, {1211, 7}, {1238, 6}, {1266, 7}, {1294, 6}, {1352, 7}, {1413, 6}, {1476, 7}, {1722, 6}, {1760, 7}, {2239, 8}, {2289, 7}, {2499, 8}, {2668, 7}, {2849, 8}, {2912, 7}, {2976, 8}, {5132, 9}, {5245, 8}, {5478, 9}, {5721, 8}, {5976, 9}, {10980, 10}, {11467, 9}, {13061, 10}, {13640, 9}, {13939, 10}, {15535, 9}, {15876, 10}, {21508, 11}, {22953, 10}, {27898, 11}, {31091, 10}, {33906, 11}, {39461, 10}, {40326, 11}, {47962, 10}, {49013, 11}, {55819, 12}, {58292, 13}, {62207, 12}, {63570, 11}, {80681, 12}, {95949, 11}, {104637, 12}, {106929, 13}, {124440, 12}, {127165, 11}, {129950, 12}, {161386, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {265616, 12}, {329862, 13}, {392279, 14}, {508731, 13}, {519871, 12}, {592026, 13}, {659749, 12}, {855595, 13}, {913042, 12}, {995682, 13}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 3}, {205, 4}, {210, 2}, {242, 3}, {248, 2}, {266, 3}, {272, 2}, {285, 3}, {292, 4}, {299, 2}, {306, 3}, {313, 4}, {320, 3}, {352, 4}, {360, 5}, {368, 4}, {377, 5}, {395, 4}, {404, 5}, {433, 6}, {443, 5}, {453, 6}, {463, 4}, {474, 3}, {485, 4}, {496, 3}, {507, 4}, {543, 5}, {555, 4}, {568, 5}, {665, 6}, {680, 4}, {695, 5}, {711, 6}, {813, 5}, {831, 6}, {929, 5}, {950, 6}, {971, 5}, {1038, 6}, {1134, 7}, {1159, 6}, {1444, 7}, {1509, 6}, {1577, 7}, {1612, 6}, {1760, 7}, {1799, 6}, {1922, 7}, {2098, 6}, {2144, 7}, {2499, 8}, {2554, 7}, {2727, 8}, {2912, 7}, {2976, 8}, {3393, 7}, {3468, 8}, {5478, 9}, {5721, 8}, {6518, 9}, {6661, 8}, {6807, 9}, {7756, 8}, {8100, 9}, {10980, 10}, {11467, 9}, {13939, 10}, {15535, 9}, {16944, 10}, {19722, 9}, {20154, 10}, {23970, 11}, {31091, 10}, {40326, 11}, {47962, 10}, {52305, 11}, {53451, 12}, {63570, 10}, {64963, 11}, {98051, 12}, {127165, 11}, {129950, 10}, {132796, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {277377, 10}, {283451, 11}, {296001, 12}, {329862, 11}, {359720, 12}, {392279, 11}, {427785, 12}, {456509, 11}, {497829, 12}, {508731, 13}, {519871, 12}, {531255, 11}, {566925, 12}, {719463, 13}, {784582, 12}, {995682, 13}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 4}, {210, 5}, {215, 3}, {220, 4}, {230, 2}, {248, 3}, {254, 2}, {260, 3}, {266, 2}, {272, 3}, {306, 4}, {313, 3}, {320, 4}, {328, 3}, {352, 4}, {386, 5}, {404, 4}, {413, 5}, {443, 6}, {463, 4}, {474, 5}, {485, 6}, {496, 5}, {507, 4}, {519, 5}, {531, 4}, {555, 5}, {608, 4}, {622, 5}, {711, 6}, {743, 5}, {777, 6}, {813, 5}, {909, 6}, {929, 7}, {971, 6}, {993, 7}, {1015, 6}, {1159, 7}, {1185, 6}, {1238, 7}, {1294, 6}, {1382, 7}, {1444, 6}, {1509, 7}, {1839, 6}, {1880, 7}, {2849, 8}, {2912, 7}, {2976, 8}, {5478, 9}, {5721, 8}, {5976, 9}, {10980, 10}, {11467, 9}, {12781, 10}, {13347, 9}, {13640, 10}, {15535, 9}, {15876, 10}, {21508, 11}, {22953, 10}, {27898, 11}, {31091, 10}, {33906, 11}, {39461, 10}, {40326, 11}, {47962, 10}, {49013, 11}, {55819, 12}, {58292, 13}, {62207, 12}, {63570, 11}, {80681, 12}, {95949, 11}, {104637, 12}, {106929, 13}, {124440, 12}, {127165, 11}, {129950, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {265616, 12}, {329862, 13}, {392279, 14}, {508731, 13}, {519871, 12}, {554776, 11}, {566925, 12}, {592026, 13}, {659749, 12}, {719463, 13}, {784582, 12}, {855595, 13}, {913042, 12}, {995682, 13}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 1}, {1045, 2}, {1068, 1}, {1092, 4}, {1116, 1}, {1219, 3}, {1246, 2}, {1274, 1}, {1422, 2}, {1454, 1}, {1486, 3}, {1519, 1}, {1553, 2}, {1588, 1}, {1734, 4}, {1772, 1}, {2066, 2}, {2112, 1}, {2256, 4}, {2409, 2}, {2516, 3}, {2572, 2}, {2629, 1}, {2687, 2}, {2997, 1}, {3343, 4}, {3417, 1}, {3492, 4}, {3569, 1}, {4158, 4}, {4250, 1}, {4440, 4}, {4538, 5}, {4638, 4}, {4844, 1}, {4951, 2}, {5060, 3}, {5171, 4}, {5285, 2}, {5520, 1}, {5641, 2}, {5765, 1}, {5892, 4}, {6154, 2}, {6568, 1}, {6712, 4}, {6859, 2}, {7010, 1}, {7814, 2}, {8161, 1}, {8340, 2}, {8523, 1}, {8710, 2}, {8901, 5}, {9500, 4}, {9709, 1}, {9922, 3}, {10363, 1}, {10590, 2}, {11550, 1}, {11803, 4}, {12327, 1}, {12873, 2}, {13155, 1}, {13444, 2}, {13739, 1}, {15993, 2}, {17068, 5}, {17442, 7}, {17824, 6}, {18215, 5}, {19022, 4}, {19439, 1}, {19865, 3}, {20745, 1}, {21200, 2}, {23121, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {25216, 2}, {26334, 1}, {32007, 2}, {34157, 5}, {34905, 6}, {36452, 5}, {37251, 4}, {38901, 3}, {41514, 2}, {46266, 1}, {47280, 4}, {49374, 3}, {53845, 1}, {58721, 4}, {60007, 3}, {62664, 6}, {64037, 8}, {65440, 11}, {66873, 13}, {68338, 10}, {69835, 6}, {71365, 8}, {72928, 5}, {74525, 4}, {79530, 3}, {83052, 2}, {88630, 1}, {94582, 4}, {96654, 7}, {98771, 10}, {103145, 6}, {105404, 9}, {107713, 5}, {110072, 1}, {128099, 2}, {142755, 5}, {149076, 3}, {166130, 2}, {185136, 1}, {189190, 2}, {197567, 1}, {261830, 2}, {267564, 1}, {273423, 2}, {279411, 1}, {304703, 2}, {311376, 1}, {318195, 4}, {325163, 7}, {332284, 9}, {339561, 12}, {346997, 9}, {354596, 8}, {362361, 5}, {370296, 2}, {378405, 5}, {386691, 2}, {395159, 4}, {412655, 3}, {430925, 2}, {459859, 1}, {523686, 4}, {535154, 5}, {546873, 4}, {558848, 3}, {571086, 5}, {583592, 4}, {596372, 3}, {609431, 1}, {650350, 2}, {756831, 5}, {773404, 4}, {825333, 3}, {861875, 2}, {981496, 1}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_FULL_TABLE2 {{16, 3}, {1022, 1}, {1219, 4}, {1274, 1}, {1454, 4}, {1486, 2}, {1519, 1}, {1696, 2}, {1734, 4}, {1772, 1}, {1851, 2}, {1934, 1}, {2021, 4}, {2066, 2}, {2112, 5}, {2159, 1}, {2306, 4}, {2357, 1}, {2462, 2}, {2516, 3}, {2572, 1}, {2629, 2}, {2746, 1}, {2869, 2}, {3063, 1}, {3131, 2}, {3200, 1}, {3343, 2}, {3492, 1}, {4158, 4}, {4250, 1}, {4538, 4}, {4844, 1}, {4951, 2}, {5060, 3}, {5171, 2}, {5285, 1}, {5401, 2}, {5520, 1}, {5641, 2}, {5765, 1}, {5892, 4}, {6154, 2}, {6568, 1}, {6712, 4}, {6859, 2}, {7010, 1}, {7814, 2}, {8161, 1}, {8340, 2}, {8523, 1}, {8710, 4}, {8901, 6}, {9096, 5}, {9296, 4}, {9709, 1}, {9922, 3}, {10363, 1}, {10822, 2}, {11550, 1}, {11803, 4}, {12327, 1}, {13739, 2}, {14040, 1}, {15993, 2}, {17068, 5}, {17442, 6}, {18215, 5}, {18614, 4}, {19439, 1}, {19865, 3}, {20745, 2}, {23121, 1}, {23628, 2}, {24146, 4}, {24675, 7}, {25216, 10}, {25769, 8}, {26911, 4}, {28104, 1}, {32007, 2}, {34157, 5}, {34905, 6}, {35670, 7}, {36452, 5}, {37251, 4}, {38901, 3}, {41514, 2}, {46266, 1}, {47280, 4}, {49374, 3}, {53845, 1}, {58721, 4}, {60007, 3}, {62664, 6}, {64037, 8}, {65440, 11}, {66873, 10}, {68338, 9}, {69835, 6}, {71365, 8}, {72928, 5}, {74525, 4}, {79530, 1}, {81272, 3}, {83052, 2}, {88630, 1}, {94582, 4}, {96654, 7}, {98771, 10}, {103145, 6}, {105404, 8}, {107713, 5}, {110072, 1}, {128099, 2}, {142755, 5}, {149076, 3}, {166130, 2}, {185136, 1}, {189190, 2}, {197567, 1}, {261830, 2}, {291783, 3}, {298173, 6}, {304703, 2}, {311376, 1}, {318195, 4}, {325163, 5}, {332284, 4}, {339561, 3}, {346997, 1}, {386691, 2}, {395159, 1}, {430925, 4}, {440362, 6}, {450005, 5}, {469929, 4}, {490736, 3}, {512464, 1}, {523686, 2}, {535154, 5}, {546873, 2}, {583592, 3}, {609431, 2}, {664591, 1}, {861875, 4}, {880748, 6}, {919743, 5}, {939883, 4}, {981496, 3}, {MP_SIZE_T_MAX,0}}

