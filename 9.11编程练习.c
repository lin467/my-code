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
    printf("����Ҫ��ӡ���ַ�:\n");
    scanf("%c",&ch);
    printf("������i��ֵ��ʾ��,j��ʾ��\n");
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
    printf("����������С��:");
    scanf("%lf %lf",&a,&b);
    printf("����ƽ������:%lf",average(a,b));
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
    printf("������������ͬ��С��x,y:");
    scanf("%lf %lf",&x,&y);
    //Ӧ�ú���ʱ��&����*
    larger_of(&x,&y);
    printf("����x=%.3lf\ny=%.3lf\n",x,y);
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
    printf("����������С��a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    turn(&a,&b,&c);
    printf("���Ӵ�С���:%.3lf %.3lf %.3lf\n",a,b,c);
    return 0;
}

//������ݱȽϴ�С�����������ȽϺ���������ͽ���
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
    printf("�������ı�(��EOF����):");
    while((ch=getchar())!=EOF)
    {
        if((ch=getchar())=='\n')
        {
            continue;
        }
        //��number��������ֵ����-1��������������ĸ������������
        if(number(ch)!=-1)
        {
            printf("���������ĸ%c����ĸ������%dλ\n",ch,number(ch));
        }
        else
        {
            printf("%c�ⲻ����ĸ��\n",ch);
        }
    }   
}

int number(char ch)
{
    if(ch>='a'&&ch<='z')
    {
    a����ĸ���ǵ�һ������ʾ1��������ʽ��ch���ַ���Ϊ���֣������ĸ�ڱ���λ��
        return ch-'a'+1;
    }
    if(ch>='A'&&ch<='Z')
    {
        return ch-'A'+1;
    }
    //�����ַ�������ĸ
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

    printf("������һ��С��,");
    printf("һ��������ΪС������(����q�˳�):");
    while(scanf("%lf %d",&number,&mi)==2)
    {
        //Ӧ�ú���ʱҪ�Ѻ�������whileѭ����жϳ�������������
        xnumber=outcome(number,mi);
        printf("������:%lf\n",xnumber);
        printf("������һ��С��,");
        printf("һ��������ΪС������(����q�˳�):");
    }
    printf("�ټ�\n");
    return 0;
}

double outcome(double number,int mi)
{
    int i;
    double a;

    a=1.0;
    
    if(number==0&&mi==0)
    {
        printf("0��0�����޶���\n");
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

    printf("������һ��С��,");
    printf("һ��������ΪС������(����q�˳�):");
    while(scanf("%lf %d",&number,&mi)==2)
    {
        //Ӧ�ú���ʱҪ�Ѻ�������whileѭ����жϳ�������������
        xnumber=outcome(number,mi);
        printf("������:%lf\n",xnumber);
        printf("������һ��С��,");
        printf("һ��������ΪС������(����q�˳�):");
    }
    printf("�ټ�\n");
    return 0;
}

double outcome(double number,int mi)
{
    int i;
    
    if(number==0&&mi==0)
    {
        printf("0��0�����޶���\n");
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
            //�ݹ�ʱ��mi�𲽱�С��i>mi���˳�ѭ��
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
    printf("��������Ҫ���ٸ�쳲�������(����q�˳�):");
    while(scanf("%d",&number)==1)
    {
        if(number>=2)
        {
            Fibonacci(number);
            printf("��������Ҫ���ٸ�쳲�������(����q�˳�):");
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
        //��������������ͻᵼ�������һ������2������ʵ����
        printf("%d ",a);
        t=a+b;
        a=b;
        b=t;
        //��Ҫ�����t���ᵼ�µ�һ���������ѭ��number�κ����
    }
    printf("\n");
    return 0;
}
*/