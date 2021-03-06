#pragma once

#include "stdafx.h"
//#include "GPSDlg.h"
//#include "NMEA.h"

#define BINMSG_ERROR                       0
#define BINMSG_ECEF_USER_PVT               0xa8
#define BINMSG_GEODETIC_USER_PVT           0xa9
#define BINMSG_USER_SATELLITE_INFOMATION   0xaa
#define BINMSG_SATELLITE_MEASUREMENT_DATA  0xac
#define BINMSG_LOG_READ_DATA               0x95
#define BINMSG_REPLY_LOG_STATUS            0x94
#define BINMSG_GET_EPHEMERIS               0xb1
#define BINMSG_PVT_ANDREW                  8

typedef struct ECEF_USER_PVT
{
	U08 MessageID;
	S32 X;
	S32 Y;
	S32 Z;
	S16 XV;
	S16 YV;
	S16 ZV;
	U08 PositionMode;
	U08 FixMode;
	U16 GPSWeek;
	U32 TOW;
	U16 Year;
	U08 Month;
	U08 Day;
	U16 Hour;
	U08 Min;
	U08 Sec;
	U08 NumOfSV;
	U08 NumOfSVinFix;
	U08 GDOP;
	U08 PDOP;
	U08 HDOP;
	U08 VDOP;
	U08 TDOP;

}ECEF_USER_PVT, *pECEF_USER_PVT, &rECEF_USER_PVT;

typedef struct GEODETIC_USER_PVT
{
	U08 MessageID;
	S32 Latitude;
	S32 Longitude;
	F32 Lat;
	F32 Lon;
	S16 Altitude;
	U16 Heading;
	U16 Speed;
	U08 PositionMode;	
	U08 FixMode;
	U16 GPSWeek;
	U32 TOW;
	U16 Year;
	U08 Month;
	U08 Day;
	U16 Hour;
	U08 Min;
	U08 Sec;
	U08 NumOfSV;
	U08 NumOfSVinFix;
	U08 GDOP;
	U08 PDOP;
	U08 HDOP;
	U08 VDOP;
	U08 TDOP;

}GEODETIC_USER_PVT, *pGEODETIC_USER_PVT, &rGEODETIC_USER_PVT;

typedef struct {
  U08 prn;      // satellite id
  U08 health;    
  U16 azm;      // azimuth in degrees, 000 ~ 359
  U08 elv;      // elevation in degrees, 90 maximum
  U08 cn0;      // C/N0 ratio
  U16 stu;  
} BIN_SV;

typedef struct USER_SATELLITE_INFOMATION
{
	U08 MessageID;
    BIN_SV sv[12];
	U16 GPSWeek;
	U32 TOW;

}USER_SATELLITE_INFOMATION, *pUSER_SATELLITE_INFOMATION, &rUSER_SATELLITE_INFOMATION;

typedef struct {
  U16 prn;     // satellite id
  S32 PR;      //PseudoRange
  S32 DR;      // DeltaRange
  U16 Dp;      // Doppler 
} BIN_SMD;

typedef struct SATELLITE_MEASUREMENT_DATA
{
	U08 MessageID;	
	BIN_SMD smd[12]; 
	U16 GPSWeek;
	U32 TOW;
	U16 ClockOffset;

}SATELLITE_MEASUREMENT_DATA, *pSATELLITE_MEASUREMENT_DATA, &rSATELLITE_MEASUREMENT_DATA;


typedef struct CHANNEL_DATA
{
	U08 prn;
	U08 cn0;
	D64 pseudo_range;
	D64 carrier_cycle;
	F32 doppler_freq;
	U08 indicator;

} CHANNEL_DATA_T;

typedef struct SV_CH_DATA
{
	U08 channel_id;
	U08 prn;
	U08 SV_status;
	U08 URA;
	S08 cn0;
	S16 elevation;
	S16 azimuth;
	U08 channel_status;
}SV_CH_DATA_T;

typedef struct RECEIVER_NAV_DATA
{
	U08 nav_status;
	U16 wn;
	D64 tow;
	D64 ecef_x;
	D64 ecef_y;
	D64 ecef_z;
	F32 ecef_vx;
	F32 ecef_vy;
	F32 ecef_vz;
	D64 clock_bias;
	F32 clock_drift;
	F32 gdop;
	F32 pdop;
	F32 hdop;
	F32 vdop;
	F32 tdop;
}RECEIVER_NAV_DATA_T;

struct UTC_TIME_T;
struct POS_T;
struct LLA_T;

unsigned char Cal_Checksum(U08* pt);
UINT16 CalChecksum2(U08* pt);

void ECEF_USER_PVT_PROC(ECEF_USER_PVT& ecef_user_pvt,U08* pt);
void GEODETIC_USER_PVT_PROC(GEODETIC_USER_PVT& geod_user_pvt,U08* pt);
void USER_SATELLITE_INFOMATION_PROC(USER_SATELLITE_INFOMATION& sv_info,U08* pt);
void SATELLITE_MEASUREMENT_DATA_PROC(SATELLITE_MEASUREMENT_DATA& sm_data,U08* pt);
void SHOW_ECEF_USER_PVT(ECEF_USER_PVT& ecef_user_pvt,U08* pt,int len);
void SHOW_GEODETIC_USER_PVT(GEODETIC_USER_PVT& geod_user_pvt,U08* pt,int len);
void SHOW_USER_SATELLITE_INFOMATION(USER_SATELLITE_INFOMATION& sv_info,U08* pt,int len);
void SHOW_SATELLITE_MEASUREMENT_DATA(SATELLITE_MEASUREMENT_DATA& sm_data,U08* pt,int len);
void SHOW_USER_SATELLITE_INFOMATION(USER_SATELLITE_INFOMATION& sv_info,U08* pt,int len);
void SHOW_SATELLITE_MEASUREMENT_DATA(SATELLITE_MEASUREMENT_DATA& sm_data,U08* pt,int len);
void UTC_convert_gps_to_utc_time( S16 wn, D64 tow, UTC_TIME_T *utc_time_p );
void COO_cartesian_to_geodetic( const POS_T* xyz_p, LLA_T* lla_p );
U08 *decode_4bytes(U08 *src,U32 *dst);
U08 *decode_2bytes(U08 *src,U16 *dst);
U08 *decode_1bytes(U08 *src,U08 *dst);
void Show_Measurement_time(unsigned char *src);
void Show_Measurement_channel(unsigned char *src);
void Show_Measurement_SV(unsigned char *src);
void Show_Receiver_nav(unsigned char *src);
void Show_subframe(unsigned char *src);
void Show_glonass_string_buffer(unsigned char *src);

