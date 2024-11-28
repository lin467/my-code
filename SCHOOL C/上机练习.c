/*
#include <stdio.h>

int main(void)
{
    char letter;

    printf("请输入一个字母:");
    scanf("%c",&letter);

    printf("该字母对应的ASCII码是:%d",letter);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    float r,h,cl,cs,cv;

    printf("请输入圆的半径:");
    scanf("%f",&r);

    printf("请输入圆柱的高:");
    scanf("%f",&h);

    cl = 2*3.14*r;
    cs = 3.14*r*r;
    cv = 3.14*r*r*h;

    printf("圆的周长:%.4f\n",cl);
    printf("圆的面积:%.4f\n",cs);
    printf("圆柱的体积:%.4f\n",cv);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num,hundred,ten,digit;

    printf("请输入一个三位数:");
    scanf("%d",&num);

    digit = num % 10;
    ten = num / 10 % 10;
    hundred = num / 100 % 10;

    printf("个位是:%d\n",digit);
    printf("十位是:%d\n",ten);
    printf("百位是:%d\n",hundred);

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

    printf("%d小时%d分钟\n",hour,min);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num1,num2;

    printf("请输入第一个整数:");
    scanf("%d",&num1);

    printf("请输入第二个整数:");
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

    printf("请输入一个华氏温度:");
    scanf("%f",&F);

    C = (5.0 / 9.0) * (F - 32.0);

    printf("对应的摄氏温度:%.3f\n",C);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c,s,C,S;


    printf("请输入三角形的一边边长:");
    scanf("%f",&a);

    printf("请输入三角形的一边边长:");
    scanf("%f",&b);

    printf("请输入三角形的一边边长:");
    scanf("%f",&c);

    s = (a + b + c) / 2;
    C = a + b + c;
    S = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("三角形的周长是:%.3f\n三角形的面积:%.3f\n",C,S);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num,qian,bai,shi,ge;

    printf("请输入一个四位整数:");
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

    printf("请输入一个四位整数:");
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

    printf("请输入x的值:");
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

    printf("请输入三个整数:");
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

    printf("从小到大输出:%d %d %d\n",a,b,c);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int mark,grade;

    printf("请输入成绩:");
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

    printf("请输入一个字母:");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    printf("其对应的大写是:%c\n",toupper(ch));
    if(ch >= 'A' && ch <= 'Z')
    printf("其对应的小写是:%c\n",tolower(ch));

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

    printf("兔子%d只，鸡%d只\n",rabbit,chicken);

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

    printf("兔子%d只，鸡%d只\n",rabbit,chicken);
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

    printf("请输入两个整数:");
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
    
    printf("最大公约数是%d\n最小公倍数是%d\n",n,gbs);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int count,i,j;

    printf("100-1000的素数有:");

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

    printf("\n共有%d个\n",count);

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

    printf("请输入成绩(输入-1结束):");

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

    printf("平均成绩是:%f\n",average);

    return 0;
}
*/

/*
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
*/