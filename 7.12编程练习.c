/*
#include <stdio.h>

int main(void)
{
    char s;
    int blank,end,others;

    printf("请输入一句英文句子(读到#停止):");
    while((s=getchar())!='#')
    {
        if(s==' ')
        {
            blank++;
        }
        else if(s=='\n')
        {
            end++;
        }
        else
        {
            others++;
        }
    }
    printf("空格一共%d个\n换行符一共%d个\n其他字符一共%d个\n",blank,end,others);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    char ch;
    int count;

    count=0;

    printf("请输入一句英文(输入#结束):");
    while((ch=getchar())!='#')
    {
        if(count++%8==0)
        {
            printf("\n");
        }
        if(ch=='\n')
        {
            //以十进制输出\n
            printf("'\\n'-%03d.",ch);
        }
        else if(ch=='\t')
        {
            //以十进制输出\t
            printf("'\\t'-%03d.",ch);
        }
        else
        {
            //以十进制输出其他字符
            printf("'%c'-%03d.",ch,ch);
        }
    }
    printf("end\n");
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int i,oushu,jishu,sumoushu,sumjishu;

    sumoushu=0;
    sumjishu=0;
    oushu=0;
    jishu=0;

    printf("请输入一个及以上的整数(输入0就停止):");
    //用于输入数据就用scanf，用于输出字符就用putchar
    while(scanf("%d",&i))
    {
        if(i==0)
        {
            break;
        }
        if(i%2==0)
        {
            sumoushu=sumoushu+i;
            oushu++;
        }
        else
        {
            sumjishu=sumjishu+i;
            jishu++;
        }
    }
        printf("偶数有%d个\n奇数有%d个\n偶数的平均数是:%d\n,奇数的平均数是:%d\n",oushu,jishu,sumoushu/oushu,sumjishu/jishu);
        return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    char ch;
    int count;

    count=0;

    printf("请输入一句英文(读到#停止):");
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            printf("!");
            count++;
        }
        else if(ch=='!')
        {
            printf("!!");
            count++;
        }
        else
        {
            printf("%c",ch);
        }
    }
    printf("\n一共替换了%d次",count);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    char ch;
    int count;

    count=0;

    printf("请输入一句英文句子(读到#结束):");
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
            case'!':
            printf("!!");
            count++;
            break;
            case'.':
            printf("!");
            count++;
            break;
            default:
            printf("%c",ch);
        }
    }
    printf("\n一共更改了%d次",count);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    char ch;
    int count,half;

    count=0;
    half=0;

    printf("请输入一句英文(读到#结束):");
    while((ch=getchar())!='#')
    {
        switch(ch)
       {
        case'e':
            half=1;
            break;
        case'i':
            if(half==1)
            {
                count++;
                half=0;
            }
                break;
        default:
            half=0;
        }
    }
    printf("ei出现了%d次",count);
    return 0;
}
*/


/*
#include <stdio.h>
#define base 10
#define add 1.5
#define tax1 0.15
#define tax2 0.2
#define tax3 0.25

int main(void)
{
    float h,t,pay,mon;

    printf("请输入一周工作小时数:");
    scanf("%f",&h);
    if(h<=30&&h>=0)
    {
        pay=h*base;
        t=pay*base;
        mon=pay-t;
    }
    else if(h<=40)
    {
        pay=h*base;
        t=300*tax1+(pay-300)*tax2;
        mon=pay-t;
    }
    else
    {
        pay=(40+(h-40)*add)*base;
        if(pay<=450)
        {
            t=300*tax1+(pay-300)*tax2;
        }
        else
        {
            t=300*tax1+(pay-300)*tax2+(pay-450)*tax3;
        }
        mon=pay-t;
    }
    printf("总工资是%f元\n税是%f元\n净收入是%f元\n",pay,t,mon);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int a,i,j;
    do
    {
        printf("请输入一个数字:");
        scanf("%d",&a);
        if(a<2)
        {
            if(a==0)
            {
                break;
            }
            printf("超出范围");
            continue;
        }
        printf("你输入了%d,从2到该数的范围内的素数是:",a);
        for(i=a;i>1;i--)
        {
            int primer=1;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    primer=0;
                }
                    break;
            }
            if(primer==1)
                {
                    printf("%d ",i);
                }
        }
        printf("\n");
    } 
    while (a!=0);
    return 0;
}
*/


/*
#include <stdio.h>
#define tax1 0.15
#define tax2 0.28

int main(void)
{
    double pay,mon,t;
    char type;

    do
    {
        printf("1)单身、2)户主、3)已婚共有、4)已婚离异、5)退出\n");
        printf("请输入个人状态:");
        scanf("%c",&type);
        switch(type)
        {
            case '1':
            printf("请输入工资:");
            scanf("%lf",&pay);
            if(pay<=17850)
            {
                t=pay*tax1;
                mon=pay-t;
            }
            else
            {
                t=17850*tax1+(pay-17850)*tax2;
                mon=pay-t;
            }
            printf("税收:%lf\n净收入:%lf\n",t,mon);
            break;
            case '2':
            printf("请输入工资:");
            scanf("%lf",&pay);
            if(pay<=23900)
            {
                t=pay*tax1;
                mon=pay-t;
            }
            else
            {
                t=23900*tax1+(pay-23900)*tax2;
                mon=pay-t;
            }
            printf("税收:%lf\n净收入:%lf\n",t,mon);
            break;
            case '3':
            printf("请输入工资:");
            scanf("%lf",&pay);
            if(pay<=29750)
            {
                t=pay*tax1;
                mon=pay-t;
            }
            else
            {
                t=29750*tax1+(pay-29750)*tax2;
                mon=pay-t;
            }
            printf("税收:%lf\n净收入:%lf\n",t,mon);
            break;
            case '4':
            printf("请输入工资:");
            scanf("%lf",&pay);
            if(pay<=14875)
            {
                t=pay*tax1;
                mon=pay-t;
            }
            else
            {
                t=14875*tax1+(pay-14875)*tax2;
                mon=pay-t;
            }
            printf("税收:%lf\n净收入:%lf\n",t,mon);
            break;
            case '5':
            break;
            default:
            printf("请输入正确的数字\n");
        }
    } 
    while(type!='5');
    return 0;
}
*/


#include <stdio.h>

int main(void)
