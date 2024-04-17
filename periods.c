#include<stdio.h>
#include<conio.h>
int main()
{
    int i,t;
    for(i=0;i<10;i++)
    {
        char p = getche();
        printf("\n");
        for(t=0;t<p;t++) //char variable can be used analogously to a int variable in which case its ASCII value is evaluated
            printf(".");
        printf("\n");
    }
    return 0;
}