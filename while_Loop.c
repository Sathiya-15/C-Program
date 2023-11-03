#include <stdio.h>
int main()
{
    int a, x, sum;
    printf("Enter the Value : ");
    scanf("%d", &a);
    while (a > 0)
    {
        x = a % 10;
        sum = sum + x;
        a = a / 10;
    }
    printf("Sum of Given Number : %d", sum);
    return 0;
}