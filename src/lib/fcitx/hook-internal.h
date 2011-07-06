/***************************************************************************
 *   Copyright (C) 2010~2010 by CSSlayer                                   *
 *   wengxt@gmail.com                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/**
 * @file hook-internal.h
 * @brief private header of hook
 */

struct FcitxInstance;
void ProcessPreInputFilter(struct FcitxInstance* instance, FcitxKeySym sym, unsigned int state, INPUT_RETURN_VALUE* retval);
void ProcessPostInputFilter(struct FcitxInstance* instance, FcitxKeySym sym, unsigned int state, INPUT_RETURN_VALUE* retval);
INPUT_RETURN_VALUE CheckHotkey(struct FcitxInstance* instance, FcitxKeySym keysym, unsigned int state);
void ResetInputHook(struct FcitxInstance* instance);
void TriggerOffHook(struct FcitxInstance* instance);
void TriggerOnHook(struct FcitxInstance* instance);
void InputFocusHook(struct FcitxInstance* instance);
void InputUnFocusHook(struct FcitxInstance* instance);