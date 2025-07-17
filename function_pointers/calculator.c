#include <stdio.h>

int plus(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int times(int a, int b)
{
    return a * b;
}

int divided(int a, int b)
{
    return a / b;
}

int main()
{
    int (*function)(int, int);
    int n;
    printf("How many operations do you want to perform: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nChoose one of the following: +, -, *, / : ");
        int a, b;
        char s;
        scanf(" %c", &s);

        if (s == '+')
        {
            printf("Enter 2 numbers to add: ");
            scanf("%d %d", &a, &b);
            function = plus;
            printf("The sum of the numbers is: %d\n", function(a, b));
        }
        else if (s == '-')
        {
            printf("Enter 2 numbers to subtract: ");
            scanf("%d %d", &a, &b);
            function = minus;
            printf("The difference of the numbers is: %d\n", function(a, b));
        }
        else if (s == '*')
        {
            printf("Enter 2 numbers to multiply: ");
            scanf("%d %d", &a, &b);
            function = times;
            printf("The product of the numbers is: %d\n", function(a, b));
        }
        else if (s == '/')
        {
            printf("Enter 2 numbers to divide: ");
            scanf("%d %d", &a, &b);
            function = divided;
            printf("The result of the division is: %d\n", function(a, b));
        }
        else
        {
            printf("Invalid operation symbol entered.\n");
        }
    }

    return 0;
}
