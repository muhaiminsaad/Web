#include <stdio.h>

int main() {
    int n, x, in_count = 0, out_count = 0;
    

    scanf("%d", &n);
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x >= 10 && x <= 20) {
            in_count++;
        } else {
            out_count++;
        }
    }

    printf("%d in\n", in_count);
    printf("%d out\n", out_count);
    
    return 0;
}
