#include<stdio.h>
int main()
{
    int x,y;
    for(x=1;x<=100;x++)
    {
        printf("%d\t",x);
        if(!(x%5)) printf("\v");    
    }
    return 0;
}