#include<stdio.h>
int main()
{
    int x;
    char smol = getchar();
    for(x=0;x<9;x++)
    {
        char well = getchar();
        if(well <= smol) smol = well;
    }
    
    printf("%c",smol);
    return 0;
}

/*
ENTER (carriage return) key takes up a character space
10 getchar() + enter for execution
pressing ENTER between character invalidates code
*/