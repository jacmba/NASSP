// ========================================================
// Mesh resource file for LM_VC.msh
// Generated with meshc on Sat May 30 19:37:10 2020
// ========================================================

// Number of mesh groups:
#define VC_NGRP 191

// Number of materials:
#define VC_NMAT 32

// Number of textures:
#define VC_NTEX 8

// Named mesh groups:
#define VC_GRP_AOT 0
#define VC_GRP_AOTbase 1
#define VC_GRP_AOThandle1 2
#define VC_GRP_AOThandle2 3
#define VC_GRP_AbortButton 4
#define VC_GRP_AbortStageButton 5
#define VC_GRP_AbortStageCover 6
#define VC_GRP_Drogue 7
#define VC_GRP_FDAIBall1_cdr 8
#define VC_GRP_FDAIBall1_lmp 9
#define VC_GRP_FDAIBall2_cdr 10
#define VC_GRP_FDAIBall2_lmp 11
#define VC_GRP_FDAIBall_cdr 12
#define VC_GRP_FDAIBall_lmp 13
#define VC_GRP_FDAI_cross_cdr 14
#define VC_GRP_FDAI_cross_lmp 15
#define VC_GRP_FDAI_pitcherror_cdr 16
#define VC_GRP_FDAI_pitcherror_lmp 17
#define VC_GRP_FDAI_rateP_cdr 18
#define VC_GRP_FDAI_rateP_lmp 19
#define VC_GRP_FDAI_rateR_cdr 20
#define VC_GRP_FDAI_rateR_lmp 21
#define VC_GRP_FDAI_rateY_cdr 22
#define VC_GRP_FDAI_rateY_lmp 23
#define VC_GRP_FDAI_rollerror_cdr 24
#define VC_GRP_FDAI_rollerror_lmp 25
#define VC_GRP_FDAI_yawerror_cdr 26
#define VC_GRP_FDAI_yawerror_lmp 27
#define VC_GRP_FDAIflag_cdr 28
#define VC_GRP_FDAIflag_lmp 29
#define VC_GRP_FDAIoverlay_cdr 30
#define VC_GRP_FDAIoverlay_lmp 31
#define VC_GRP_FwdHatch 32
#define VC_GRP_HatchRim 33
#define VC_GRP_HatchWall 34
#define VC_GRP_HullInterior 35
#define VC_GRP_HullMain 36
#define VC_GRP_HullSide 37
#define VC_GRP_HullTop 38
#define VC_GRP_L01_PwrFail_XpointerL 39
#define VC_GRP_L02_PwrFail_Thrust 40
#define VC_GRP_L03_PwrFail_DPSpress 41
#define VC_GRP_L04_PwrFail_RCSpress 42
#define VC_GRP_L05_PwrFail_RCSquan 43
#define VC_GRP_L06_PwrFail_ECSpress 44
#define VC_GRP_L07_PwrFail_Glycol 45
#define VC_GRP_L08_PwrFail_ECSquan 46
#define VC_GRP_L09_PwrFail_XpointerR 47
#define VC_GRP_L10_ContactLight 48
#define VC_GRP_L11_ContactLight2 49
#define VC_GRP_L12_Comp_RRnotrack 50
#define VC_GRP_L13_CompLight_Glycol 51
#define VC_GRP_L14_CompLight_Suit_Fan 52
#define VC_GRP_L15_CompLight_CO2 53
#define VC_GRP_L16_CompLight_H2Osep 54
#define VC_GRP_LPD 55
#define VC_GRP_LightsRail 56
#define VC_GRP_MasterAlarm1 57
#define VC_GRP_MasterAlarm2 58
#define VC_GRP_Needle_P1_01 59
#define VC_GRP_Needle_P1_02 60
#define VC_GRP_Needle_P1_03 61
#define VC_GRP_Needle_P1_04 62
#define VC_GRP_Needle_P1_05 63
#define VC_GRP_Needle_P1_06 64
#define VC_GRP_Needle_P1_07 65
#define VC_GRP_Needle_P2_01 66
#define VC_GRP_Needle_P2_02 67
#define VC_GRP_Needle_P2_03 68
#define VC_GRP_Needle_P2_04 69
#define VC_GRP_Needle_P2_05 70
#define VC_GRP_Needle_P2_06 71
#define VC_GRP_Needle_P2_07 72
#define VC_GRP_Needle_P2_08 73
#define VC_GRP_Needle_P2_09 74
#define VC_GRP_Needle_P2_10 75
#define VC_GRP_Needle_P2_11 76
#define VC_GRP_Needle_P2_12 77
#define VC_GRP_Needle_P2_13 78
#define VC_GRP_Needle_P2_14 79
#define VC_GRP_Needle_P2_15 80
#define VC_GRP_Needle_P3_01 81
#define VC_GRP_Needle_Radar 82
#define VC_GRP_Panel1 83
#define VC_GRP_Panel11_8 84
#define VC_GRP_Panel12_16 85
#define VC_GRP_Panel2 86
#define VC_GRP_Panel3 87
#define VC_GRP_Panel4 88
#define VC_GRP_Panel5_6 89
#define VC_GRP_RCSMounts 90
#define VC_GRP_RCSMounts2 91
#define VC_GRP_RCSMounts3 92
#define VC_GRP_RCSnozzles 93
#define VC_GRP_RCSnozzles2 94
#define VC_GRP_RR_slew_switch 95
#define VC_GRP_Rot_P1_01 96
#define VC_GRP_Rot_P2_01 97
#define VC_GRP_Rot_P2_02 98
#define VC_GRP_Rot_P2_03 99
#define VC_GRP_Rot_P2_04 100
#define VC_GRP_Rot_P3_01 101
#define VC_GRP_Rot_P3_02 102
#define VC_GRP_Rot_P3_03 103
#define VC_GRP_Rot_P3_04 104
#define VC_GRP_Rot_P3_05 105
#define VC_GRP_Sw_P1_01 106
#define VC_GRP_Sw_P1_02 107
#define VC_GRP_Sw_P1_03 108
#define VC_GRP_Sw_P1_04 109
#define VC_GRP_Sw_P1_05 110
#define VC_GRP_Sw_P1_06 111
#define VC_GRP_Sw_P1_07 112
#define VC_GRP_Sw_P1_08 113
#define VC_GRP_Sw_P1_09 114
#define VC_GRP_Sw_P1_10 115
#define VC_GRP_Sw_P1_11 116
#define VC_GRP_Sw_P1_12 117
#define VC_GRP_Sw_P1_13 118
#define VC_GRP_Sw_P1_14 119
#define VC_GRP_Sw_P1_15 120
#define VC_GRP_Sw_P1_16 121
#define VC_GRP_Sw_P1_17 122
#define VC_GRP_Sw_P1_18 123
#define VC_GRP_Sw_P1_19 124
#define VC_GRP_Sw_P1_20 125
#define VC_GRP_Sw_P2_01 126
#define VC_GRP_Sw_P2_02 127
#define VC_GRP_Sw_P2_03 128
#define VC_GRP_Sw_P2_04 129
#define VC_GRP_Sw_P2_05 130
#define VC_GRP_Sw_P2_06 131
#define VC_GRP_Sw_P2_07 132
#define VC_GRP_Sw_P2_08 133
#define VC_GRP_Sw_P2_09 134
#define VC_GRP_Sw_P2_10 135
#define VC_GRP_Sw_P2_11 136
#define VC_GRP_Sw_P2_12 137
#define VC_GRP_Sw_P2_13 138
#define VC_GRP_Sw_P2_14 139
#define VC_GRP_Sw_P2_15 140
#define VC_GRP_Sw_P2_16 141
#define VC_GRP_Sw_P2_17 142
#define VC_GRP_Sw_P2_18 143
#define VC_GRP_Sw_P3_01 144
#define VC_GRP_Sw_P3_02 145
#define VC_GRP_Sw_P3_03 146
#define VC_GRP_Sw_P3_04 147
#define VC_GRP_Sw_P3_05 148
#define VC_GRP_Sw_P3_06 149
#define VC_GRP_Sw_P3_07 150
#define VC_GRP_Sw_P3_08 151
#define VC_GRP_Sw_P3_09 152
#define VC_GRP_Sw_P3_10 153
#define VC_GRP_Sw_P3_11 154
#define VC_GRP_Sw_P3_12 155
#define VC_GRP_Sw_P3_13 156
#define VC_GRP_Sw_P3_14 157
#define VC_GRP_Sw_P3_15 158
#define VC_GRP_Sw_P3_16 159
#define VC_GRP_Sw_P3_17 160
#define VC_GRP_Sw_P3_18 161
#define VC_GRP_Sw_P3_19 162
#define VC_GRP_Sw_P3_20 163
#define VC_GRP_Sw_P3_21 164
#define VC_GRP_Sw_P3_22 165
#define VC_GRP_Sw_P3_23 166
#define VC_GRP_Sw_P3_24 167
#define VC_GRP_Sw_P3_25 168
#define VC_GRP_Sw_P3_26 169
#define VC_GRP_Sw_P4_01 170
#define VC_GRP_Sw_P4_02 171
#define VC_GRP_Sw_P4_03 172
#define VC_GRP_Sw_P4_04 173
#define VC_GRP_Tunnel 174
#define VC_GRP_UpperHatch 175
#define VC_GRP_Windows 176
#define VC_GRP_WindowsInner 177
#define VC_GRP_WindowsRim 178
#define VC_GRP_XpointerX_cdr 179
#define VC_GRP_XpointerX_lmp 180
#define VC_GRP_XpointerY_cdr 181
#define VC_GRP_XpointerY_lmp 182
#define VC_GRP_zzzScrew1 183
#define VC_GRP_zzzScrew2 184
#define VC_GRP_zzzScrew3 185
#define VC_GRP_zzzScrew4 186
#define VC_GRP_zzzScrew5 187
#define VC_GRP_zzzSwitchHolder 188
#define VC_GRP_zzzSwitchHolder2 189
#define VC_GRP_zzzSwitchHolder3 190