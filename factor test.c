#include<stdio.h>

int main()
{
    int x, num, factor[20],count=0;
    int p,q;
    scanf("%d",&num);
    for(x=1;x<=num;x++)
    {
        if(num%x==0)
        {
            factor[count]=x;
            count++;
        }
    }

    for(p=0;p<count;p++)
        printf("%d ",factor[p]);
    return 0;
}