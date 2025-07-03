#include <stdio.h>

int _strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i = i + 1;
    }
    return i; // burada return vacibdir
}

int main()
{
    char str[100]; // maksimum 99 simvol + '\0'
    printf("String daxil et: ");
    scanf("%s", str);

    int uzunluq = _strlen(str);
    printf("Uzunluq: %d\n", uzunluq);

    return 0;
}
