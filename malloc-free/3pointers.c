#include <stdio.h>
#include <stdlib.h>  // atoi üçün

void double_and_print(int *num)
{
    *num = (*num) * 2;
    printf("%d\n", *num);
}

void print_numbers(int n)
{
    if (n < 0)
        return;
    double_and_print(&n);
    print_numbers(n - 1);
}

int main(int argc, char *argv[])
{
    int n;

    if (argc != 2)
    {
        printf("Zehmet olmasa, 1 tam eded verin.\n");
        return 1;
    }

    n = atoi(argv[1]);  // string -> int çevrilir
    print_numbers(n);

    return 0;
}
