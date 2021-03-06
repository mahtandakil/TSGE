/****************************************************************************
* Created for: AGE v2
* Dev line: TSGE v2
* Creation day: 08/05/2016
* Last change: 09/02/2017
****************************************************************************/


#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "SDL2/SDL2_gfxPrimitives.h"


#include <iostream>


using namespace std;


#ifndef TSGE_DEF_H_INCLUDED
#define TSGE_DEF_H_INCLUDED


//Top: -10 | -17 - 96


const string TSGE_VERSION = "0.2.2";
const int TSGE_30FPS = 33;
const int TSGE_60FPS = 16;


//Blending FLAGS
const SDL_BlendMode TSGE_BLENDINGFLAG_NONE = SDL_BLENDMODE_NONE;
const SDL_BlendMode TSGE_BLENDINGFLAG_BLEND = SDL_BLENDMODE_BLEND;
const SDL_BlendMode TSGE_BLENDINGFLAG_ADD = SDL_BLENDMODE_ADD;
const SDL_BlendMode TSGE_BLENDINGFLAG_MOD = SDL_BLENDMODE_MOD;

//Destination FLAGS
const Uint8 TSGE_DESTINATIONFLAG_WINDOW = 0;
const Uint8 TSGE_DESTINATIONFLAG_DRAWAREA = 1;

//Error FLAGS
const int TSGE_ERRORFLAG_GENERIC = -1;
const int TSGE_ERRORFLAG_FILEACCESS = -2;
const int TSGE_ERRORFLAG_NOREGISTER = -3;
const int TSGE_ERRORFLAG_IMAGEDRAW = -4;
const int TSGE_ERRORFLAG_RENDERPROCESS = -5;
const int TSGE_ERRORFLAG_NODRAWAREA = -6;
const int TSGE_ERRORFLAG_NOWINDOW = -7;
const int TSGE_ERRORFLAG_NORENDER = -8;
const int TSGE_ERRORFLAG_SIZE = -9;
const int TSGE_ERRORFLAG_FONTID = -15;
const int TSGE_ERRORFLAG_FONTLOAD = -16;

//Event FLAGS
const Uint32 TSGE_EVENT_NOEVENTS = 0;
const Uint32 TSGE_EVENT_WINDOW_CLOSE = 1;
const Uint32 TSGE_EVENT_WINDOW_MOVE = 2;
const Uint32 TSGE_EVENT_WINDOW_RESIZE = 3;
const Uint32 TSGE_EVENT_WINDOW_MAXIMIZE = 4;
const Uint32 TSGE_EVENT_WINDOW_MINIMIZE = 5;
const Uint32 TSGE_EVENT_WINDOW_VISIBLE = 6;
const Uint32 TSGE_EVENT_WINDOW_NOVISIBLE = 7;
const Uint32 TSGE_EVENT_WINDOW_EXPOSE = 8;
const Uint32 TSGE_EVENT_WINDOW_RESTORE = 9;
const Uint32 TSGE_EVENT_WINDOW_ENTER = 10;
const Uint32 TSGE_EVENT_WINDOW_LEAVE = 11;
const Uint32 TSGE_EVENT_WINDOW_FOCUS = 12;
const Uint32 TSGE_EVENT_WINDOW_NOFOCUS = 13;
const Uint32 TSGE_EVENT_KEY_ESC = 14;
const Uint32 TSGE_EVENT_KEY_F1 = 15;
const Uint32 TSGE_EVENT_KEY_F2 = 16;
const Uint32 TSGE_EVENT_KEY_F3 = 17;
const Uint32 TSGE_EVENT_KEY_F4 = 18;
const Uint32 TSGE_EVENT_KEY_F5 = 19;
const Uint32 TSGE_EVENT_KEY_F6 = 20;
const Uint32 TSGE_EVENT_KEY_F7 = 21;
const Uint32 TSGE_EVENT_KEY_F8 = 22;
const Uint32 TSGE_EVENT_KEY_F9 = 23;
const Uint32 TSGE_EVENT_KEY_F10 = 24;
const Uint32 TSGE_EVENT_KEY_F11 = 25;
const Uint32 TSGE_EVENT_KEY_F12 = 26;
const Uint32 TSGE_EVENT_KEY_PAUSE = 27;
const Uint32 TSGE_EVENT_KEY_INSERT = 28;
const Uint32 TSGE_EVENT_KEY_DELETE = 29;
const Uint32 TSGE_EVENT_KEY_1 = 30;
const Uint32 TSGE_EVENT_KEY_2 = 31;
const Uint32 TSGE_EVENT_KEY_3 = 32;
const Uint32 TSGE_EVENT_KEY_4 = 33;
const Uint32 TSGE_EVENT_KEY_5 = 34;
const Uint32 TSGE_EVENT_KEY_6 = 35;
const Uint32 TSGE_EVENT_KEY_7 = 36;
const Uint32 TSGE_EVENT_KEY_8 = 37;
const Uint32 TSGE_EVENT_KEY_9 = 38;
const Uint32 TSGE_EVENT_KEY_0 = 39;
const Uint32 TSGE_EVENT_KEY_TAB = 40;
const Uint32 TSGE_EVENT_KEY_Q = 41;
const Uint32 TSGE_EVENT_KEY_W = 42;
const Uint32 TSGE_EVENT_KEY_E = 43;
const Uint32 TSGE_EVENT_KEY_R = 44;
const Uint32 TSGE_EVENT_KEY_T = 45;
const Uint32 TSGE_EVENT_KEY_Y = 46;
const Uint32 TSGE_EVENT_KEY_U = 47;
const Uint32 TSGE_EVENT_KEY_I = 48;
const Uint32 TSGE_EVENT_KEY_O = 49;
const Uint32 TSGE_EVENT_KEY_P = 50;
const Uint32 TSGE_EVENT_KEY_A = 51;
const Uint32 TSGE_EVENT_KEY_S = 52;
const Uint32 TSGE_EVENT_KEY_D = 53;
const Uint32 TSGE_EVENT_KEY_F = 54;
const Uint32 TSGE_EVENT_KEY_G = 55;
const Uint32 TSGE_EVENT_KEY_H = 56;
const Uint32 TSGE_EVENT_KEY_J = 57;
const Uint32 TSGE_EVENT_KEY_K = 58;
const Uint32 TSGE_EVENT_KEY_L = 59;
const Uint32 TSGE_EVENT_KEY_Z = 60;
const Uint32 TSGE_EVENT_KEY_X = 61;
const Uint32 TSGE_EVENT_KEY_C = 62;
const Uint32 TSGE_EVENT_KEY_V = 63;
const Uint32 TSGE_EVENT_KEY_B = 64;
const Uint32 TSGE_EVENT_KEY_N = 65;
const Uint32 TSGE_EVENT_KEY_M = 66;
const Uint32 TSGE_EVENT_KEY_LSHIFT = 67;
const Uint32 TSGE_EVENT_KEY_RSHIFT = 68;
const Uint32 TSGE_EVENT_KEY_CAPSLOCK = 69;
const Uint32 TSGE_EVENT_KEY_RCTRL = 70;
const Uint32 TSGE_EVENT_KEY_LCTRL = 71;
const Uint32 TSGE_EVENT_KEY_RALT = 72;
const Uint32 TSGE_EVENT_KEY_LALT = 73;
const Uint32 TSGE_EVENT_KEY_SPACE = 74;
const Uint32 TSGE_EVENT_KEY_LEFT = 75;
const Uint32 TSGE_EVENT_KEY_UP = 76;
const Uint32 TSGE_EVENT_KEY_DOWN = 77;
const Uint32 TSGE_EVENT_KEY_RIGHT = 78;
const Uint32 TSGE_EVENT_KEY_HOME = 79;
const Uint32 TSGE_EVENT_KEY_END = 80;
const Uint32 TSGE_EVENT_KEY_PAGEUP = 81;
const Uint32 TSGE_EVENT_KEY_PAGEDOWN = 82;
const Uint32 TSGE_EVENT_KEY_RETURN = 83;
const Uint32 TSGE_EVENT_MOUSE_LEFT = 84;
const Uint32 TSGE_EVENT_MOUSE_MIDDLE = 85;
const Uint32 TSGE_EVENT_MOUSE_RIGHT = 86;
const Uint32 TSGE_EVENT_MOUSE_X1 = 87;
const Uint32 TSGE_EVENT_MOUSE_X2 = 88;

//Label mode FLAGS
const int TSGE_LABELMODEFLAG_BLENDED = 89;
const int TSGE_LABELMODEFLAG_SOLID = 90;
const int TSGE_LABELMODEFLAG_SHADED = 91;

//Object identifier FLAGS
const int TSGE_IDFLAG_WINDOW = 92;
const int TSGE_IDFLAG_IMAGE = 93;
const int TSGE_IDFLAG_DRAWAREA = 94;
const int TSGE_IDFLAG_EVENT = 95;

//Renderer FLAGS
const Uint32 TSGE_RENDERFLAG_SOFTWARE = SDL_RENDERER_SOFTWARE;
const Uint32 TSGE_RENDERFLAG_HARDWARE = SDL_RENDERER_ACCELERATED;
const Uint32 TSGE_RENDERFLAG_VSYNC = SDL_RENDERER_PRESENTVSYNC;

//Window FLAGS
const int TSGE_WINDOWFLAG_XCENTERED = -1;
const int TSGE_WINDOWFLAG_YCENTERED = -2;
const Uint32 TSGE_WINDOWFLAG_FULLDESKTOP = SDL_WINDOW_FULLSCREEN_DESKTOP;
const Uint32 TSGE_WINDOWFLAG_FULLSCREEN = SDL_WINDOW_FULLSCREEN;
const Uint32 TSGE_WINDOWFLAG_MAXIMIZED = SDL_WINDOW_MAXIMIZED;
const Uint32 TSGE_WINDOWFLAG_NOBORDER = SDL_WINDOW_BORDERLESS;
const Uint32 TSGE_WINDOWFLAG_NOVISIBLE = SDL_WINDOW_HIDDEN;
const Uint32 TSGE_WINDOWFLAG_RESIZABLE = SDL_WINDOW_RESIZABLE;
const Uint32 TSGE_WINDOWFLAG_VISIBLE = SDL_WINDOW_SHOWN;


//---------------------------------------------------------------------------

struct TSGE_Cartesian {
	int x;
	int y;
	int w;
	int h;
};


//---------------------------------------------------------------------------

struct TSGE_Color {
	Uint8 r;
	Uint8 g;
	Uint8 b;
	Uint8 a;
};


//---------------------------------------------------------------------------

struct TSGE_Event_Status {
	Uint32 event = 0;
	Uint32 device = 0;
	int window = -1;
	Uint32 timestamp = 0;
	Uint32 state = 0;
	int x = -1;
	int y = -1;
	int w = -1;
	int h = -1;
	Uint8 count = 0;
	Uint16 mod = 0;
};


#endif // TSGE_DEF_H_INCLUDED
