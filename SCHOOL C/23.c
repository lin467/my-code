#include <stdio.h>

int main(void)
{
    int mark,count,sum;
    float average;

    sum = 0;
    count = 0;

    printf("������ɼ�(����-1����):");

    while(1)
    {
        scanf("%d",&mark);

        if(mark != -1)
        {
            sum = sum + mark;
            count++;
        }
        if(mark == -1)
        {
            break;
        }
    }

    average = (sum * 1.0) / (count * 1.0);

    printf("ƽ���ɼ���:%f\n",average);

    return 0;
}