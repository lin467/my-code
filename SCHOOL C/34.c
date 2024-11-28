#include <stdio.h>

int main(void)
{
    char a[100000];
    char ch;
    int count = 0;

    printf("请输入一串字符串,与想删除的字母:");
    scanf("%s %c",a,&ch);

    int n = sizeof(a) / sizeof(a[0]);
    for(int i = 0,j = 0; i < n; i++)
    {
        if(a[i] != ch)
        {
            a[j] = a[i];
            j++;
        }
        else
        count++;
    }

    int m = n - count;
    for(int i = 0; i < m; i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}