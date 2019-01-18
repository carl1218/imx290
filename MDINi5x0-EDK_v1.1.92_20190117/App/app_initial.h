

#ifndef		__APPLICATION_INIT_H__
#define		__APPLICATION_INIT_H__

#if defined(__USE_MDIN_i510__)||defined(__USE_MDIN_i540__)||defined(__USE_MDIN_i550__)
// ----------------------------------------------------------------------
//
// 	app_initial.h contains header files of applications 
//
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// include
// ----------------------------------------------------------------------
#if defined(__PANORAMA_SETUP__)
#ifndef		__MISP_PANO_H__
#include	"app_pano.h"
#endif
#endif

#if defined(__CASCADE_CAM_SETUP__)
#ifndef		__MISP_CASCADE_CAM_H__
#include	"app_cascade_cam.h"
#endif
#endif

#ifndef		__MDIN_PICTURE_H__
#include	"app_picture_style.h"
#endif

#ifndef		__MDIN_LLCTRL_H__
#include	"app_lowlight_control.h"
#endif

#ifndef		__APP_SYNC_LOCK_H__
#include	"app_sync_lock.h"
#endif

#if defined(__USE_4K60_INOUT__)
#ifndef		__APP_4K60_H__
#include	"app_4k60.h"
#endif
#endif

// ----------------------------------------------------------------------
// define
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Struct/Union Types
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Static Global Data section variables
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// External Variable 
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Static Prototype Functions
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Static functions
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Exported functions
// ----------------------------------------------------------------------
void APPICATION_initialize(void);

// ----------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------
#endif // #if defined(__USE_MDIN_i510__)||defined(__USE_MDIN_i540__)||defined(__USE_MDIN_i550__)
//--------------------------------------------------------------------------------------------------------------------------
#endif 


/*  FILE_END_HERE */