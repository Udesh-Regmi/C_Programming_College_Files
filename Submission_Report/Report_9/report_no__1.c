// 1. A circle having a radius of 100 pixels and a center at point (150, 250).
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw circle with center (150, 250) and radius 100
    circle(150, 250, 100);

    getch(); // Wait for user to press a key
    closegraph(); // Close the graphics window
    return 0;
}
