#include<stdio.h>
int main()
{
    int x,num[10],y=0, count=0 ,f1=0;
    for(x=0;x<10;x++)
    {
        scanf("%d",&num[x]);
        if(!num[x])
        {
            if(!f1) printf("0: \t");
            printf("%d ", x+1);
            f1=1;
            count++;
        }
    }
    if(f1) printf("\n");
    while(count<10)
    {
        if(!num[y])
        {
            y++;
            continue;
        }
        printf("%d: \t",num[y]);
        for(x=y;x<10;x++)
        {
            if(!num[x]) continue;
            if(num[y]==num[x])
            {
                count++;
                printf("%d ",x+1);
                num[x] = (x == y)*num[y];
            }
        }
        printf("\n");
        y++;
    }
    return 0;
    }