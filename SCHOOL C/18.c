#include <stdio.h>

int main(void)
{
    int rabbit,chicken,feet;

    feet = 30 * 4;
    rabbit = (feet - 90) / (4-2);
    chicken = 30 - rabbit;

    printf("����%dֻ����%dֻ\n",rabbit,chicken);

    return 0;
}