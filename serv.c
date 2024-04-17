#include<stdio.h>
int main()
{
    int tar,x, match=0;
    int serV[7][2]=
    {
        721, 3,
        188, 74,
        332, 34,
        100, 1,
        207, 79,
        233, 134,
        521, 27
    };
    scanf("%d",&tar);
    for(x=0;x<7;x++)
    {
        if(tar == serV[x][0])
        {
            printf("Server found with %d active members\n",serV[x][1]);
            match = 1;
            break;
        }
    }
    if(!match) printf("Server not found");
    return 0;
}