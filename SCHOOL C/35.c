#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char a[100000];

    printf("������һ�е���:");
    scanf("%[^\n]",a);
    
    int m = strlen(a);

    a[0] = toupper(a[0]);
    for(int i = 0; i < m; i++)
    {
        if(a[i] == ' ')
        {
            a[i + 1] = toupper(a[i + 1]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}