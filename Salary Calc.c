#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter the Salary Amount : ");
    scanf("%d", &a);
    printf("Enter the Loan Amount : ");
    scanf("%d", &b);
    if (b < a * 12)
    {
        printf("\nYour Eligible for the Loan");
        printf("\nEnter the Month of Loan : ");
        scanf("%d", &c);
        d = a / c;
        if (a < 5000)
        {
            e = (a * 2 / 100) + a - d;
            printf("Your Salary : ");
            scanf("%d", &e);
        }
        else
        {
            (f = b / c);
            printf("Your Salary : %d", f);
        }
    }
    else
    {
        printf("Your Not Eligible For The Loan : ");
    }
    return 0;
}