#include<stdio.h>
int main()
{
    char gii[180]= "America Ya! Hallo Hallo Hallo";
    char asee[180];
    char scin[180];
    fgets(asee,180,stdin);//also stores the newline feed \n
    scanf("%s",scin); // upto first space
    printf("%s\n",gii);
    printf("%s\n",asee);
    printf("%s\n",scin);
    return 0;
}