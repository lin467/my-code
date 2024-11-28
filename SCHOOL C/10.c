#include <stdio.h>

int main(void)
{
    float x;

    printf("ÇëÊäÈëxµÄÖµ:");
    scanf("%f",&x);
    
    if(x < 0)
    printf("y = %.2f\n",x);
    else if(x < 50)
    printf("y = %.2f\n",3 * x - 2);
    else if(x < 100)
    printf("y = %.2f\n",4 * x + 1);
    else 
    printf("y = %.2f\n",5 * x);

    return 0;
}