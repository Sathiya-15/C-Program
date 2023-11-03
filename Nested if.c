#include <stdio.h>
int main()
{
    int i, j;
    printf("\nEnter the value of i : ");
    scanf("%d", &i);
    printf("\nEnter the value of j : ");
    scanf("%d", &j);
    {
        for (i = 0; i < 30; i++)
        {
            for (j = 0; j < 30; j++)
                printf("\nWelcome");
        }
        return 0;
    }
}