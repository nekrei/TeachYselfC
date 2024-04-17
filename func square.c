#include<stdio.h>

double get_sqr(double x);

int main()
{
    double num;
    scanf("%lf",&num);
    printf("%lf",get_sqr(num));
    return 0;
}

double get_sqr(double x)
{
    return x*x;
}