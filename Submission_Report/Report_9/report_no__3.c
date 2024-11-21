//  A rectangle that has a left top corner point at (50, 75) and a right bottom point at (200,
// 250).
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw rectangle
    rectangle(50, 75, 200, 250);

    getch();
    closegraph();
    return 0;
}
