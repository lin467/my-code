#include <stdio.h>

int main(void)
{
    int b;
    int sum = 0;
    int count = 0;
    int a[15] = {55,154,103,106,151,58,199,10,247,218,39,170,87,122,135};

    for(int i = 0; i < 15; i++)
    {
        for(b = 2; b < a[i]; b++)
        {
            if(a[i] % b == 0) 
            {
                break;
            }
        }
        if(a[i] == b)
        {
            count++;
            sum = sum + a[i];
        }
    }

    printf("素数个数:%d\n总和为:%d\n",count,sum);

    return 0;
}