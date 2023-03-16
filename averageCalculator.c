#include <stdio.h>

int main() {
    int num = 0;
    float sum = 0;
    float count = 0;

    /* Takes integers, one by one, totals it to sum and
     * then divides by count for the average.*/

    while(num != 9999){
        printf("Enter integer (Enter 9999 when done):");
        scanf("%d", &num);
        if (num == 9999){
            break;
        }
        sum += num;
        count++;
    }
    printf("Average: %.2f", sum/count);

    return 0;
}
