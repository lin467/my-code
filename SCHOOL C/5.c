#include <stdio.h>

int main(void)
{
    int num1,num2;

    printf("请输入第一个整数:");
    scanf("%d",&num1);

    printf("请输入第二个整数:");
    scanf("%d",&num2);

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 = %d\nnum2 = %d\n",num1,num2);

    return 0;
}