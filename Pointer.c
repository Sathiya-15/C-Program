#include <stdio.h>
void add(int *c, int a, int b)
{
    *c = a + b;
}
int main()
{
    int c;
    add(&c, 1, 2);
    printf("\n%d", c);
}