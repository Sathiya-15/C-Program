#include <stdio.h>
int main()
{
    int a, b, s = 0;
    printf("Enter the Number : ");
    scanf("%d", &a);
    while (a > 0)
    {
        b = a % 10;
        s = (s * 10) + b;
        a = a / 10;
    }
    printf("Here the Reverse Value : %d", s);
    return 0;
}