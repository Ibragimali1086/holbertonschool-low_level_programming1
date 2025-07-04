#include "main.h"

void print_alphabet_x10(void) 
{
    for (int i = 0; i < 10; i++) 
    {
        char h = 'a';
        while (h <= 'z') 
        {
            _putchar(h);
            h++;
        }
        _putchar('\n');
    }
}
