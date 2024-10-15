#include <stdbool.h>
#include <SDL2/SDL.h>

#include "gfx.h"

#define WIDTH 1280
#define HEIGHT 720

SDL_Window* window; 
SDL_Renderer* renderer;
bool is_running;

void input() {
    // Events
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        switch(event.type) {
            case SDL_QUIT:
                is_running = false;
                break;
        }
    }
}

void update() {

}

void render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderSetScale(renderer, 1.0, 1.0);

    Color grid_color = {50, 50, 50, 255};
    draw_dot_grid(15.0, grid_color);

    SDL_RenderPresent(renderer);
}

int main(int argc, char** argv) {
    // Init
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow("level-editor", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_SOFTWARE);

    is_running = true;
    while(is_running) {
        input();
        update();
        render();
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
