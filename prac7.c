#include<stdio.h>

int main()
{
    int num, a, b, d1, d2, d3;

    printf("Enter the number whose sum of digits you want: ");
    scanf("%d", &num);

    d1 = num % 10;
    a = num / 10;

    d2 = a % 10;
    b = a / 10;

    d3 = b % 10;
    
    printf("\nThe sum of the digits of the number is: %d", d1 + d2 + d3);
    
    return 0;
}