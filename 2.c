#include <stdio.h>

void seatArrangement(int numStudents, int numTables)
{
    int batch = numStudents / numTables;
    int remainder = numStudents % numTables;

    printf("Number of batches: %d\n", batch);
    printf("Seating arrangement:\n");

    for (int i = 1; i <= batch; i++)
    {
        printf("Batch %d:\n", i);
        for (int j = 0; j < numTables; j++)
        {
            int seat = (i - 1) * numTables + j + 1;
            printf("Table %d: Seat %d\n", j + 1, seat);
        }
    }

    if (remainder > 0)
    {
        printf("Extra batch:\n");
        for (int i = numStudents - remainder + 1; i <= numStudents; i++)
        {
            printf("Seat %d\n", i);
        }
    }
}

int main()
{
    int totalStudents = 104;
    int totalTables = 5;

    seatArrangement(totalStudents, totalTables);

    return 0;
}