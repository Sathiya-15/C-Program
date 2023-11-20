#include <stdio.h>
int main()
{
    int tabcoll, tabrow, capacity, Batch, perbatch, oddcount = 0, evencount = 0;
    int i, j, s, o, l = 0, m = 0;
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
    printf("\nHERE even : %d\n\n", evencount);

    if (pos == '1')
    {
        int n = 0;
        for (i = 0; i < tabcoll; i++)
        // printf("Table No %d : ", i + 1);
        // printf("\n");
        {
            for (j = 0; j < tabrow; j++, n++)
            {
                // int y = s / tablesize;
                if ((n % 2 == 0) && (l < oddcount))
                {
                    a[i][j] = '1';
                    // printf("\na[%d][%d]:O", i, j);
                    l++;
                }
                else
                {
                    a[i][j] = 'X';
                    // printf("\na[%d][%d]:X", i, j);
                }
            }
        }
    }
    if (pos == '2')
    {
        int n = 0;
        for (i = 0; i < tabcoll; i++)
        {
            for (j = 0; j < tabrow; j++, n++)
            {
                // int y = s / tablesize;
                if ((n % 2 != 0) && (m < evencount))
                {
                    a[i][j] = '1';
                    m++;
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