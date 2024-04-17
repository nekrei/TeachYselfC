#include<stdio.h>
int main ()
{
    double num;
    do{
        scanf("%lf",&num);
        printf("%.4lf\n",num*3.7854);
    }while(num);
    return 0;
}