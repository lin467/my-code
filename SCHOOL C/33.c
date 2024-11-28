#include <stdio.h>

int count(int a);

int main(void)
{
    int n;
    int a[100000];
    int count[10];

    printf("请输入你需要数组的大小:");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= 10)
        {
            count[a[i] % 10]++;
            count[a[i] / 10 % 10]++;
        }
        else
        {
            count[a[i] % 10]++;
        }
    }

    for(int i = 0; i < 10; i ++)
    {
        printf("%d ",count[i]);
    }
    
    return 0;
}