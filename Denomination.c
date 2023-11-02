#include <stdio.h>

int main()
{
    int a;
    printf("Enter The Amount : ");
    scanf("%d", &a);
    printf("\nDenomination in 2000rs    : %d", (a / 2000));
    printf("\nDenomination in 500rs     : %d", ((a % 2000) / 500));
    printf("\nDenomination in 200rs     : %d", (((a % 2000) % 500) / 200));
    printf("\nDenomination in 100rs     : %d", ((((a % 2000) % 500) % 200) / 100));
    printf("\nDenomination in 50rs      : %d", (((((a % 2000) % 500) % 200) % 100) / 50));
    printf("\nDenomination in 20rs      : %d", ((((((a % 2000) % 500) % 200) % 100) % 50) / 20));
    printf("\nDenomination in 10rs      : %d", (((((((a % 2000) % 500) % 200) % 100) % 50) % 20) / 10));
    printf("\nDenomination in 1rs       : %d", ((((((((a % 2000) % 500) % 200) % 100) % 50) % 20) % 10) / 1));
    printf("\nBalance                   : %d", (((((((((a % 2000) % 500) % 200) % 100) % 50) % 20) % 10) % 1) / 1));
    return 0;
}