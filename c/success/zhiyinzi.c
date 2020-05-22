// ----------------------------------------------------------------------------
// File Name     : zhiyinzi.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.06
// ----------------------------------------------------------------------------
// Version       : 20200506
// Modified Date : 2020.05.06
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	//char *zyz;
	//int x=0;y=0;i=0;j=0;
	int i;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		while(i!=a)
		{
			if(a%i==0)
			{
				printf("%d ",i);
				a=a/i;
			}
			else
				break;
		}
	}
	printf("%d ",a);







/*	int x=0;
	long a2;
	long a3;
	long a5;
	long a7;
	long a11;
	long a13;
	scanf("%d",&a);
	for(i=0;i<=a/2;i++)
	{
		a2=a%2;
		if(a2==0)
		{
			//zyz[x]="2";
			//zyz[x+1]=" ";
			//x=x+2;
			strcat(zyz,"2 ");
			printf("zyz is %s\n",zyz);
		}
	}
	for(i=0;i<=a/3;i++)
	{
		a3=a%3;
		if(a3==0)
		{
			strcat(zyz,"3 ");
		}
	}
	for(i=0;i<=a/5;i++)
	{
		a5=a%2;
		if(a2==5)
		{
			strcat(zyz,"5 ");
		}
	}
	for(i=0;i<=a/7;i++)
	{
		a7=a%7;
		if(a7==0)
		{
			strcat(zyz,"7 ");
		}
	}
	for(i=0;i<=a/11;i++)
	{
		a11=a%11;
		if(a11==0)
		{
			strcat(zyz,"11 ");
		}
	}
	for(i=0;i<=a/13;i++)
	{
		a13=a%13;
		if(a13==0)
		{
			strcat(zyz,"13 ");
		}
	}
	printf("%s\n",zyz);*/
	return 0;
}
