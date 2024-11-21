// A rectangle has a diagonal of length 100 pixels and one end at a point (10, 20).
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1 = 10, y1 = 20;
    int length = 100;
    int x2 = x1 + length, y2 = y1;

    // Draw rectangle
    rectangle(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
