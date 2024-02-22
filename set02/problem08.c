#include <stdio.h>

typedef struct {
    double side1;
    double side2;
    double side3;
} Triangle;

double calculateArea(Triangle t) {
    double p = (t.side1 + t.side2 + t.side3) / 2; 
    double area = p * (p - t.side1) * (p - t.side2) * (p - t.side3); 
    if (area < 0) {
        return -1; 
    }
    return sqrt(area);
}

int main() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);

Triangle triangles[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the dimensions of triangle %d (side1 side2 side3): ", i + 1);
        scanf("%lf %lf %lf", &triangles[i].side1, &triangles[i].side2, &triangles[i].side3);
    }

    int smallestIndex = 0;
    double smallestArea = calculateArea(triangles[0]);

    for (int i = 1; i < n; i++) {
        double area = calculateArea(triangles[i]);
        if (area != -1 && (smallestArea == -1 || area < smallestArea)) {
            smallestArea = area;
            smallestIndex = i;
        }
    }

    printf("Triangle with the smallest area:\n");
    printf("Side 1: %.2lf\n", triangles[smallestIndex].side1);
    printf("Side 2: %.2lf\n", triangles[smallestIndex].side2);
    printf("Side 3: %.2lf\n", triangles[smallestIndex].side3);
    printf("Area: %.2lf\n", smallestArea);

    return 0;
}
