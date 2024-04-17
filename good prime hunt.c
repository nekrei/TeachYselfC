/*
An improved version for finding the nth prime
It only checks whether a number in question is divisible by primes less than its square root
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int rank, lop[400],n=0,i, x=3, fact=0;
    scanf("%d",&rank);
    lop[0]=2;

    do{
        for(i=0;i<=n;i++)
        {
            if(lop[i]>sqrt(x)) break;
            if(x%lop[i]==0)
            {
                fact++;
                break;
            }
        }
        if(!fact)
        {
            lop[n+1] =x;
            n++;
        }
        fact =0;
        x++; 
    }while(n<rank); 
    
    printf("%d\n",lop[rank-1]);
    return 0;
}