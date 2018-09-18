#include<stdio.h>
#include<conio.h>
int N,remainder=0,S;
S=N;
void main()
{
clrscr();
scanf("%d",&N);
while(N!=0))
{
remainder=N%10;
S=S*10+remainder;
N=N/10;
}
if(N==S)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
getch();
}
