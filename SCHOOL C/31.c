#include <stdio.h>

int main(void)
{
    int a[10] = {1, 3, 56, 34, 45, 69, 54, 78, 44, 23};

    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 3 == 0)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}