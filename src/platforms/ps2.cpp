
/**
 *
 * @file ps2.cpp
 *
 * Part of the OpenJazz project
 *
 * @par Licence:
 * Copyright (c) 2026 André Guilherme
 *
 * OpenJazz is distributed under the terms of
 * the GNU General Public License, version 2.0
 *
 */

 #include "ps2.h"

#ifdef __PS2__

#include <debug.h>
#include <unistd.h>
#include "util.h"

#include "io/file.h"

void PS2_Init() {
    init_scr();
}

void PS2_AddGamePaths() {
	gamePaths.add(createString(SDL_GetBasePath()), PATH_TYPE_SYSTEM|PATH_TYPE_GAME|PATH_TYPE_CONFIG);
}

void PS2_ErrorNoDatafiles() {
    scr_setXY(20, 20);
    scr_printf("Could not find the data files, put the data files alongside with the executable");
    sleep(3);
    scr_clear();
}

#endif
