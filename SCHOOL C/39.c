#include <stdio.h>

int translate(int num);

int main(void)
{
    int num;

    printf("������һ��ʮ������:");
    scanf("%d",&num);

    translate(num);

    return 0;
}

int translate(int num)
{
    int i,n;
    int a[10000];
    i = 0;

    printf("����Ҫȡ���ٽ��Ƶ���:");
    scanf("%d",&n);

    while(num)
    {
        a[i] = num % n;
        num = num / n;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d",a[j]);
    }

    return 0;
}