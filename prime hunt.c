// This codes takes an integer n as input and returns the nth prime as output
#include<stdio.h>

int prime_hunt (int x);

int main()
{
    int n, num=0, i=2;
    int lop[250];
    
    scanf("%d",&n);
    do{
        if( prime_hunt(i) )
        {
            lop[num]=i;
            num++;
        }
        i++;
    } while(num<=n);
    printf("%d\n",lop[n-1]); 
    
    return 0;
}

int prime_hunt (int x)
{
    int fact=0, i;
    for (i = 2; i <= x; i++)
    {
        if(x%i==0) fact++;
    }
    if(fact<=1) return 1;
    else return 0;
}