#include "gfx.h"

void draw_point(Point point, Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawPoint(renderer, point.x, point.y);
}

void draw_rect(Rect rect, Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_Rect temp_rect = {rect.x, rect.y, rect.w, rect.h};
    SDL_RenderDrawRect(renderer, &temp_rect);
}

void draw_line(Point p1, Point p2, Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawLine(renderer, p1.x, p1.y, p2.x, p2.y);
}

void draw_grid(int grid_size, Color color) {
    for(int y = 0; y <= 1000; y += grid_size) {
        // Vertical lines
        Point vertical_start_point = {0, y};
        Point vertical_end_point = {500, y};
        draw_line(vertical_start_point, vertical_end_point, color);
        for(int x = 0; x <= 1000; x += grid_size) {
            // Horizontal lines
            Point horizontal_start_point = {x, 0};
            Point horizontal_end_point = {x, 500};
            draw_line(horizontal_start_point, horizontal_end_point, color);

        }
    }
}

void draw_dot_grid(int grid_size, Color color) {
    for(int y = 0; y <= 1000; y += grid_size) {
        for(int x = 0; x <= 1000; x += grid_size) {
            Point grid_point = {x, y};
            draw_point(grid_point, color);
        }
    }
}
