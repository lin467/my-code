/*
#include <stdio.h>

int main(void)
{
    char ch[26];
    int i;
    //为数组的第一个数据赋值
    char c='a';

    //循环26次，并且每次都在原有A码上加一以输出不同字母
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
    //for循环中j代表一行有多少个字母，c代表字母，由于本题是由F-A，所以是c--
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

    printf("请输入一个大写字母:");
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
    printf("请输入一个整数作为开端:");
    scanf("%d",&start);
    printf("请输入一个整数作为末尾:");
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

    printf("请输入一个英文单词:");
    scanf("%s",word);
    printf("你输入的单词是:%s\n",word);
    printf("将单词完全翻转后:");
    //-1是因为数组最后还有一个终止符\0，所以真正要输出的是全部-终止符，如果不-1则终止符不起作用就会无限循环下去，程序出错
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

    printf("请输入两个浮点数:");

    while(scanf("%f%f",&a,&b)==2)
    {
        c=(a-b)/(a*b);
        printf("两数之差除以两数乘积的结果:%f",c);
        printf("请输入两个浮点数:");
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
    printf("请输入两个浮点数:");
    while(scanf("%f%f",&num1,&num2)==2)
    {
        printf("两数之差除以两数乘积的结果:%f\n",num(num1,num2));
        printf("请输入两个浮点数(输入非数字结束程序):");
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
    printf("请输入一个上限整数:");
    scanf("%d",&a);
    printf("请输入一个下线整数:");
    scanf("%d",&b);
    while(a>b)
    {
        int sum;
        sum=0;
        for(c=b;c<=a;c++)
        {
            sum=sum+c*c;
        }
        printf("平方和为:%d\n",sum);
        printf("请输入一个上限整数:");
        scanf("%d",&a);
        printf("请输入一个下线整数:");
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
    printf("请一一输入8个整数存入数组(数与数之间要加上空格):");
//输入8个数字，所以是<8（0 1 2 3 4 5 6 7）
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("将数组完全倒过来:");
//i=7是因为数组第一个是arr【0】，所以最后一个是arr【7】
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
    printf("请输入限制长度:");
    scanf("%d",&lenth);
    while(lenth>0)
    {
        sum=0.0;
        for(i=1;i<=lenth;i++)
        {
            sum=sum+1.0/i;
        }
        printf("1.0+1.0/2.0+1.0/3.0+......1.0/%d.0的和:%lf\n",lenth,sum);

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
        printf("1.0-1.0/2.0+1.0/3.0-......的和:%lf\n",sum);

        sum=0.0;
        for(i=1;i<=lenth;i++)
        {
            if(i%2!=0)
            {
                sum=sum+2*1.0/i;
            }
        }
            printf("上面两式之和为:%lf\n",sum);
            printf("请输入限制长度:");
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
//j++每次输出后都向后移一位，直到不满足j<8
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
    printf("请输入8个数字存入数组1:");
    for(i=0;i<8;i++)
    {
        scanf("%lf",&arr1[i]);
    }
    for(i=0;i<8;i++)
    {
        //sum就是arr2中的数
        double sum;
        sum=0;
        //j<=i使得为arr2中数赋值时是从arr1[0]加到arr[i]
        for(j=0;j<=i;j++)
        {
            sum=sum+arr1[j];
        }
        arr2[i]=sum;
    }
    //遍历数组
    printf("第一个数组: ");

    for(int i = 0; i < 8;i++)
    {
        printf("%lf. ",arr1[i]);
    }

    printf("\n第二个数组: ");

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

    printf("请输入数字存入数组:");

    do
    {
        scanf("%c",&arr[i]);
    }
    //\n表示回车
    while(arr[i]!='\n'&&++i);
    printf("你输入的数组的倒序是:");
    //初始时i为终止符，所以一开始就要i--
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
    printf("当Deirdre存款大于Daphne要用%d年\n",n);
    printf("Deirdre存款:%f\n",mon1);
    printf("Daphne存款:%f",mon2);
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

    printf("一共可以用%d年",n);
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
        printf("第%d周朋友量:%d\n",n,sum);
        sum=(sum-n)*2;
    }
    return 0;
}
*/