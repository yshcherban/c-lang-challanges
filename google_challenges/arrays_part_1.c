#include <stdio.h>

int main() {
    int numbers[] = {2, 122, 234, 12, 3, 24, 43};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int max = numbers[0];
    int second = -1;

    for (int i = 1; i < n; i++) {
        if (numbers[i] > max) {
            second = max;
            max = numbers[i];
        } else if (numbers[i] > second && numbers[i] < max) {
            second = numbers[i];
        }
    }

    printf("Second max = %d\n", second);

    return 0;
}
