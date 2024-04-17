#include<stdio.h>
#include<math.h>
int main()
{
    int num, digit[20], i=0;
    int x=0, rep=1,qs[10], no[10];
    scanf("%d",&num);
    digit[i]=num%10;
    num /= 10;
    do{
        i++;
        digit[i]=num%10;
        num /= 10;
        if(digit[i]==digit[i-1])  rep++;
        else 
        {
            no[x]=rep;
            qs[x]=digit[i-1];
            x++;
            rep = 1;
        }
        no[x]=rep;
        qs[x]=digit[i];
    }while(num);
    
    for(i=0;i<=x;i++)
        printf("The digit %d appears %d times consecutively\n",qs[i],no[i]);
    return 0;
}