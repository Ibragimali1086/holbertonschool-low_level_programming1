#include<stdio.h>

void _print_rev_recursion(char *s)
{
	int len=0;
	while(s[len]!='\0')
	{
		len=len+1;
	}
	for(int i=(len-1);i=0:i--)
	{
		printf("%s",s[i]);#include <stdio.h>

void _print_rev_recursion(char *s)
{
    if (*s == '\0')  // string-in sonu
        return;
    _print_rev_recursion(s + 1);  // növbəti simvola keç
    printf("%c", *s);             // sonra indi simvolu çap et
}

int main(void)
{
    char str[] = "hello";
    _print_rev_recursion(str);
    printf("\n");
    return 0;
}

	}
}
