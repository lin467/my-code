/*
#include <stdio.h>

int main(void)
{
    char name[40];
    char secondname[40];
    printf("��%s",name);
    scanf("%s",name);
    printf("��%s",secondname);
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

    printf("����������:");
    scanf("%s",name);
    width=strlen(name);
    printf("������:\"%s\"\n",name);
    printf("������:\"%20s\"\n",name);
    printf("������:\"%-20s\"\n",name);
    printf("������:\"%*s\"",(width+3),name);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    float input;

    printf("������һ��������:");
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
    printf("����������:");
    scanf("%s",name);
    printf("���������:");
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
    printf("�����������ٶ�:");
    scanf("%f",&speed);
    printf("�������ļ���С:");
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

    printf("�����������:");
    scanf("%s",name);
    printf("�����������:");
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
