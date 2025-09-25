#include <stdio.h>

void Loop(int num, int sum) {
    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
        }

    } while (num > 0);

    printf("Total sum is: %d\n", sum); 
}

int main() {
    int num = 0;
    int sum = 0;

    printf("Enter positive number to ADD (zero or negative number to STOP): \n");
    Loop(num, sum);

    return 0;
}