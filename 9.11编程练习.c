/*
#include <stdio.h>

double min(double x,double y);

int main(void)
{
    double x,y;
    printf("plz enter the value of x,y:");
    scanf("%lf %lf",&x,&y);
    min(x,y);
    return 0;
}

double min(double x,double y)
{
    double min;
    min=x;
    if(y<min)
    min=y;
    printf("the min number is:%lf\n",min);
    return min;
}
*/


/*
#include <stdio.h>
void chline(char ch,int i,int j);

int main(void)
{
    char ch;
    int i,j;
    printf("输入要打印的字符:\n");
    scanf("%c",&ch);
    printf("请输入i的值表示行,j表示列\n");
    scanf("%d %d",&i,&j);
    chline(ch,i,j);
    return 0;
}

void chline(char ch,int i,int j)
{
    int f,g;
    for(f=0;f<i;f++)
    {
        for(g=0;g<j;g++)
        {
            printf("%c",ch);
        }  
        printf("\n");
    }     
}
*/


/*
#include <stdio.h>

double average(double a,double b);

int main(void)
{
    double a,b;
    printf("请输入两个小数:");
    scanf("%lf %lf",&a,&b);
    printf("调和平均数是:%lf",average(a,b));
    return 0;
}

double average(double a,double b)
{
    double c,d;
    c=1/a;
    d=1/b;
    return 1/((c+d)/2);
}
*/

/*
#include <stdio.h>

void larger_of(double *x,double *y);

int main(void)
{
    double x,y;
    printf("请输入两个不同的小数x,y:");
    scanf("%lf %lf",&x,&y);
    //应用函数时用&代替*
    larger_of(&x,&y);
    printf("现在x=%.3lf\ny=%.3lf\n",x,y);
    return 0;
}

void larger_of(double *x,double *y)
{
    if(*y>*x)
    {
        *x=*y;
    }
    else
    {
        *y=*x;
    }
}
*/


/*
#include <stdio.h>

double turn(double *a,double *b,double *c);

int main(void)
{
    double a,b,c;
    printf("请输入三个小数a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    turn(&a,&b,&c);
    printf("按从大到小输出:%.3lf %.3lf %.3lf\n",a,b,c);
    return 0;
}

//多个数据比较大小，就先两两比较后符合条件就交换
double turn(double *a,double *b,double *c)
{
    int t;
    if(*a<*b)
    {
        t=*a;
        *a=*b;
        *b=t;
    }
    if(*a<*c)
    {
        t=*a;
        *a=*b;
        *b=t;
    }
    if(*b<*c)
    {
        t=*b;
        *b=*c;
        *c=t;
    }
    return 0;
}
*/


/*
#include <stdio.h>

void get_char(void);
int number(char ch);

int main(void)
{
    get_char();
    return 0;
}

void get_char(void)
{
    char ch;
    printf("请输入文本(以EOF结束):");
    while((ch=getchar())!=EOF)
    {
        if((ch=getchar())=='\n')
        {
            continue;
        }
        //当number函数返回值不是-1，即读到的是字母就输出如下语句
        if(number(ch)!=-1)
        {
            printf("你输入的字母%c在字母表中在%d位\n",ch,number(ch));
        }
        else
        {
            printf("%c这不是字母。\n",ch);
        }
    }   
}

int number(char ch)
{
    if(ch>='a'&&ch<='z')
    {
    a在字母表是第一个，表示1，以下算式把ch从字符改为数字，输出字母在表中位置
        return ch-'a'+1;
    }
    if(ch>='A'&&ch<='Z')
    {
        return ch-'A'+1;
    }
    //读到字符不是字母
    return -1;
}
*/


/*
#include <stdio.h>

double outcome(double number,int mi);

int main(void)
{
    double number,xnumber;
    int mi;

    printf("请输入一个小数,");
    printf("一个整数作为小数的幂(输入q退出):");
    while(scanf("%lf %d",&number,&mi)==2)
    {
        //应用函数时要把函数放在while循环里，判断出错，计算结果错误
        xnumber=outcome(number,mi);
        printf("计算结果:%lf\n",xnumber);
        printf("请输入一个小数,");
        printf("一个整数作为小数的幂(输入q退出):");
    }
    printf("再见\n");
    return 0;
}

double outcome(double number,int mi)
{
    int i;
    double a;

    a=1.0;
    
    if(number==0&&mi==0)
    {
        printf("0的0次幂无定义\n");
        return 1;
    }
    if(number==0)
    {
        return 0;
    }
    if(mi==0)
    {
        return 1;
    }
    if(mi>0)
    {
        for(i=1;i<=mi;i++)
        {
            a=a*number;
        }
        return a;
    }
    else
    {
        for(i=1;i<=-mi;i++)
        {
            a=a*number;
        }
        return 1/a;
    }
}
*/


/*
#include <stdio.h>

double outcome(double number,int mi);

int main(void)
{
    double number,xnumber;
    int mi;

    printf("请输入一个小数,");
    printf("一个整数作为小数的幂(输入q退出):");
    while(scanf("%lf %d",&number,&mi)==2)
    {
        //应用函数时要把函数放在while循环里，判断出错，计算结果错误
        xnumber=outcome(number,mi);
        printf("计算结果:%lf\n",xnumber);
        printf("请输入一个小数,");
        printf("一个整数作为小数的幂(输入q退出):");
    }
    printf("再见\n");
    return 0;
}

double outcome(double number,int mi)
{
    int i;
    
    if(number==0&&mi==0)
    {
        printf("0的0次幂无定义\n");
        return 1;
    }
    if(number==0)
    {
        return 0;
    }
    if(mi==0)
    {
        return 1;
    }
    if(mi>0)
    {
        for(i=1;i<=mi;i++)
        {
            //递归时让mi逐步变小至i>mi，退出循环
            return number*outcome(number,mi-1);
        }
    }
    else
    {
        for(i=1;i<=-mi;i++)
        {
            return number*outcome(number,mi+1);   
        }
    }
    return 0;
}
*/


/*
#include <stdio.h>

int Fibonacci(int number);

int main(void)
{
    int number;
    printf("请输入需要多少个斐波那契数(输入q退出):");
    while(scanf("%d",&number)==1)
    {
        if(number>=2)
        {
            Fibonacci(number);
            printf("请输入需要多少个斐波那契数(输入q退出):");
        }
    }
    return 0;
}

int Fibonacci(int number)
{
    int a,b,t,i;

    a=1;
    b=1;

    for(i=0;i<number;i++)
    {
        //若不输入这个，就会导致输出第一个数是2，与事实不符
        printf("%d ",a);
        t=a+b;
        a=b;
        b=t;
        //不要再输出t，会导致第一个数就输出循环number次后的数
    }
    printf("\n");
    return 0;
}
*/