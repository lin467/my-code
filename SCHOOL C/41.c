#include <stdio.h>
#include <math.h>

float average(int a[]);
int delete(int a[],int n);

int main(void)
{
    int a[16];
    int n = 16;
    a[0] = 55;

    for(int i = 1; i < 16; i++)
    {
        a[i] = (15 * a[i - 1] + 97) % 256;
    }

    for(int i = 0; i < 16; i++)
    {
        printf("%d ",a[i]);
    }

    float ave = average(a);
    printf("\nÆ½¾ùÊý:%.1f\n",ave);

    delete(a,n);

    return 0;

}

float average(int a[])
{
    float ave;
    int sum = 0;
    for(int i = 0; i < 16; i++)
    {
        sum = sum + a[i];
    }

    ave = 1.0 * sum / 16;
    return ave;
}

int delete(int a[],int n)
{
    int cha;
    int b[1];
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        cha = abs(average(a) - a[i]);
        if(cha > max)
        {
            max = cha;
            b[0] = a[i];
        }
    }

    for(int i = 0,j = 0; i < 16; i++)
    {
        if(a[i] != b[0])
        {
            a[j] = a[i];
            j++;
        }
    }

    for(int i = 0; i < 15; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}