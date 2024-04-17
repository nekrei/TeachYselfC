#include<stdio.h>

int sum(int x);
int main()
{
    int value = sum(0);
    printf("%d\n",value);
    return 0;
}

int sum(int x)
{
    if(x>=20) return x;

    printf("%d\n",x);
    x++;
    sum(x);
}