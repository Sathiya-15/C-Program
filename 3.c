#include <stdio.h>

int main()
{
    int i, j, x, a, capacity, seat;
    int table;
    printf("Enter the Table size : ");
    scanf("%d", &table);
    printf("Table Capacity : ");
    scanf("%d", &capacity);
    seat = table * capacity;
    int numberofstudents;
    printf("No of Studentd : ");
    scanf("%d", &numberofstudents);
    int batch = (numberofstudents / seat) * 2;
    int remaining = (numberofstudents % table);
    printf("no of remaining :%d\n", remaining);
    printf("no of batches :%d\n", batch);

    for (a = 1; a <= batch; a++)
    {
        printf("\nbatch no :%d\n", a);
        for (table = 1; table <= 5; table++)
        {
            printf("\ntable no:%d\n", table);
            for (i = 1; i <= capacity; i++)
            {
                if ((i % 2 == 0) && (i <= seat))
                {
                    printf("%d", 1);
                }
                else
                {
                    printf("%d", 0);
                }
            }
        }
    }

    if (remaining > 0)
    {

        printf("\nremaining batch:\n");

        int remainingtables = (capacity / remaining) + 1;
        // printf("%d", remainingtables);

        int y;
        for (i = 1; i <= remainingtables; i++, remaining = remaining - y)
        {
            printf("\n");
            for (j = 1; j <= capacity; j++)
                if (j % 2 == 0 && j <= remaining)
                {
                    printf("%d", 1);
                    y++;
                }
                else
                {
                    printf("%d", 0);
                }
        }
    }
    else
    {
        printf("invalid");
    }
}