#include <stdio.h>

int main(void)
{
    int rabbit,chicken;

    for(rabbit = 0; rabbit <= 30; rabbit++)
    {
        if(rabbit * 4 + (30 - rabbit) * 2 == 90)
        {
            break;
        }
    }

    chicken = 30 - rabbit;

    printf("ÍÃ×Ó%dÖ»£¬¼¦%dÖ»\n",rabbit,chicken);
}