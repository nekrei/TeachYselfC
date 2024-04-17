#include<stdio.h>

int judge(int x);
int main()
{
    int atte;
    atte = judge(0);
    if(!atte) printf("You ran out of attempts\n");
    else printf("Number of attempts used %d",atte);
    return 0;
}

int judge(int x)
{
    if(x>=10) 
    {
        return 0;
    }
    int num;
    scanf("%d",&num);
    x++;
    if(num==71)
    {
        printf("RIGHT!\n"); 
        return x;
    } else if (num<71)
    {
        printf("Guessed too low!\n");
        judge(x);
    }
    else
    {
        printf("Guessed too high!\n");
        judge(x);    
    }
    
}