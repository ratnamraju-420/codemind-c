#include<stdio.h>
int main()
{
	int u;
	scanf("%d",&u);
	float c;
	if(u<=199)
	{
		c=u*1.20;
	}
	else if(u>=200 && u<=399)
	{
		c=u*1.50;
	}
	else if(u>=400 && u<=599)
	{
		c=u*1.80;
	}
	else if(u>=600)
	{
		c=u*2.00;
	}
	if(c>400)
	{
		printf("%.2f",c+15*(c/100));
	}
	else if(c<=400)
	{
		printf("%.2f",c+100);
	}
}