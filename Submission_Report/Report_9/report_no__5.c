//  An ellipse having xRadius=100, yRadius=50, and center at point (100, 50).
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "");
    
    // Coordinates for the center of the ellipse
    int centerX = 100;
    int centerY = 50;
    
    // Radius values for the ellipse
    int xRadius = 100;
    int yRadius = 50;
    
    // Draw the ellipse
    ellipse(centerX, centerY, 0, 360, xRadius, yRadius);
    
    // Wait for user input before closing the graphics window
    getch();
    closegraph();
    
    return 0;
}
