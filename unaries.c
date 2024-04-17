#include<stdio.h>
int main()
{
    int j,k;
    j = 7;
    k = j++;
    //first k is assigned the value of j followed by incrementing j
    printf("%d %d\n",j,k);
    j=7;
    k=++j;
    //increment first then assign value to k
    printf("%d %d\n",j,k);
    return 0;
}