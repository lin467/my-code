#include <stdio.h>

int main(viod)
{
    int a[100][100];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i == 0 || j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }


    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
