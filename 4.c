#include <stdio.h>
int main()
{
    int tabcoll, tabrow, capacity, Batch, perbatch, oddcount = 0, evencount = 0;
    int i, j, s, o;
    char pos;

    printf("Table Rows : ");
    scanf("%d", &tabcoll);
    printf("Table Collumns : ");
    scanf("%d", &tabrow);
    printf("Enter the Students : ");
    scanf("%d", &s);
    printf("Enter the odd or even position : ");
    scanf("\n%c", &pos);

    char a[tabcoll][tabrow];

    capacity = tabcoll * tabrow;
    Batch = s / capacity;
    perbatch = s / Batch;

    for (o = 1; o <= perbatch; o++)
    {
        if (o % 2 != 0)
        {
            oddcount++;
        }
        else
        {
            evencount++;
        }
    }
    printf("\nHERE odd : %d", oddcount);
    printf("\nHERE even : %d\n", evencount);

    if (pos == '1')
    {
        for (i = 0; i < tabcoll; i++)
        {
            for (j = 0; j < tabrow; j++)
            {
                // int y = s / tablesize;
                if (j % 2 == 0)
                {
                    a[i][j] = 'O';
                }
                else
                {
                    a[i][j] = 'X';
                }
            }
        }
    }
    if (pos == '2')
    {
        for (i = 0; i < tabcoll; i++)
        {
            for (j = 0; j < tabrow; j++)
            {
                // int y = s / tablesize;
                if (j % 2 != 0)
                {
                    a[i][j] = 'O';
                }
                else
                {
                    a[i][j] = 'X';
                }
            }
        }
    }
    for (i = 0; i < tabcoll; i++)
    {
        for (j = 0; j < tabrow; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}