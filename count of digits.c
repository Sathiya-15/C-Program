#include <stdio.h>
int main()
{
    int a, b, count = 0;
    printf("Enter the Number : ");
    scanf("%d", &a);
    while (a > 0)
    {
        b = a % 10;
        count++;
        a = a / 10;
    }
    printf("Count of the Number : %d", count);
    return 0;
}