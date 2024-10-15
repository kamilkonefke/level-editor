#pragma once

typedef struct {
    int x1, y1;
    int x2, y2;
} Wall;

typedef struct {
    int TODO;
} Sector;

void editor_init();
void editor_update();
void editor_quit();
