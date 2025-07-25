#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    // Масиви для збереження кількості послідовностей з різними кінцями
    int a[n + 1]; // закінчується на 0
    int b[n + 1]; // закінчується на 10
    int c[n + 1]; // закінчується на 110

    // Початкові значення для n = 1
    a[1] = 1; // "0"
    b[1] = 1; // "1"
    c[1] = 0; // немає "11" при n = 1

    // Заповнюємо масиви для кожної довжини від 2 до n
    for (int i = 2; i <= n; i++) {
        a[i] = (a[i - 1] + b[i - 1] + c[i - 1]) % MOD;
        b[i] = a[i - 1] % MOD;
        c[i] = b[i - 1] % MOD;
    }

    // Обчислюємо загальну кількість правильних послідовностей
    int result = (a[n] + b[n] + c[n]) % MOD;

    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
