#include <stdio.h>

int main() {
    int N, amount, total = 0;
    int rabbits = 0, rats = 0, frogs = 0;
    char type;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %c", &amount, &type);

        total += amount;
        if (type == 'C') {
            rabbits += amount;
        } else if (type == 'R') {
            rats += amount;
        } else if (type == 'S') {
            frogs += amount;
        }
    }

    double perc_rabbits = (rabbits * 100.0) / total;
    double perc_rats = (rats * 100.0) / total;
    double perc_frogs = (frogs * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2f %%\n", perc_rabbits);
    printf("Percentual de ratos: %.2f %%\n", perc_rats);
    printf("Percentual de sapos: %.2f %%\n", perc_frogs);

    return 0;
}
