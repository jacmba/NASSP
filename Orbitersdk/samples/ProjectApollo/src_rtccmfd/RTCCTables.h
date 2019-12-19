/***************************************************************************
  This file is part of Project Apollo - NASSP
  Copyright 2019

  RTCC Tables

  Project Apollo is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  Project Apollo is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Project Apollo; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

  See http://nassp.sourceforge.net/license/ for more details.

  **************************************************************************/

#pragma once

#include "Orbitersdk.h"

struct EphemerisData
{
	double GMT = 0.0;
	VECTOR3 R = _V(0, 0, 0);
	VECTOR3 V = _V(0, 0, 0);
	int RBI = -1; //0 = Earth, 1 = Moon
};

struct RTCCEphemerisHeader
{
	//Word 1 (Bytes 1-4)
	//Open
	//Word 1 (Bytes 5,6), coordinate system ID (0 = ECI)
	int CSI = 0;
	//Word 2 (Bytes 1-4), numbers of bytes in ephemeris
	//TBD
	//Word 2 (Bytes 5,6), number of entries in ephemeris and weight tables
	unsigned NumEntries = 0;
	//Word 2 (Bytes 7,8), error return indicator
	int IERR = 0;
	//Word 3, time of first entry in ephemeris and weight tables (GMT, hrs.)
	double TFIRST = 0.0;
	//Word 4, time of last entry in ephemeris and weight tables (GMT, hrs.)
	double TEND = 0.0;
};

struct RTCCNIInputTable
{
	//Word 1
	//Open
	//Word 2-4, R and V at maneuver initiation (first phase)
	VECTOR3 R;
	//Word 5-7
	VECTOR3 V;
	//Word 8, maximum time between ephemeris vectors
	double DTOUT;
	//Word 9, Weight loss rate multiplier (normally 1.0)
	double WDMULT = 1.0;
	//Word 10, density multiplier
	double DENSMULT = 1.0;
	//Word 11 (Bytes 1,2), ephemeris output option: 0 for none, 1 for R and V, 2 for R and V and weights
	int IEPHOP = 0;
	//Word 11 (Bytes 3,4), auxiliary output option (false = table not desired, true = table desired)
	bool KAUXOP = false;
	//Word 11 (Bytes 5,6), maximum no. of ephemeris vectors
	unsigned MAXSTO = 9999999;
	//Word 16
	double Area = 0.0;
	//Word 19, S-IVB weight at maneuver initiation
	double SIVBWT;
	//Word 20, Total configuration weight at maneuver initiation
	double CAPWT;
	//Word 21 (Bytes 1,2), attitude control mode (6 = IGM)
	int MANOP;
	//Word 21 (Bytes 3,4), thruster code (36 = S-IVB main thruster)
	int ThrusterCode;
	//Word 22 (Bytes 1,2), configuration at maneuver initiation (3 = CSM/S-IVB, 14 = LM/S-IVB, 15 = CSM/LM/S-IVB)
	int IC;
	//Word 22 (Bytes 3,4), maneuvering vehicle code (2 = S-IVB)
	int MVC;
	//Word 22 (Bytes 7,8), frozen maneuver indicator (true = frozen)
	bool IFROZN;
	//Word 23 (Bytes 1,2), reference body indicator (0 = Earth, 1 = Moon)
	int IREF;
	//Word 23 (Bytes 3,4), coordinate system indicator (0 = ECI)
	int ICOORD;
	//Word 25, Time to begin maneuver (1st phase), GMT
	double GMTI;
	//Word 28, dt of maneuver excluding ullage and tailoff. DT < 0 generates a zero maneuver
	double DTINP = 0.0;
	//Word 29-41
	//Open
	//Word 42
	double GMTI_frozen;
	//Word 43-45
	VECTOR3 R_frozen;
	//Word 46-48
	VECTOR3 V_frozen;
	//Word 53-74
	double Params[22];

	double GMTBASE;
};

struct RTCCNIAuxOutputTable
{
	//SV at main engine on
	//Word 1
	double GMT_BI;
	//Word 2-4
	VECTOR3 R_BI;
	//Word 5-7
	VECTOR3 V_BI;
	//SV at end of maneuver (after tailoff)
	//Word 8
	double GMT_BO;
	//Word 9-11
	VECTOR3 R_BO;
	//Word 12-14
	VECTOR3 V_BO;
	//Word 15-17, unit thrust vector at main engine on
	VECTOR3 A_T;
	//Word 18-26, body axes
	VECTOR3 X_B, Y_B, Z_B;
	//Word 30, duration of main engine burn to cutoff signal
	double DT_B;
	//Word 31, DT of tailoff
	double DT_TO;
	//Word 33-34, Pitch and Yaw gimbal at main engine on
	double P_G;
	double Y_G;
	//Word 35, Total tailoff DV
	double DV_TO;
	//Word 36, total DV (includes ullage and tailoff)
	double DV;
	//Word 37, DV along X-body axis (includes ullage, excludes tailoff)
	double DV_C;
	//Word 38, DV along X-body axis of tailoff
	double DV_cTO;
	//Word 39, DV of pure ullage
	double DV_U;
	//Word 43, weight at main engine on
	double WTENGON;
	//Weight at end of maneuver
	double WTEND;
	//Main fuel weight loss during maneuver
	double MainFuelUsed;
	//Reference body indicator (0 = Earth)
	bool RBI;
	//Coordinate system indicator (0 = ECI)
	int CSI;
	//SV at beginning of thrust (first phase)
	VECTOR3 R_1;
	VECTOR3 V_1;
	double GMT_1;
	//RCS fuel weight loss during maneuver
	double RCSFuelUsed;
	//Velocity-to-be-gained
	VECTOR3 V_G;
	double W_CSM, W_LMA, W_LMD, W_SIVB;
	//SV at main engine on, without ullage (free flight)
	EphemerisData sv_FF;
};