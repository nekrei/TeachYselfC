#include<stdio.h>
int main()
{
    char pass[50];
    char agen[50];
    int err=0,i;
    do{
        printf("type password (press X to exit)\n");
        scanf("%s",pass);
        printf("Enter password again:\n");
        scanf("%s",agen);

        for(i=0;agen[i]!='\0';i++)
        {
            if(agen[i]!=pass[i])
            {
                err++;
                printf("Mismatch!\n");
                break;
            }
        }
        if (err) continue;
        printf("Passwords match!\n");
        
        
    }while(pass[0]!='X');
    return 0;
}