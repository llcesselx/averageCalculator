#include <stdio.h>

int main() {
    int num = 0;
    float sum = 0;
    float count = 0;

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
