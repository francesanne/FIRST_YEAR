#include <stdio.h>

int main() {
    int x, y, z, diff_x_z, diff_y_z;  // Corrected variable name diff_y_z

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    if (z >= x && z <= y) {
        printf("%d is just within %d and %d", z, x, y);
    } else {
        diff_x_z = (x > z) ? (x - z) : (z - x);
        diff_y_z = (y > z) ? (y - z) : (z - y);  // Corrected variable name diff_y_z

        if (diff_x_z > diff_y_z) {
            printf("%d is farther from %d", z, x);
        } else {
            printf("%d is farther from %d", z, y);
        }
    }

    return 0;
}
