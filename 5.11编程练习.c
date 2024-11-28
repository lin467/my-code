/*
#include <stdio.h>
#define min_per_h 60

int main(void)
{
    int time;
    int hour,min;

    printf("请输入时间(分钟):");
    scanf("%d",&time);

    while(time>0)
    {
        hour=time/min_per_h;
        min=time%min_per_h;
        printf("一共是%d小时,%d分钟\n",hour,min);
        printf("请继续输入时间(分钟):");
        scanf("%d",&time);
    }

    printf("一共是0小时,0分钟,结束");
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int a,b;

    printf("请输入一个整数:");
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

    printf("请输入天数:");
    scanf("%d",&days);


    while(days>0)
    {
        week=days/day_per_week;
        day=days%day_per_week;
        printf("一共是%d周%d天\n",week,day);
        printf("再输入天数:");
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
    printf("请输入身高(厘米):");
    scanf("%f",&hight);
    while(hight>0)
    {
        int feet=hight/feet_per_cm;
        float inch=((hight-feet*feet_per_cm)/inch_per_cm);
        printf("%.1f cm= %d feet %.1f inches\n",hight,feet,inch);
        printf("请再次输入身高(厘米):");
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

    printf("请输入天数:");
    scanf("%d",&days);

    while(days>0)
    {
        money=money+days;
        days--;
    }

    printf("一共赚了:%d元",money);
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

    printf("请输入天数:");
    scanf("%d",&days);

    while(days>0)
    {
        money=money+days*days;
        days--;
    }

    printf("一共赚了:%d元",money);
    return 0;
}
*/


/*
#include <stdio.h>

double cubic(double num);

int main()
{
    double num;

    printf("请输入一个小数:");
    scanf("%lf",&num);
    printf("该数的立方值是:%.3lf\n",num*num);
    cubic(num);
    return 0;
}

double cubic(double num)
{
    printf("该数的立方值是:%.3lf",num*num);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int fir,sec;

    printf("请输入一个整数作为第二个运算对象:");
    scanf("%d",&sec);
    printf("请输入一个整数作为第一个运算对象:");
    scanf("%d",&fir);
    while(fir>0)
    {
        printf("%d %% %d = %d\n",fir,sec,(fir%sec));
        printf("请再次输入一个整数作为第一个运算对象:");
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

    printf("请输入一个华氏温度:");
    scanf("%lf",&t);

    temperatures(t);
    return 0;
}

double temperatures(double t)
{
    printf("华氏温度为:%.2f\n",t);
    double C=5.0/9.0*(t-32.0);
    printf("摄氏温度为:%.2lf\n",C);
    double K=C+273.16;
    printf("开氏温度为:%.2lf\n",K);
    return 0;
}
*/