/*
#include <stdio.h>

int main(void)
{
    char letter;

    printf("������һ����ĸ:");
    scanf("%c",&letter);

    printf("����ĸ��Ӧ��ASCII����:%d",letter);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    float r,h,cl,cs,cv;

    printf("������Բ�İ뾶:");
    scanf("%f",&r);

    printf("������Բ���ĸ�:");
    scanf("%f",&h);

    cl = 2*3.14*r;
    cs = 3.14*r*r;
    cv = 3.14*r*r*h;

    printf("Բ���ܳ�:%.4f\n",cl);
    printf("Բ�����:%.4f\n",cs);
    printf("Բ�������:%.4f\n",cv);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num,hundred,ten,digit;

    printf("������һ����λ��:");
    scanf("%d",&num);

    digit = num % 10;
    ten = num / 10 % 10;
    hundred = num / 100 % 10;

    printf("��λ��:%d\n",digit);
    printf("ʮλ��:%d\n",ten);
    printf("��λ��:%d\n",hundred);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int hour,min;

    min = 560;
    hour = 560 / 60;
    min = min - (hour * 60);

    printf("%dСʱ%d����\n",hour,min);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num1,num2;

    printf("�������һ������:");
    scanf("%d",&num1);

    printf("������ڶ�������:");
    scanf("%d",&num2);

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 = %d\nnum2 = %d\n",num1,num2);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    float F,C;

    printf("������һ�������¶�:");
    scanf("%f",&F);

    C = (5.0 / 9.0) * (F - 32.0);

    printf("��Ӧ�������¶�:%.3f\n",C);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c,s,C,S;


    printf("�����������ε�һ�߱߳�:");
    scanf("%f",&a);

    printf("�����������ε�һ�߱߳�:");
    scanf("%f",&b);

    printf("�����������ε�һ�߱߳�:");
    scanf("%f",&c);

    s = (a + b + c) / 2;
    C = a + b + c;
    S = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("�����ε��ܳ���:%.3f\n�����ε����:%.3f\n",C,S);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num,qian,bai,shi,ge;

    printf("������һ����λ����:");
    scanf("%d",&num);

    ge = num % 10;
    shi = num / 10 % 10;
    bai = num / 100 % 10;
    qian = num / 1000 % 10;

    printf("%d\n",ge + shi + bai + qian);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int num,sum;
    sum = 0;

    printf("������һ����λ����:");
    scanf("%d",&num);
    
    for(int i = 1; i <= 1000; i = i * 10)
    {
        sum = sum + (num / i % 10);
    }

    printf("%d\n",sum);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    float x;

    printf("������x��ֵ:");
    scanf("%f",&x);
    
    if(x < 0)
    printf("y = %.2f\n",x);
    else if(x < 50)
    printf("y = %.2f\n",3 * x - 2);
    else if(x < 100)
    printf("y = %.2f\n",4 * x + 1);
    else 
    printf("y = %.2f\n",5 * x);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int a,b,c,temp;

    printf("��������������:");
    scanf("%d,%d,%d",&a,&b,&c);

    if(b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(c < a)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(c < b)
    {
        temp = c;
        c = b;
        b = temp;
    }

    printf("��С�������:%d %d %d\n",a,b,c);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int mark,grade;

    printf("������ɼ�:");
    scanf("%d",&mark);

    grade = mark / 10;

    switch (grade)
    {
        case 0:
        case 9:printf("A");
            break;
        case 8:printf("B");
            break;
        case 7:printf("C");
            break;
        case 6:printf("D");
            break;
        default:
            break;
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("������һ����ĸ:");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    printf("���Ӧ�Ĵ�д��:%c\n",toupper(ch));
    if(ch >= 'A' && ch <= 'Z')
    printf("���Ӧ��Сд��:%c\n",tolower(ch));

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int i;
    float sum;
    sum = 1.0;

    for(i = 2; i <= 10; i++)
    {
        if(i % 2 == 0)
        sum = sum - 1.0 / i;
        else
        sum = sum + 1.0 / i;

    }

    printf("sum = %f\n",sum);
}
*/

/*
#include <stdio.h>

int main(void)
{
    int i,a;
    float sum;
    sum = 1.0;
    a = -1;

    for(i = 2; i <=10 ;i++)
    {
        sum = sum + 1.0 / i * a;
        a = a * (-1);
    }
    printf("sum = %f\n",sum);
}
*/

/*
#include <stdio.h>

int main(void)
{
    int sum;
    sum = 0;

    for(int i = 1; i <= 99; i+=2)
    {
        sum = sum + i;
    }

    printf("%d\n",sum);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int k;
    float i,j,sum;
    sum = 0.0;

    for(i = 2.0, j = 1.0, k = 0; k < 15; k++)
    {
        sum = sum + i / j;
        i = i + j;
        j = i - j; 
    }

    printf("%f\n",sum);
    
    return 0
*/

/*
#include <stdio.h>

int main(void)
{
    int rabbit,chicken,feet;

    feet = 30 * 4;
    rabbit = (feet - 90) / (4-2);
    chicken = 30 - rabbit;

    printf("����%dֻ����%dֻ\n",rabbit,chicken);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int rabbit,chicken;

    for(rabbit = 0; rabbit <= 30; rabbit++)
    {
        if(rabbit * 4 + (30 - rabbit) * 2 == 90)
        {
            break;
        }
    }

    chicken = 30 - rabbit;

    printf("����%dֻ����%dֻ\n",rabbit,chicken);
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c,sum;

    for(int i = 100; i <= 999; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;

        sum = pow(a,3) + pow(b,3) + pow(c,3);

        if(sum == i)
        {
            printf("%.d\n",i);
        }
    }
    
    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int n,m,r,p,gbs;

    printf("��������������:");
    scanf("%d%d",&n,&m);

    p = m * n;
    r = m % n;

    while(r)
    {
        m = n;
        n = r;
        r = m % n;
    }

    gbs = p / n;
    
    printf("���Լ����%d\n��С��������%d\n",n,gbs);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int count,i,j;

    printf("100-1000��������:");

    for(i = 100; i <= 1000; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            printf("%d\t",i);
            count++;
        }
    }

    printf("\n����%d��\n",count);

    return 0;
}
*/

/*
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
*/

/*
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
*/