/*
#include <stdio.h>
#define min_per_h 60

int main(void)
{
    int time;
    int hour,min;

    printf("������ʱ��(����):");
    scanf("%d",&time);

    while(time>0)
    {
        hour=time/min_per_h;
        min=time%min_per_h;
        printf("һ����%dСʱ,%d����\n",hour,min);
        printf("���������ʱ��(����):");
        scanf("%d",&time);
    }

    printf("һ����0Сʱ,0����,����");
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int a,b;

    printf("������һ������:");
    scanf("%d",&a);

    b=a+10;

    while(a<=b)
    {
        printf("%d ",a);
        a++;
    }
    return 0;
}
*/


/*
#include <stdio.h>
#define day_per_week 7

int main(void)
{
    int days,week,day;

    printf("����������:");
    scanf("%d",&days);


    while(days>0)
    {
        week=days/day_per_week;
        day=days%day_per_week;
        printf("һ����%d��%d��\n",week,day);
        printf("����������:");
        scanf("%d",&days);
    }

    printf("done");
    return 0;
}
*/


/*
#include <stdio.h>
#define feet_per_cm 30.48
#define inch_per_cm 2.45

int main()
{
    float hight;
    printf("���������(����):");
    scanf("%f",&hight);
    while(hight>0)
    {
        int feet=hight/feet_per_cm;
        float inch=((hight-feet*feet_per_cm)/inch_per_cm);
        printf("%.1f cm= %d feet %.1f inches\n",hight,feet,inch);
        printf("���ٴ��������(����):");
        scanf("%f",&hight);
    }
    printf("done");
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int days;
    int money;

    days=0;
    money=0;

    printf("����������:");
    scanf("%d",&days);

    while(days>0)
    {
        money=money+days;
        days--;
    }

    printf("һ��׬��:%dԪ",money);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int days;
    int money;

    days=0;
    money=0;

    printf("����������:");
    scanf("%d",&days);

    while(days>0)
    {
        money=money+days*days;
        days--;
    }

    printf("һ��׬��:%dԪ",money);
    return 0;
}
*/


/*
#include <stdio.h>

double cubic(double num);

int main()
{
    double num;

    printf("������һ��С��:");
    scanf("%lf",&num);
    printf("����������ֵ��:%.3lf\n",num*num);
    cubic(num);
    return 0;
}

double cubic(double num)
{
    printf("����������ֵ��:%.3lf",num*num);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int fir,sec;

    printf("������һ��������Ϊ�ڶ����������:");
    scanf("%d",&sec);
    printf("������һ��������Ϊ��һ���������:");
    scanf("%d",&fir);
    while(fir>0)
    {
        printf("%d %% %d = %d\n",fir,sec,(fir%sec));
        printf("���ٴ�����һ��������Ϊ��һ���������:");
        scanf("%d",&fir);
    }
    printf("done");
    return 0;
}
*/


/*
#include <stdio.h>

double temperatures(double t);


int main(void)
{
    double t;

    printf("������һ�������¶�:");
    scanf("%lf",&t);

    temperatures(t);
    return 0;
}

double temperatures(double t)
{
    printf("�����¶�Ϊ:%.2f\n",t);
    double C=5.0/9.0*(t-32.0);
    printf("�����¶�Ϊ:%.2lf\n",C);
    double K=C+273.16;
    printf("�����¶�Ϊ:%.2lf\n",K);
    return 0;
}
*/