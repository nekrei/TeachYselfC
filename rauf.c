#include<stdio.h>
int main()
{
int i,a[10],j,x;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++)
{if(i>0)
for(j=i-1;j>=0;j--)
if(a[j]=a[i])
{j=0;}
else
{a[i]=x;
printf("/n Number which repeats:%d",x);
printf("/n Places at which repeats:");
printf(" %d",i);
for(j=1;j<=9;j++)
{
if(x=a[j])
printf(" %d",j);
else continue;

}
}










}







}
