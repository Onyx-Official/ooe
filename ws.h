/*
 *	Window Splitting
 *	Copyright
 *		(C) 2020 Onyx
 *
 *	This file is part of OOE (Onyx`s Own Editor)
 *
 */

#ifndef _OOE_WS_H_
#define _OOe_WS_H_

#include "w.h"
#include "defs.h"

// get window surface and split the window
int retIWin_scrnCursor(struct WINS*, const int, const int);

/*
* Return omdex to window based on screen cursor position
*/
struct WIN* scrn_cursor_returnWindow();

/*
* Split the window vertically
*/
void wsplt_vertical();

/*
* Split the window horizontally
*/
void wsplt_horizontal();

#endif