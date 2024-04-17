#include<stdio.h>
#include<conio.h>
int main()
{
    char c = getche(); //doesnt w8 for carriage return ENTER
    printf("%c",c);
    
    c = getchar(); //waits for ENTER cant be used alongwith getche()
    printf("%c",c);

    return 0;
}