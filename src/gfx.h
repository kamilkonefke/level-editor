#pragma once

#include <stdbool.h>
#include <SDL2/SDL.h>
#include <math.h>

extern SDL_Window* window;
extern SDL_Renderer* renderer;
extern bool is_running;

typedef struct {
    int r, g, b, a;
} Color;

typedef struct {
    int x, y, w, h;
} Rect;

void draw_point(int x, int y, Color color);
void draw_rect(Rect rect, Color color);
void draw_line(int x1, int y1, int x2, int y2, Color color);
void draw_grid(int grid_size, Color color);
void draw_dot_grid(int grid_size, Color color);
