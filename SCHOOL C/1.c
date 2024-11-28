#include <stdio.h>

int main(void)
{
    char letter;

    printf("请输入一个字母:");
    scanf("%c",&letter);

    printf("该字母对应的ASCII码是:%d",letter);

    return 0;
}