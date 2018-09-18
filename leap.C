#include<stdio.h>
#include<conio.h>
int n;
void main()
{
clrscr();
scanf("%d",&n);
if((n%4)&&(n%400)&&(n%100==0))
{
printf("\nYes");
}
else
{
printf("\nNo");
}
getch();
}
