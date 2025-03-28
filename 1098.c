#include <stdio.h>

int main() {
    int i, j;
    float I, J;

    for (i = 0; i <= 10; i++) { // Using integer loop to avoid floating point precision issues
        I = i / 5.0; // Convert integer to float (increments of 0.2)

        for (j = 1; j <= 3; j++) {
            J = j + I;

            // Print as integer if I and J are whole numbers
            if (i % 5 == 0) { 
                printf("I=%d J=%d\n", (int)I, (int)J);
            } else {
                printf("I=%.1f J=%.1f\n", I, J);
            }
        }
    }

    return 0;
}
