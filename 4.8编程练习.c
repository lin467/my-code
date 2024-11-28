/*
#include <stdio.h>

int main(void)
{
    char name[40];
    char secondname[40];
    printf("姓%s",name);
    scanf("%s",name);
    printf("名%s",secondname);
    scanf("%s",secondname);
    printf("%s%s",secondname,name);
    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    int width;

    printf("请输入名字:");
    scanf("%s",name);
    width=strlen(name);
    printf("名字是:\"%s\"\n",name);
    printf("名字是:\"%20s\"\n",name);
    printf("名字是:\"%-20s\"\n",name);
    printf("名字是:\"%*s\"",(width+3),name);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    float input;

    printf("请输入一个浮点数:");
    scanf("%f",&input);
    printf("The input is %2.1f or %1.1e\n",input,input);
    printf("The input is %+2.3f or %1.3E",input,input);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    char name[40];
    float heigh;
    printf("请输入姓名:");
    scanf("%s",name);
    printf("请输入身高:");
    scanf("%f",&heigh);
    printf("%s,you are %1.3f feet tall.",name,heigh);
    return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
    float speed,size,time;
    printf("请输入下载速度:");
    scanf("%f",&speed);
    printf("请输入文件大小:");
    scanf("%f",&size);
    time=size*8/speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.",speed,size,time);
    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    char secondname[40];
    int n,sn;

    printf("请输入你的姓:");
    scanf("%s",name);
    printf("请输入你的名:");
    scanf("%s",secondname);
    printf("%s",name);
    printf("%s",secondname);
    n=strlen(name);
    printf(" ");
    sn=strlen(secondname);
    printf("\n%*d%*d",n,n,sn,sn);
    printf("\n%d%*d",n,n,sn);
    return 0;
}
*/
