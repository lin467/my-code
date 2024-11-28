#include <stdio.h>

int main(void)
{
    int mark,grade;

    printf("«Î ‰»Î≥…º®:");
    scanf("%d",&mark);

    grade = mark / 10;

    switch (grade)
    {
        case 0:
        case 9:printf("A");
            break;
        case 8:printf("B");
            break;
        case 7:printf("C");
            break;
        case 6:printf("D");
            break;
        default:
            break;
    }

    return 0;
}