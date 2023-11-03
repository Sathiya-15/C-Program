#include <stdio.h>
void main()
{
    int n, n1, op = 0;
    printf("Enter the Value : ");
    scanf("%d", &n);
    n = n1;
    while (n > 0)
    {
        op = op * 10;
        op = op + (n1 % 10);
        n1 /= 10;
    }
    printf("\nResult : %d", op);
    getchar();
}