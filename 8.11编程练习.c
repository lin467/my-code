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
    printf("这个文件一共有%d个字符",count);
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
        //由于本题要求是打印字符对应的十进制值，所以count++==10时打印换行符
        if(count++==10)
        {
            printf("\n");
            count=1;
        }
        //'\404'代表空格字符,>=空格字符即可打印
        else if(ch>='\040')
        {
            printf("\'%c\'--%3d",ch,ch);
        }
        //遇到换行符就重置count为0，并以\n--\n的形式打印换行符
        else if(ch=='\n')
        {
            printf("\\n--\\n\n");
            count=0;
        }
        //打印制表符
        else if(ch=='\t')
        {
            printf("\\t--\\t");
        }
        else
        {
            //^表示该字符对应的ASCII码
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
    printf("输入字符这大写字母有%d个,小写字母有%d个\n",uppercase,lowwercase);
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
        //ispunct用于判断是否是标点符号，是就成立，为非0，不是就不成立，为0
        if(ispunct(ch)!=0||ch==' ')
        {
            word++;
        }
    }
    printf("这个文本中有%d个字母.%d个单词\n",letter,word);
    peintf("每个单词的字母数:%.2f",letter/word);
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

    printf("请从1-100选一个数字,我将猜它\n");
    printf("如果我猜中了就返回y猜错返回n\n");
    do
    {
        printf("你是否想的是:%d\n",guess);
        if(getchar()=='y')
        {
            break;
        }
        printf("我猜的%d比你想的大还是小?(l&s)\n",guess);
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
    printf("我知道我肯定能猜到\n");
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
                    printf("请输入其他数字:");
                }
                printf("%g/%g=%g\n",first,second,first/second);
                break;
            case 'q':
                break;
            default:
                printf("请输入以上选项:\n");
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

//函数内只有printf就不用返回
void meun(void)
{
    printf("a.加法 b.减法 c.乘法 d.除法\n");
    printf("q.退出\n");
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
        printf("这不是一个数字\n");
        printf("请输入一个数字\n");
    }
    return f;
}
*/


