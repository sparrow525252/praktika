#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    printf("Введіть три значення:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    double speed = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    total_time = 1.0 / speed;

    printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", total_time);

    return 0;
}
