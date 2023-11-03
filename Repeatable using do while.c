#include <stdio.h>
int main()
{
    int a, b = 0, c;
    do
    {
        printf("Enter the Value : ");
        scanf("%d", &a);
        b = b + a;
        printf("Do you want to continue");
        printf("1.Yes 2.No");
        scanf("%d", &c);
    } while (c == 1);
    printf("Finished");
    return 0;
}
