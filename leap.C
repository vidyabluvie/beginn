#include<stdio.h>
#include<conio.h>
int n=2016;
void main()
{
clrscr();
if((n%4)&&(n%400)&&(n!%100))
{
printf("\nYes");
}
else
{
printf("\nNo");
}
getch();
}
