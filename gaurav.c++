#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int max_base_freq = 0;
    int base_freq[10] = {0};

    for (i = 0; i < 50; i++) {
        int num = rand() % 1000 + 1;
        int temp_num = num;

        while (temp_num > 0) {
            int digit = temp_num % 10;
            base_freq[digit]++;
            temp_num /= 10;
        }
    }

    for (j = 0; j < 10; j++) {
        if (base_freq[j] > max_base_freq) {
            max_base_freq = base_freq[j];
        }
    }

    printf("The highest base frequency over random 50 integers is %d\n", max_base_freq);

    return 0;
}