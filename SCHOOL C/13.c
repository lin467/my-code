#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("������һ����ĸ:");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    printf("���Ӧ�Ĵ�д��:%c\n",toupper(ch));
    if(ch >= 'A' && ch <= 'Z')
    printf("���Ӧ��Сд��:%c\n",tolower(ch));

    return 0;
}