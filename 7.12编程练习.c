/*
#include <stdio.h>

int main(void)
{
    char s;
    int blank,end,others;

    printf("������һ��Ӣ�ľ���(����#ֹͣ):");
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
    printf("�ո�һ��%d��\n���з�һ��%d��\n�����ַ�һ��%d��\n",blank,end,others);
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

    printf("������һ��Ӣ��(����#����):");
    while((ch=getchar())!='#')
    {
        if(count++%8==0)
        {
            printf("\n");
        }
        if(ch=='\n')
        {
            //��ʮ�������\n
            printf("'\\n'-%03d.",ch);
        }
        else if(ch=='\t')
        {
            //��ʮ�������\t
            printf("'\\t'-%03d.",ch);
        }
        else
        {
            //��ʮ������������ַ�
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

    printf("������һ�������ϵ�����(����0��ֹͣ):");
    //�����������ݾ���scanf����������ַ�����putchar
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
        printf("ż����%d��\n������%d��\nż����ƽ������:%d\n,������ƽ������:%d\n",oushu,jishu,sumoushu/oushu,sumjishu/jishu);
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

    printf("������һ��Ӣ��(����#ֹͣ):");
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
    printf("\nһ���滻��%d��",count);
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

    printf("������һ��Ӣ�ľ���(����#����):");
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
    printf("\nһ��������%d��",count);
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

    printf("������һ��Ӣ��(����#����):");
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
    printf("ei������%d��",count);
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

    printf("������һ�ܹ���Сʱ��:");
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
    printf("�ܹ�����%fԪ\n˰��%fԪ\n��������%fԪ\n",pay,t,mon);
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
        printf("������һ������:");
        scanf("%d",&a);
        if(a<2)
        {
            if(a==0)
            {
                break;
            }
            printf("������Χ");
            continue;
        }
        printf("��������%d,��2�������ķ�Χ�ڵ�������:",a);
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
        printf("1)����2)������3)�ѻ鹲�С�4)�ѻ����졢5)�˳�\n");
        printf("���������״̬:");
        scanf("%c",&type);
        switch(type)
        {
            case '1':
            printf("�����빤��:");
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
            printf("˰��:%lf\n������:%lf\n",t,mon);
            break;
            case '2':
            printf("�����빤��:");
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
            printf("˰��:%lf\n������:%lf\n",t,mon);
            break;
            case '3':
            printf("�����빤��:");
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
            printf("˰��:%lf\n������:%lf\n",t,mon);
            break;
            case '4':
            printf("�����빤��:");
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
            printf("˰��:%lf\n������:%lf\n",t,mon);
            break;
            case '5':
            break;
            default:
            printf("��������ȷ������\n");
        }
    } 
    while(type!='5');
    return 0;
}
*/


#include <stdio.h>

int main(void)
