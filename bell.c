#include<stdio.h>
int main()
{
    int x, start;
    scanf("%d",&start);
    for(x=start;x>=0;x--)
        printf("%d\n",x);
    printf("\a");
    return 0;
}