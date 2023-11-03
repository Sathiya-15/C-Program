#include <stdio.h>
int main()
{
    int num1, num2;
    char operator;
    printf("Enter the 1st Number : ");
    scanf("%d", &num1);
    printf("Enter the 2nd Number : ");
    scanf("%d", &num2);
    printf("Enter the Operator : ");
    scanf("\n%c", &operator);

    if (operator== '+')
    {
        printf("Sum : %d", num1 + num2);
    }
    else if (operator== '-')
    {
        printf("Diff : %d", num1 - num2);
    }
    else if (operator== '*')
    {
        printf("Multipication : %d", num1 * num2);
    }
    else if (operator== '/')
    {
        printf("Div : %d", num1 / num2);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}