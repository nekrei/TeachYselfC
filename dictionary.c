#include<stdio.h>
#include<string.h>
int main()
{
    char dictionary[][2][20] =
    {
        "mind\n", "Mon",
        "dress\n", "jama",
        "daddy\n", "Baba",
        "sugar\n", "chini",
        "school\n", "Biddyalaya"
        " "," "
    };
    char inp[40];
    int i=0, match=0;
    do{
        fgets(inp,20,stdin);
        while(strcmp(dictionary[i][0]," "))
        {
            if(!strcmp(dictionary[i][0],inp))
            {
                printf("%s\n",dictionary[i][1]);
                match = 1;           
                break;
            }
            i++;
        }
        if(!match) printf("Not Found\n");
    }while(inp[0] != '0');
    


    return 0;
}