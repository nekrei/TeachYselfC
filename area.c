#include<stdio.h>
int main()
{
    char choice;
    double x,y,z;
    printf("If your shape a circle, rectangle or a triangle (C/R/T)\n");
    choice =getchar();
    if(choice == 'C')
    {
        scanf("%lf",&x);
        printf("Area: %.3lf",3.1416*x*x);
    } else if (choice == 'R')
    {
        scanf("%lf %lf",&x, &y);
        printf("Area: %.3lf",x*y);

    } else if(choice == 'T')
    {
        scanf("%lf %lf",&x, &y);
        printf("Area: %.3lf",0.5*x*y);

    }else
        printf("Wrong Input,oneechan!");
    return 0;
}