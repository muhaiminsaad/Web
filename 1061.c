#include <stdio.h>

int main() {
    int start_day, start_hour, start_min, start_sec;
    int end_day, end_hour, end_min, end_sec;
    int total_start, total_end, total_seconds;
    int days, hours, minutes, seconds;

    scanf("Dia %d", &start_day);
    scanf("%d : %d : %d", &start_hour, &start_min, &start_sec);

    scanf(" Dia %d", &end_day);
    scanf("%d : %d : %d", &end_hour, &end_min, &end_sec);

    total_start = (start_day * 86400) + (start_hour * 3600) + (start_min * 60) + start_sec;
    total_end = (end_day * 86400) + (end_hour * 3600) + (end_min * 60) + end_sec;
    
    total_seconds = total_end - total_start;

    days = total_seconds / 86400;
    total_seconds %= 86400;
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
