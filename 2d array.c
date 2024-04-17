#include<stdio.h>
int main()
{
    int table[5][5];
    int x,y;
    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            table[x][y]=5*x+y+1;
        }
    }
    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            printf("%d\t",table[x][y]);
        }
        printf("\n");
    }
    return 0;
}
