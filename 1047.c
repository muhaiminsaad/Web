#include <stdio.h>

int main() {
    int startHour, startMinute, endHour, endMinute;
    int durationHours, durationMinutes;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    int startTotal = startHour * 60 + startMinute;
    int endTotal = endHour * 60 + endMinute;

    int durationTotal = endTotal - startTotal;
    if (durationTotal <= 0) {
        durationTotal += 24 * 60;
    }
    
    durationHours = durationTotal / 60;
    durationMinutes = durationTotal % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMinutes);
    
    return 0;
}
