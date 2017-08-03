// This file is part of retro-gtk. License: GPL-3.0+.

#ifndef RETRO_KEYBOARD_KEY_H
#define RETRO_KEYBOARD_KEY_H

#include <gdk/gdk.h>

G_BEGIN_DECLS

typedef enum {
  RETRO_KEYBOARD_KEY_UNKNOWN = 0,
  RETRO_KEYBOARD_KEY_FIRST = 0,
  RETRO_KEYBOARD_KEY_BACKSPACE = 8,
  RETRO_KEYBOARD_KEY_TAB = 9,
  RETRO_KEYBOARD_KEY_CLEAR = 12,
  RETRO_KEYBOARD_KEY_RETURN = 13,
  RETRO_KEYBOARD_KEY_PAUSE = 19,
  RETRO_KEYBOARD_KEY_ESCAPE = 27,
  RETRO_KEYBOARD_KEY_SPACE = 32,
  RETRO_KEYBOARD_KEY_EXCLAIM = 33,
  RETRO_KEYBOARD_KEY_QUOTEDBL = 34,
  RETRO_KEYBOARD_KEY_HASH = 35,
  RETRO_KEYBOARD_KEY_DOLLAR = 36,
  RETRO_KEYBOARD_KEY_AMPERSAND = 38,
  RETRO_KEYBOARD_KEY_QUOTE = 39,
  RETRO_KEYBOARD_KEY_LEFTPAREN = 40,
  RETRO_KEYBOARD_KEY_RIGHTPAREN = 41,
  RETRO_KEYBOARD_KEY_ASTERISK = 42,
  RETRO_KEYBOARD_KEY_PLUS = 43,
  RETRO_KEYBOARD_KEY_COMMA = 44,
  RETRO_KEYBOARD_KEY_MINUS = 45,
  RETRO_KEYBOARD_KEY_PERIOD = 46,
  RETRO_KEYBOARD_KEY_SLASH = 47,
  RETRO_KEYBOARD_KEY_ZERO = 48,
  RETRO_KEYBOARD_KEY_ONE = 49,
  RETRO_KEYBOARD_KEY_TWO = 50,
  RETRO_KEYBOARD_KEY_THREE = 51,
  RETRO_KEYBOARD_KEY_FOUR = 52,
  RETRO_KEYBOARD_KEY_FINE = 53,
  RETRO_KEYBOARD_KEY_SIX = 54,
  RETRO_KEYBOARD_KEY_SEVEN = 55,
  RETRO_KEYBOARD_KEY_HEIGHT = 56,
  RETRO_KEYBOARD_KEY_NINE = 57,
  RETRO_KEYBOARD_KEY_COLON = 58,
  RETRO_KEYBOARD_KEY_SEMICOLON = 59,
  RETRO_KEYBOARD_KEY_LESS = 60,
  RETRO_KEYBOARD_KEY_EQUALS = 61,
  RETRO_KEYBOARD_KEY_GREATER = 62,
  RETRO_KEYBOARD_KEY_QUESTION = 63,
  RETRO_KEYBOARD_KEY_AT = 64,
  RETRO_KEYBOARD_KEY_LEFTBRACKET = 91,
  RETRO_KEYBOARD_KEY_BACKSLASH = 92,
  RETRO_KEYBOARD_KEY_RIGHTBRACKET = 93,
  RETRO_KEYBOARD_KEY_CARET = 94,
  RETRO_KEYBOARD_KEY_UNDERSCORE = 95,
  RETRO_KEYBOARD_KEY_BACKQUOTE = 96,
  RETRO_KEYBOARD_KEY_a = 97,
  RETRO_KEYBOARD_KEY_b = 98,
  RETRO_KEYBOARD_KEY_c = 99,
  RETRO_KEYBOARD_KEY_d = 100,
  RETRO_KEYBOARD_KEY_e = 101,
  RETRO_KEYBOARD_KEY_f = 102,
  RETRO_KEYBOARD_KEY_g = 103,
  RETRO_KEYBOARD_KEY_h = 104,
  RETRO_KEYBOARD_KEY_i = 105,
  RETRO_KEYBOARD_KEY_j = 106,
  RETRO_KEYBOARD_KEY_k = 107,
  RETRO_KEYBOARD_KEY_l = 108,
  RETRO_KEYBOARD_KEY_m = 109,
  RETRO_KEYBOARD_KEY_n = 110,
  RETRO_KEYBOARD_KEY_o = 111,
  RETRO_KEYBOARD_KEY_p = 112,
  RETRO_KEYBOARD_KEY_q = 113,
  RETRO_KEYBOARD_KEY_r = 114,
  RETRO_KEYBOARD_KEY_s = 115,
  RETRO_KEYBOARD_KEY_t = 116,
  RETRO_KEYBOARD_KEY_u = 117,
  RETRO_KEYBOARD_KEY_v = 118,
  RETRO_KEYBOARD_KEY_w = 119,
  RETRO_KEYBOARD_KEY_x = 120,
  RETRO_KEYBOARD_KEY_y = 121,
  RETRO_KEYBOARD_KEY_z = 122,
  RETRO_KEYBOARD_KEY_DELETE = 127,
  RETRO_KEYBOARD_KEY_KP0 = 256,
  RETRO_KEYBOARD_KEY_KP1 = 257,
  RETRO_KEYBOARD_KEY_KP2 = 258,
  RETRO_KEYBOARD_KEY_KP3 = 259,
  RETRO_KEYBOARD_KEY_KP4 = 260,
  RETRO_KEYBOARD_KEY_KP5 = 261,
  RETRO_KEYBOARD_KEY_KP6 = 262,
  RETRO_KEYBOARD_KEY_KP7 = 263,
  RETRO_KEYBOARD_KEY_KP8 = 264,
  RETRO_KEYBOARD_KEY_KP9 = 265,
  RETRO_KEYBOARD_KEY_KP_PERIOD = 266,
  RETRO_KEYBOARD_KEY_KP_DIVIDE = 267,
  RETRO_KEYBOARD_KEY_KP_MULTIPLY = 268,
  RETRO_KEYBOARD_KEY_KP_MINUS = 269,
  RETRO_KEYBOARD_KEY_KP_PLUS = 270,
  RETRO_KEYBOARD_KEY_KP_ENTER = 271,
  RETRO_KEYBOARD_KEY_KP_EQUALS = 272,
  RETRO_KEYBOARD_KEY_UP = 273,
  RETRO_KEYBOARD_KEY_DOWN = 274,
  RETRO_KEYBOARD_KEY_RIGHT = 275,
  RETRO_KEYBOARD_KEY_LEFT = 276,
  RETRO_KEYBOARD_KEY_INSERT = 277,
  RETRO_KEYBOARD_KEY_HOME = 278,
  RETRO_KEYBOARD_KEY_END = 279,
  RETRO_KEYBOARD_KEY_PAGEUP = 280,
  RETRO_KEYBOARD_KEY_PAGEDOWN = 281,
  RETRO_KEYBOARD_KEY_F1 = 282,
  RETRO_KEYBOARD_KEY_F2 = 283,
  RETRO_KEYBOARD_KEY_F3 = 284,
  RETRO_KEYBOARD_KEY_F4 = 285,
  RETRO_KEYBOARD_KEY_F5 = 286,
  RETRO_KEYBOARD_KEY_F6 = 287,
  RETRO_KEYBOARD_KEY_F7 = 288,
  RETRO_KEYBOARD_KEY_F8 = 289,
  RETRO_KEYBOARD_KEY_F9 = 290,
  RETRO_KEYBOARD_KEY_F10 = 291,
  RETRO_KEYBOARD_KEY_F11 = 292,
  RETRO_KEYBOARD_KEY_F12 = 293,
  RETRO_KEYBOARD_KEY_F13 = 294,
  RETRO_KEYBOARD_KEY_F14 = 295,
  RETRO_KEYBOARD_KEY_F15 = 296,
  RETRO_KEYBOARD_KEY_NUMLOCK = 300,
  RETRO_KEYBOARD_KEY_CAPSLOCK = 301,
  RETRO_KEYBOARD_KEY_SCROLLOCK = 302,
  RETRO_KEYBOARD_KEY_RSHIFT = 303,
  RETRO_KEYBOARD_KEY_LSHIFT = 304,
  RETRO_KEYBOARD_KEY_RCTRL = 305,
  RETRO_KEYBOARD_KEY_LCTRL = 306,
  RETRO_KEYBOARD_KEY_RALT = 307,
  RETRO_KEYBOARD_KEY_LALT = 308,
  RETRO_KEYBOARD_KEY_RMETA = 309,
  RETRO_KEYBOARD_KEY_LMETA = 310,
  RETRO_KEYBOARD_KEY_LSUPER = 311,
  RETRO_KEYBOARD_KEY_RSUPER = 312,
  RETRO_KEYBOARD_KEY_MODE = 313,
  RETRO_KEYBOARD_KEY_COMPOSE = 314,
  RETRO_KEYBOARD_KEY_HELP = 315,
  RETRO_KEYBOARD_KEY_PRINT = 316,
  RETRO_KEYBOARD_KEY_SYSREQ = 317,
  RETRO_KEYBOARD_KEY_BREAK = 318,
  RETRO_KEYBOARD_KEY_MENU = 319,
  RETRO_KEYBOARD_KEY_POWER = 320,
  RETRO_KEYBOARD_KEY_EURO = 321,
  RETRO_KEYBOARD_KEY_UNDO = 322,
  RETRO_KEYBOARD_KEY_LAST
} RetroKeyboardKey;

typedef enum {
  RETRO_KEYBOARD_MODIFIER_KEY_NONE = 0x0000,
  RETRO_KEYBOARD_MODIFIER_KEY_SHIFT = 0x01,
  RETRO_KEYBOARD_MODIFIER_KEY_CTRL = 0x02,
  RETRO_KEYBOARD_MODIFIER_KEY_ALT = 0x04,
  RETRO_KEYBOARD_MODIFIER_KEY_META = 0x08,
  RETRO_KEYBOARD_MODIFIER_KEY_NUMLOCK = 0x10,
  RETRO_KEYBOARD_MODIFIER_KEY_CAPSLOCK = 0x20,
  RETRO_KEYBOARD_MODIFIER_KEY_SCROLLOCK = 0x40
} RetroKeyboardModifierKey;

RetroKeyboardModifierKey retro_keyboard_modifier_key_converter (guint keyval,
                                                                GdkModifierType modifiers);
RetroKeyboardKey retro_keyboard_key_converter (guint keyval);

G_END_DECLS

#endif /* RETRO_KEYBOARD_KEY_H */