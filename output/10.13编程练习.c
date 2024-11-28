/*
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };
    int year, month;
    float subtot, total;
    const float(*ptr)[MONTHS] = rain;
    printf(" YEAR  RAINFALL  (inches) \n");
    for(year = 0, total = 0; year < YEARS; year++)
    {
        for(month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += *(*(ptr + year) + month);
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches. \n\n",total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf("Nov  Dec\n");
    for(month = 0; month < MONTHS; month++)
    {
        for(year = 0, subtot = 0; year < YEARS; year++)
        {
            subtot += *(*(ptr + year) + month);
        }
        printf("%4.1f ", subtot / YEARS);
    }
    printf("\n");
    return 0;
} 
*/

/*
#include <stdio.h>
#include <string.h>

int MAX(int a[], int n);

int main(void)
{
    int a[100] = {1, 2, 3, 4, 5};
    //为什么用n = sizeof（a）/sizeof（a[0]）不行，一定要用a被分配的空间大小（100）
    printf("最大的数字是:%d",MAX(a, 100));
    return 0;
}

int MAX(int a[], int n)
{
    int MAX = a[0];
    for(int i = 0; i < n; i++)
    {
        if(MAX < a[i])
        {
            MAX = a[i];
        }
    }
    return MAX;
}
*/

/*
#include <stdio.h>

void copy_b(double b[], double a[], int n);
void copy_c(double *c, double *a, int n);
void copy_d(double *d, double *a_first, double *a_last);

int main(void)
{

    double a[3] = {1.2, 2.2, 3.3};

    double b[3];
    double c[3];
    double d[3];

    copy_b(b, a, 3);
    copy_c(c, a, 3);
    copy_d(d, a, a + 5);

    printf("%lf %lf %lf\n",b[0],b[1],b[2]);
    printf("%lf %lf %lf\n",c[0],c[1],c[2]);
    printf("%lf %lf %lf\n",d[0],d[1],d[2]);
    return 0;
}
void copy_b(double b[], double a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

void copy_c(double *c, double *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(c + i) = *(a + i);
    }
}

void copy_d(double *d, double *a_first, double *a_last)
{
    for(int i = 0; (a_last - a_first) > i; i++)
    {
        *(d + i) = *(a_first + i);
    }
}
*/

/*
#include <stdio.h>

void copy_1(double *a, double *b, int n, int m);

int main(void)
{
    double a[3][3] = {
        {1.1, 2.2, 3.3},
        {3.2, 6.4, 9.6},
        {5.6, 3.4, 9.8}
        };
    double b[3][3];
    copy_1(*a, *b, 3, 3);
    printf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf\n",b[0][0],b[0][1],b[0][2],b[1][0],b[1][1],b[1][2],b[2][0],b[2][1],b[2][2]);
    return 0；
}

void copy_1(double *a, double *b, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            //如果只有i+j，则从第二遍外循环，i=1时，j与i的和为1 2 3，不为4，5，6
            *(b + (i*m + j)) = *(a + (i*m + j));
        }
    }
}
*/

/*
#include <stdio.h>

void copy(int *a, int *b, int n);

int main(void)
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int b[3];
    copy(a+2, b, 3);
    for(int i = 0; i < 3; ++i)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}

void copy(int *a, int *b, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(b + i) = *(a + i);
    }
}
*/

/*
#include <stdio.h>

void copy(double a[][5], double b[3][5], int n, int m);

int main(void)
{
    double a[][5] = {
            {0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4},
            {9.1, 8.5, 2.3, 6.1, 8.4},
    };
    double b[3][5];
    copy(a, b, 3, 5);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%lf ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void copy(double a[][5], double b[3][5], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            b[i][j] = a[i][j];
        }
    }
       
}
*/

#include <stdio.h>

int main(void)
{
    a[4] = {1, 0, 4, 6};
    b[4] = 
}