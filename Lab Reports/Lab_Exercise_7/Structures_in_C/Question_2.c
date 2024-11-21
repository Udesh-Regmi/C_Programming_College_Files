// Write a program to enter to Cartesian coordinate points and display the distance
// between them.

#include <stdio.h>
#include <math.h>

// Define the structure for Cartesian points
struct Point {
    float x;
    float y;
};

// Function to calculate distance
float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point point1, point2;

    // Input coordinates
    printf("Enter coordinates of first point (x y): ");
    scanf("%f %f", &point1.x, &point1.y);

    printf("Enter coordinates of second point (x y): ");
    scanf("%f %f", &point2.x, &point2.y);

    // Calculate and display distance
    float distance = calculateDistance(point1, point2);
    printf("Distance between points: %.2f\n", distance);

    return 0;
}
