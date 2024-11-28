#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("请输入一个字母:");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    printf("其对应的大写是:%c\n",toupper(ch));
    if(ch >= 'A' && ch <= 'Z')
    printf("其对应的小写是:%c\n",tolower(ch));

    return 0;
}