#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("tmp", "r");

    if(file == NULL) {
        perror("Error reading file");
        return 1;
    }

    printf("File exists.\n");

    int arr[10];
    int count = 0;
    int num;

    while(count < 10 && fscanf(file, "%d", &num) == 1) {
        arr[count++] = num;
    }

    fclose(file);

    printf("File read.\n");

    FILE *file_out = fopen("results", "w");
    if(!file_out) {
        perror("Error open file for writing");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file_out, "%d", arr[i] * 2);
        if (i < count - 1) {
            fprintf(file_out, " ");
        }
    }

    fclose(file_out);

    printf("Done");
    return 0;
}
