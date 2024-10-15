#pragma once

#include <SDL2/SDL.h>

typedef struct {
    int x1, x2;
    int y1, y2;
} Wall;

typedef struct {
    int x;
} Sector;

void editor_init();
void editor_update();
void editor_quit();
