#include <SDL2/SDL.h>
#include <iostream>
#include <cmath>  // For cos() and sin()

// Function to draw an ellipse
void DrawEllipse(SDL_Renderer* renderer, int cx, int cy, int a, int b) {
    const int numSegments = 360;  // Number of segments for a smoother ellipse
    for (int i = 0; i < numSegments; i++) {
        // Parametric equation for ellipse
        double theta = i * 2 * M_PI / numSegments;
        int x = static_cast<int>(cx + a * cos(theta));
        int y = static_cast<int>(cy + b * sin(theta));

        // Plot the point on the ellipse
        SDL_RenderDrawPoint(renderer, x, y);
    }
}

int main() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("Ellipse Example", 100, 100, 400, 300, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Set draw color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    // Ellipse center and radii
    int centerX = 100, centerY = 50;
    int xRadius = 100, yRadius = 50;

    // Draw the ellipse
    DrawEllipse(renderer, centerX, centerY, xRadius, yRadius);

    // Present the renderer
    SDL_RenderPresent(renderer);

    // Wait for user to close window
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
