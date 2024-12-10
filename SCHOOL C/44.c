#include <stdio.h>
#include <string.h>

char link(char a[],char b[]);

int main()
{
    char a[100];
    char b[100];

    gets(a);
    gets(b);

    link(a,b);

    return 0;
}

char link(char a[],char b[])
{
    return puts(strcat(a,b));
}