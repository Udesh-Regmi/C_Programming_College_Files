// . Two concentric circles having a center point at (100, 100). The inner circle should have a
// radius of 50 and the outer have 75 pixels.

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw concentric circles
    circle(100, 100, 75); // Outer circle
    circle(100, 100, 50); // Inner circle

    getch();
    closegraph();
    return 0;
}
