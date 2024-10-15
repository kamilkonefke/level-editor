#pragma once

#include <stdbool.h>
#include <SDL2/SDL.h>

extern SDL_Window* window;
extern SDL_Renderer* renderer;
extern bool is_running;

typedef struct {
    int r, g, b, a;
} Color;

typedef struct {
    int x, y;
} Point;

typedef struct {
    int x, y, w, h;
} Rect;

void draw_point(Point point, Color color);
void draw_rect(Rect rect, Color color);
void draw_line(Point p1, Point p2, Color color);
void draw_grid(int grid_size, Color color);
void draw_dot_grid(int grid_size, Color color);
