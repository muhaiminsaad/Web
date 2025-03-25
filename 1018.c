#include <stdio.h>
void decompose_banknotes(int N) {
printf("%d\n", N);
int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
int count, i; 
    for (i = 0; i < 7; i++) {
        count = N / banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", count, banknotes[i]);
        N %= banknotes[i];
    }
}

int main() {
    int N;
    scanf("%d", &N);
    if (N > 0 && N < 1000000) {
        decompose_banknotes(N);
    }
    return 0;
}
