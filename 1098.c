#include <stdio.h>

int main() {
    int i, j;
    float I, J;

    for (i = 0; i <= 10; i++) {
        I = i / 5.0;

        for (j = 1; j <= 3; j++) {
            J = j + I;

            if (i % 5 == 0) { 
                printf("I=%d J=%d\n", (int)I, (int)J);
            } else {
                printf("I=%.1f J=%.1f\n", I, J);
            }
        }
    }

    return 0;
}
