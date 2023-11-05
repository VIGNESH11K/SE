#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle:\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 > 0 && angle2 > 0 && angle3 > 0) {
        if (angle1 + angle2 + angle3 == 180) {
            printf("Valid triangle.\n");
        } else {
            printf("Invalid triangle (Sum of angles is not 180 degrees).\n");
        }
    } else {
        printf("Invalid triangle (All angles must be greater than 0).\n");
    }

    return 0;
}