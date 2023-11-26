#include <stdio.h>

int main() {
    int num1, num2;
    float average;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    average = sum / 2.0; 

    printf("Tong: %d\n", sum);
    printf("Trung binh: %.2f", average);

    return 0;
}
