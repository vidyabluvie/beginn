#include<stdio.h>
#include<conio.h>
int n=548,count=0;
void main()
{
clrscr();
while(n!=0)
{
n=n/10;
count++;
}
printf("%d",count);
getch();
}
