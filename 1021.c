#include <stdio.h>

int main() {
    double N;
    int amount, centavos;
    
    scanf("%lf", &N);
    
    amount = (int)N;
    centavos = (N - amount) * 100 + 0.5;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", amount / 100);
    amount %= 100;
    printf("%d nota(s) de R$ 50.00\n", amount / 50);
    amount %= 50;
    printf("%d nota(s) de R$ 20.00\n", amount / 20);
    amount %= 20;
    printf("%d nota(s) de R$ 10.00\n", amount / 10);
    amount %= 10;
    printf("%d nota(s) de R$ 5.00\n", amount / 5);
    amount %= 5;
    printf("%d nota(s) de R$ 2.00\n", amount / 2);
    amount %= 2;
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", amount);
    printf("%d moeda(s) de R$ 0.50\n", centavos / 50);
    centavos %= 50;
    printf("%d moeda(s) de R$ 0.25\n", centavos / 25);
    centavos %= 25;
    printf("%d moeda(s) de R$ 0.10\n", centavos / 10);
    centavos %= 10;
    printf("%d moeda(s) de R$ 0.05\n", centavos / 5);
    centavos %= 5;
    printf("%d moeda(s) de R$ 0.01\n", centavos);
    
    return 0;
}
