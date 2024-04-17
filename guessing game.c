#include<stdio.h>
int main()
{
    int magic = 24;
    int inp,x;
    
    for(x=0;x<10;x++)
    {
        scanf("%d",&inp);
        if(inp==magic)
        {
            printf("RIGHT!\n");
            printf("Number of attempts used: %d",x+1);
            return 0; //can return main() function anywhere
        }else if (inp>magic)
            printf("Guessed too high!\n");
         else
            printf("Guessed too low!\n");
    
        
    }
    printf("Out of guesses :\(\n");
    return 0;
}