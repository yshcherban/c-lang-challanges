#include <stdio.h>

int main()
{    
    int numbers[5] = {30, 10, 3, 11, 0};


    for (int i = 0 ; i < 5; i++) {
        int recorded_array[5];
        
        if(i == 0) {
            recorded_array[0] = numbers[0]; // current element of original array

            for(int k = 1; k < 5; k++) {
                if(recorded_array[0] > numbers[k]) {
                    int length = sizeof(numbers) / sizeof(numbers[0]);

                    recorded_array[length + 1] = recorded_array[0];
                    
                    recorded_array[0] = numbers[k];
                }
            }

        }

        for (int v = 0; v < 5; v++) {
            printf("%d ", recorded_array[v]);
        }

        printf("\n");

        break;

    }


    return 0;
}