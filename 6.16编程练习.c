/*
#include <stdio.h>

int main(void)
{
    char ch[26];
    int i;
    //Ϊ����ĵ�һ�����ݸ�ֵ
    char c='a';

    //ѭ��26�Σ�����ÿ�ζ���ԭ��A���ϼ�һ�������ͬ��ĸ
    for(i=0;i<26;i++,c++)
    {
        ch[i]=c;
        printf("%c",ch[i]);
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
   int i,j;

   for(i=1;i<=5;i++)
   {
    for(j=0;j<i;j++)
    {
        printf("$");
    }
    printf("\n");
   }

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int i,j;
    char c;

    for(i=1;i<=6;i++)
    {
    //forѭ����j����һ���ж��ٸ���ĸ��c������ĸ�����ڱ�������F-A��������c--
        for(j=0,c='F';j<i;j++,c--)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}
*/


/*
#include <stdio.h>

int main(void)
{
    int i,j;
    char c='A';
    for(i=1;i<=6;i++)
    {
        for(j=0;j<i;j++,c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int i,a,b;
    char num;

    printf("������һ����д��ĸ:");
    scanf("%c",&num);

    char ch='A';
    b=num-'A'+1;

    for(i=1;i<=b;i++)
    {
        for(a=0;a<b-1;a++)
        printf(" ");
        for(ch='A';a<b;a++)
        printf("%c",ch++);
        for(a=1,ch-=2;a<i;a++,ch--)
        printf("%c",ch);
        printf("\n");
    }
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int start,end;
    int num,square,cube;
    printf("������һ��������Ϊ����:");
    scanf("%d",&start);
    printf("������һ��������Ϊĩβ:");
    scanf("%d",&end);
    printf("number\tsq\tcu\n");
    for(num=start;num<end;num++)
    {
        square=num*num;
        cube=num*num*num;
        printf("%d\t%d\t%d\n",num,square,cube);
    }
    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char word[40];

    printf("������һ��Ӣ�ĵ���:");
    scanf("%s",word);
    printf("������ĵ�����:%s\n",word);
    printf("��������ȫ��ת��:");
    //-1����Ϊ���������һ����ֹ��\0����������Ҫ�������ȫ��-��ֹ���������-1����ֹ���������þͻ�����ѭ����ȥ���������
    for(i=strlen(word)-1;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    return 0;   
}
*/


/*
#include <stdio.h>

int main(void)
{
    float a,b,c;

    printf("����������������:");

    while(scanf("%f%f",&a,&b)==2)
    {
        c=(a-b)/(a*b);
        printf("����֮����������˻��Ľ��:%f",c);
        printf("����������������:");
    }
    printf("end");
    return 0;
}
*/


/*
#include <stdio.h>

float num(float a,float b);

int main(void)
{
    float num1,num2;
    printf("����������������:");
    while(scanf("%f%f",&num1,&num2)==2)
    {
        printf("����֮����������˻��Ľ��:%f\n",num(num1,num2));
        printf("����������������(��������ֽ�������):");
    }
    printf("end");
    return 0;
}

float num(float a,float b)
{
    float c;
    
    c=(a-b)/(a*b);
    return c;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("������һ����������:");
    scanf("%d",&a);
    printf("������һ����������:");
    scanf("%d",&b);
    while(a>b)
    {
        int sum;
        sum=0;
        for(c=b;c<=a;c++)
        {
            sum=sum+c*c;
        }
        printf("ƽ����Ϊ:%d\n",sum);
        printf("������һ����������:");
        scanf("%d",&a);
        printf("������һ����������:");
        scanf("%d",&b);
    }
    printf("end");
    return 0;
}   
*/


/*
#include <stdio.h>

int main(void)
{
    int i;
    int arr[8];
    printf("��һһ����8��������������(������֮��Ҫ���Ͽո�):");
//����8�����֣�������<8��0 1 2 3 4 5 6 7��
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("��������ȫ������:");
//i=7����Ϊ�����һ����arr��0�����������һ����arr��7��
    for(i=7;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

    printf("\nend");
    return 0;
}
*/


/*
#include <stdio.h>
int main(void)
{
    int lenth,i;
    double sum=0.0;
    printf("���������Ƴ���:");
    scanf("%d",&lenth);
    while(lenth>0)
    {
        sum=0.0;
        for(i=1;i<=lenth;i++)
        {
            sum=sum+1.0/i;
        }
        printf("1.0+1.0/2.0+1.0/3.0+......1.0/%d.0�ĺ�:%lf\n",lenth,sum);

        sum=0.0;
        for(i=1;i<=lenth;i++)
        {
            if(i%2==0)
            {
                sum=sum-1.0/i;
            }
            else
            {
                sum=sum+1.0/i;
            }
        }
        printf("1.0-1.0/2.0+1.0/3.0-......�ĺ�:%lf\n",sum);

        sum=0.0;
        for(i=1;i<=lenth;i++)
        {
            if(i%2!=0)
            {
                sum=sum+2*1.0/i;
            }
        }
            printf("������ʽ֮��Ϊ:%lf\n",sum);
            printf("���������Ƴ���:");
            scanf("%d",&lenth);
    }
    return 0;
}
*/


   
/*
#include <stdio.h>

int main(void)
{
    int i,j;
    int arr[9];
    arr[0]=2;

    for(i=1;i<8;i++)
    {
        arr[i]=arr[i-1]*2;
    }

    j=0;

    do
    {
//j++ÿ������������һλ��ֱ��������j<8
    printf("%d ",arr[j++]);
    }

    while(j<8);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int i,j;
    double arr1[9];
    double arr2[9];
    printf("������8�����ִ�������1:");
    for(i=0;i<8;i++)
    {
        scanf("%lf",&arr1[i]);
    }
    for(i=0;i<8;i++)
    {
        //sum����arr2�е���
        double sum;
        sum=0;
        //j<=iʹ��Ϊarr2������ֵʱ�Ǵ�arr1[0]�ӵ�arr[i]
        for(j=0;j<=i;j++)
        {
            sum=sum+arr1[j];
        }
        arr2[i]=sum;
    }
    //��������
    printf("��һ������: ");

    for(int i = 0; i < 8;i++)
    {
        printf("%lf. ",arr1[i]);
    }

    printf("\n�ڶ�������: ");

    for(int i = 0; i < 8;i++)
    {
        printf("%lf. ",arr2[i]);
    }

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    char arr[256];
    int i=0;

    printf("���������ִ�������:");

    do
    {
        scanf("%c",&arr[i]);
    }
    //\n��ʾ�س�
    while(arr[i]!='\n'&&++i);
    printf("�����������ĵ�����:");
    //��ʼʱiΪ��ֹ��������һ��ʼ��Ҫi--
    for(i--;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int n;
    float mon1,mon2;
    mon1=100;
    mon2=100;
    for(n=0;mon2<=mon1;n++)
    {
        mon1=100*0.1+mon1;
        mon2=mon2+mon2*0.05;
    }
    printf("��Deirdre������DaphneҪ��%d��\n",n);
    printf("Deirdre���:%f\n",mon1);
    printf("Daphne���:%f",mon2);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    float mon,out;
    int n;

    mon=100;
    out=10;

    while(mon>=0)
    {
        if(mon>=10)
        {
            for(n=0;mon>=0;n++)
            {   
                mon=mon*0.08+mon-out;
            }
        }
        else
        {
            n=n+1;
        }
    }

    printf("һ��������%d��",n);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int sum,n;
    sum=5;

    for(n=1;sum<=150;n++)
    {
        printf("��%d��������:%d\n",n,sum);
        sum=(sum-n)*2;
    }
    return 0;
}
*/