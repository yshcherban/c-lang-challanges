#include <stdio.h>

int main() {
    int numbers[5] = {34, 3, 23, 0, 2};
    int size = 5;

    for (int i = 0; i < size; i++) {
        for (int k = i + 1; k < size; k++) {
            if (numbers[i] > numbers[k]) {
                int temp = numbers[k];

                for (int j = k; j > i; j--) {
                    numbers[j] = numbers[j - 1];
                }
                numbers[i] = temp;

                i = -1;
                break;
            }
        }
    }

    for (int l = 0; l < size; l++) {
        printf("%d ", numbers[l]);
    }

    return 0;
}
