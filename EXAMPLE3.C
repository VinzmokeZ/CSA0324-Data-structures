#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("enter a limit:");
scanf("%d",&n);
for(i=1;i<n;i++)
	{
	sum+=i;
	}
printf("sum=%d",sum);
getch();
}


