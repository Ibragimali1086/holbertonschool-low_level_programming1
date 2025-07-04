#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i += 2)
    {
        putchar(i + '0');
        if (i < 9)  
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
