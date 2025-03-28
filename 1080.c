#include <stdio.h>

int main() {
    int highest_value = 0, highest_position = 0;
    int current_value;
    
    for (int i = 1; i <= 100; i++) {
        scanf("%d", &current_value);
        
        if (current_value > highest_value) {
            highest_value = current_value;
            highest_position = i;
        }
    }
    
    printf("%d\n", highest_value);
    printf("%d\n", highest_position);

    return 0;
}
