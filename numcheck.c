#include<stdio.h>
int main()
{
    int num[10],x, count=0;
    int y=0,p=0;
    for(x=0;x<10;x++)
        scanf("%d\n",&num[x]);
    while(count<10)
    {
        for(x=y;x<10;x++)
        {
            if(num[x]==num[y])
            {
                count++;
                printf("%d ",x);
            }
        }
        y++;
        printf("\n");
        
    }
    return 0;
}