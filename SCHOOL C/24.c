#include <stdio.h>

int main(void)
{
    int num,val,renum;
    renum = 0;

    printf("������һ������:");
    scanf("%d",&num);

    val = num;

    while(num)
    {
        renum = renum * 10 + num % 10;
        num = num / 10;
    }

    if(val == renum)
    {
        printf("������ǻ�����\n");
    }
    else
    {
        printf("��������ǻ�����\n");
    }

    return 0;
}