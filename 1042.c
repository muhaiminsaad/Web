#include <stdio.h>

int main() {
    int a, b, c;
    int original_a, original_b, original_c;

    scanf("%d %d %d", &a, &b, &c);

    original_a = a;
    original_b = b;
    original_c = c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n", a, b, c);

    printf("\n");

    printf("%d\n%d\n%d\n", original_a, original_b, original_c);

    return 0;
}
