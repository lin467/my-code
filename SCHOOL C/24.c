#include <stdio.h>

int main(void)
{
    int num,val,renum;
    renum = 0;

    printf("请输入一个整数:");
    scanf("%d",&num);

    val = num;

    while(num)
    {
        renum = renum * 10 + num % 10;
        num = num / 10;
    }

    if(val == renum)
    {
        printf("这个数是回文数\n");
    }
    else
    {
        printf("这个数不是回文数\n");
    }

    return 0;
}