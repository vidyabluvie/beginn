#include<stdio.h>
#include<conio.h>
int N,remainder=0,rev;
void main()
{
clrscr();
scanf("%d",&N);
while(N!=0)
{
remainder=N%10;
rev=rev*10+remainder;
N=N/10;
}
if(N==rev)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
getch();
}
