/*
#include <stdio.h>
//������������ͷ�ļ�
#include <float.h>
//������������ͷ�ļ�
#include <limits.h>

int main(void)
{
    int a;
    float b;
    float c;
    //int�������Ϊ2147483647����2��31�η�-1���������ֵ�ͻ����磬������ֵ
    a=10763645656561567980904325676879780867;
    //float�������Ϊ3.8E38���������ֵ�ͻ����磬��ֻȡǰ6��С��������֣���������������
    b=2.5678678567367674594389852375867854738578948687659;
    //float�������磬������ֵ��0.000000��
    c=0.1234E-10;
    printf("%d\n %f\n",a,b);
    printf("%f",c/10);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int a;
    printf("������һ��ASCII��:");
    scanf("%d",&a);
    printf("������ַ���:%c",a);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    printf("\aStartled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"");
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    float input;
    printf("������һ��С��");
    scanf("%f",&input);
    printf("��С����ʽ���:%f\n",input);
    printf("��ָ����ʽ���:%e\n",input);
    printf("��ʮ��������ʽ���:%a\n",input);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int age;
    float seconds;
    printf("�������:");
    scanf("%d",&age);
    seconds=age*3.156e7;
    printf("��Ӧ������:%e\n",seconds);
    return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
    float a;
    float m;
    printf("������ˮ�Ŀ����:");
    scanf("%f",&a);
    m=a*950*3.0e23;
    printf("ˮ��������:%fg\n",m);
    return 0;
}
*/


/*
#include <stdio.h>
#define centimetre 2.54

int main(void)
{
    float height;
    float high;
    printf("��������:__Ӣ��\b\b\b\b\b\b");
    scanf("%f",&height);
    high=height*centimetre;
    printf("��������:%.2f����",high);
    return 0;
}
*/



/*nclude <stdio.h>
#define pint_cup 2
#define cup_ounce 8
#define ounce_tablespoon 2
#define tablespoon_teaspoon 3

int main(void)
{
    float cup,pint,ounce,tablespoon,teaspoon;
    printf("����:");
    scanf("%f",&cup);
    pint=cup/pint_cup;
    ounce=cup*cup_ounce;
    tablespoon=ounce*ounce_tablespoon;
    teaspoon=tablespoon*tablespoon_teaspoon;
    printf("�൱��:%.1f��˾,%.1fƷ��,%.1f������,%.1f����",ounce,pint,tablespoon,teaspoon);
    return 0;
}
*/