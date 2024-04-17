#include<stdio.h>
int main()
{
    int x,total=0;
    while(1)
    {
        printf("What amount do you want to tip: 0\t1\t5\t10\t20\t50\n");
        do{
            scanf("%d",&x);
        }while(x!=0 &&x!=1 && x!=5 && x!=10 && x!= 20 && x!=50);
        total=total+x;
        if(!x)
        {
            printf("You are tipping %d.00",total);
            break;
        }
    }
}