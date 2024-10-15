#include "gfx.h"

void draw_point(int x, int y, Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawPoint(renderer, x, y);
}

void draw_rect(Rect rect, Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_Rect temp_rect = {rect.x, rect.y, rect.w, rect.h};
    SDL_RenderDrawRect(renderer, &temp_rect);
}

void draw_line(int x1, int y1, int x2, int y2, Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
}

// DO NOT USE!
// void draw_grid(int grid_size, Color color) {
//     for(int y = 0; y <= 100; y += grid_size) {
//         // Vertical lines
//         Point vertical_start_point = {0, y};
//         Point vertical_end_point = {100, y};
//         draw_line(vertical_start_point, vertical_end_point, color);
//         for(int x = 0; x <= 100; x += grid_size) {
//             // Horizontal lines
//             Point horizontal_start_point = {x, 0};
//             Point horizontal_end_point = {x, 100};
//             draw_line(horizontal_start_point, horizontal_end_point, color);
//         }
//     }
// }

void draw_dot_grid(int grid_size, Color color) {
    for(int y = 0; y <= 5000; y += grid_size) {
        for(int x = 0; x <= 5000; x += grid_size) {
            draw_point(x, y, color);
        }
    }
}
