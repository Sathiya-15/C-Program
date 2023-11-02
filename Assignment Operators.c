#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the First : ");
    scanf("%d", &a);
    printf("Enter the Second : ");
    scanf("%d", &b);
    c = a + b;
    printf("Total:%d", c);
    c = a - b;
    printf("Diffrence : %d", c);
    return 0;
}