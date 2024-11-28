/*
#include <stdio.h>
//浮点类型数据头文件
#include <float.h>
//整数类型数据头文件
#include <limits.h>

int main(void)
{
    int a;
    float b;
    float c;
    //int类型最大为2147483647，即2的31次方-1，超过最大值就会上溢，报垃圾值
    a=10763645656561567980904325676879780867;
    //float类型最大为3.8E38，超过最大值就会上溢，即只取前6给小数点后数字，并不是四舍五入
    b=2.5678678567367674594389852375867854738578948687659;
    //float类型下溢，报垃圾值（0.000000）
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
    printf("请输入一个ASCII码:");
    scanf("%d",&a);
    printf("代表的字符是:%c",a);
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
    printf("请输入一个小数");
    scanf("%f",&input);
    printf("以小数形式输出:%f\n",input);
    printf("以指数形式输出:%e\n",input);
    printf("以十六进制形式输出:%a\n",input);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int age;
    float seconds;
    printf("你的年龄:");
    scanf("%d",&age);
    seconds=age*3.156e7;
    printf("对应的秒数:%e\n",seconds);
    return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
    float a;
    float m;
    printf("请输入水的夸克数:");
    scanf("%f",&a);
    m=a*950*3.0e23;
    printf("水分子质量:%fg\n",m);
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
    printf("你的身高是:__英寸\b\b\b\b\b\b");
    scanf("%f",&height);
    high=height*centimetre;
    printf("你的身高是:%.2f厘米",high);
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
    printf("杯数:");
    scanf("%f",&cup);
    pint=cup/pint_cup;
    ounce=cup*cup_ounce;
    tablespoon=ounce*ounce_tablespoon;
    teaspoon=tablespoon*tablespoon_teaspoon;
    printf("相当于:%.1f盎司,%.1f品脱,%.1f大汤勺,%.1f茶勺",ounce,pint,tablespoon,teaspoon);
    return 0;
}
*/