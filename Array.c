#include <stdio.h>
int main()
{
    int i;
    int a[3];
    printf("Enter the Value : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("\nAns : ");
    for (i = 0; i < 5; i++)
        printf("\n%d", a[i]);
    return 0;
}