// -*- C++ -*-
// VisualBoyAdvance - Nintendo Gameboy/GameboyAdvance (TM) emulator.
// Copyright (C) 1999-2003 Forgotten
// Copyright (C) 2005 Forgotten and the VBA development team

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or(at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#ifndef VBA_EEPROM_H
#define VBA_EEPROM_H

bool GBA_EEPROM_SaveFile(const char *filename) MDFN_COLD;
bool GBA_EEPROM_LoadFile(const char *filename) MDFN_COLD;
int EEPROM_StateAction(StateMem *sm, int load, int data_only) MDFN_COLD;


int eepromRead(uint32 address);
void eepromWrite(uint32 address, uint8 value);
void eepromInit(void) MDFN_COLD;
void eepromReset(void) MDFN_COLD;

#endif // VBA_EEPROM_H
