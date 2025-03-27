#include <stdio.h>

int main() {
    int num, even_count = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            even_count++;
        }
    }
    
    printf("%d valores pares\n", even_count);
    
    return 0;
}
