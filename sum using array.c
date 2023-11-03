#include <stdio.h>
int main()
{
    int a[8], i, sum = 0;
    printf("Enter the Value : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Ans : %d", sum);
    return 0;
}