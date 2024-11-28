
#include <stdio.h>
#define name "林"
#define surname "柔"

int main(void)
{
    printf("%s%s\n",name,surname);
    printf("%s\n%s\n",name,surname);
    printf("%s",name);
    printf("%s",surname);
    return 0;
}




#include <stdio.h>
#define name "林柔"
#define address "中国"

int main(void)
{
    printf("%s\n%s",name,address);
    return 0;
}



#include <stdio.h>
#define days_per_year 365

int main(void)
{
    int age,days;
    age=18;
    days=age*days_per_year;
    printf("I am %d years old,I live %d days.\n",age,days);
    return 0;
}




#include <stdio.h>

int one(void);
int two(void);

int main()
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

int jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    return 0;
}

int deny(void)
{
    printf("Which nobody can deny!\n");
    return 0;
}




#include <stdio.h>

int br(void);
int ic(void);

int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    return 0;
}

int br(void)
{
    printf("Brazil,Russia");
    return 0;
}

int ic(void)
{
    printf("India,China");
    return 0;
}




#include <stdio.h>

int main()
{
    int toes;
    toes=10;
    printf("toes=%d\ntoes*2=%d\ntoes的次方=%d\n",toes,toes*2,toes*toes);
    return 0;
}



#include <stdio.h>

int smile(void);

int main()
{
    smile();smile();smile();
    printf("\n");
    smile();smile();
    printf("\n");
    smile();
    return 0;
}

int smile(void)
{
    printf("Smile!");
    return 0;
}




#include <stdio.h>

int one_three(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}

int one_three(void)
{
    printf("one\n");
    int two(void);
    {
        printf("two\n");
        printf("three\n");
        return 0;
    }
} 
