#include <stdio.h>
#include <string.h>

int count(char a[]);

int main(void)
{
    int z;
    char a[100000];

    printf("�������ַ���:");
    scanf("%s",a);

    z = count(a);
    printf("%d\n",z);
}

int count(char a[])
{
    int i,j,n,m,count;
    count = 0;
    n = strlen(a);
    char d[100000];

    printf("������Ҫͳ�Ƶ��ִ�:");
    scanf("%s",d);

    m = strlen(d);

    for(i = 0; i <= n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i + j] != d[j])
            {
                break;
            }
        }
        if(j == m)
        {
            count++;
        }
    }

    return count;

}