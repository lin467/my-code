/*
#include <stdio.h>

int main(void)
{
    int count;
    char ch;

    count=0;

    while((ch=getchar()!=EOF))
    {
        count++;
    }
    printf("����ļ�һ����%d���ַ�",count);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int count;
    char ch;

    count=0;

    while((ch=getchar())!=EOF)
    {
        //���ڱ���Ҫ���Ǵ�ӡ�ַ���Ӧ��ʮ����ֵ������count++==10ʱ��ӡ���з�
        if(count++==10)
        {
            printf("\n");
            count=1;
        }
        //'\404'����ո��ַ�,>=�ո��ַ����ɴ�ӡ
        else if(ch>='\040')
        {
            printf("\'%c\'--%3d",ch,ch);
        }
        //�������з�������countΪ0������\n--\n����ʽ��ӡ���з�
        else if(ch=='\n')
        {
            printf("\\n--\\n\n");
            count=0;
        }
        //��ӡ�Ʊ��
        else if(ch=='\t')
        {
            printf("\\t--\\t");
        }
        else
        {
            //^��ʾ���ַ���Ӧ��ASCII��
            printf("\'%c\'--^%c",ch,(ch+64));
        }
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int lowwercase,uppercase;
    char ch;

    lowwercase=0;
    uppercase=0;

    while((ch=getchar())!=EOF)
    {
        if(ch>='A'&&ch<='Z')
        uppercase++;
        if(ch>='a'&&ch<='z')
        lowwercase++;
    }
    printf("�����ַ����д��ĸ��%d��,Сд��ĸ��%d��\n",uppercase,lowwercase);
    return 0;
}
*/


/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int word,letter;

    word=0;
    letter=0;

    while((ch=getchar())!=EOF)
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            letter++;
        }
        //ispunct�����ж��Ƿ��Ǳ����ţ��Ǿͳ�����Ϊ��0�����ǾͲ�������Ϊ0
        if(ispunct(ch)!=0||ch==' ')
        {
            word++;
        }
    }
    printf("����ı�����%d����ĸ.%d������\n",letter,word);
    peintf("ÿ�����ʵ���ĸ��:%.2f",letter/word);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int head,tail,guess;
    char ch;

    head=1;
    tail=100;

    guess=(head+tail)/2;

    printf("���1-100ѡһ������,�ҽ�����\n");
    printf("����Ҳ����˾ͷ���y�´���n\n");
    do
    {
        printf("���Ƿ������:%d\n",guess);
        if(getchar()=='y')
        {
            break;
        }
        printf("�Ҳµ�%d������Ĵ���С?(l&s)\n",guess);
        while((ch=getchar())=='\n')
        {
            continue;
        }
        if(ch=='l'||ch=='L')
        {
            tail=guess-1;
            guess=(tail+head)/2;
        }
        else if(ch=='s'||ch=='S')
        {
            head=guess+1;
            guess=(head+tail)/2;
        }
        else
        {
            continue;
        }
    }
    while(getchar()!='y');
    printf("��֪���ҿ϶��ܲµ�\n");
    return 0;
}
*/


/*
#include <stdio.h>
void meun(void);
float number(void);

int main(void)
{
    char operate;
    double first,second;
    do
    {
        meun();
        operate=getchar();
        while(getchar()!='\n')
        {
            continue;
        }
        switch(operate)
        {
            case 'a':
                printf("Enter first number: ");
                first=number();
                printf("Enter second number: ");
                second=number();
                printf("%g+%g=%g\n",first,second,first+second);
                break;
            case 'b':
                printf("Enter first number: ");
                first=number();
                printf("Enter second number: ");
                second=number();
                printf("%g-%g=%g\n",first,second,first-second);
                break;
            case 'c':
                printf("Enter first number: ");
                first=number();
                printf("Enter second number: ");
                second=number();
                printf("%g*%g=%g\n",first,second,first*second);
                break;
            case 'd':
                printf("Enter first number: ");
                first=number();
                printf("Enter second number: ");
                while((second=number())==0)
                {
                    printf("��������������:");
                }
                printf("%g/%g=%g\n",first,second,first/second);
                break;
            case 'q':
                break;
            default:
                printf("����������ѡ��:\n");
            while(getchar()!='\n')
            {
                break;
            }
        }
        while(getchar()!='\n');
    } 
    while(operate!='q');
    printf("bye");
    return 0;
}

//������ֻ��printf�Ͳ��÷���
void meun(void)
{
    printf("a.�ӷ� b.���� c.�˷� d.����\n");
    printf("q.�˳�\n");
}

float number(void)
{
    float f;
    char ch;

    while(scanf("%g",&f)!=1)
    {
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf("�ⲻ��һ������\n");
        printf("������һ������\n");
    }
    return f;
}
*/


