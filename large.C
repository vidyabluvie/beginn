#include<stdio.h>
#include<conio.h>
int a=1,b=2,c=3;
void main()
{
clrscr();
if((a>b)&&(b>c))
{
printf("%d",a);
}
else if(b>c)
{
printf("%d",b);
}
else
{
printf("%d",c);
}
}
