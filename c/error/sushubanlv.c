// ----------------------------------------------------------------------------
// File Name     : sushubanlv.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.13
// ----------------------------------------------------------------------------
// Version       : 20200513
// Modified Date : 2020.05.13
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int hesushu(int a, int b)
{
	int c;
	c = a + b ;
	if(isprime(c)==0)
		return 0;
	else
		return 1;
}

int main()
{
	int n;          //input n ge ou shu
	int arr[100];   //input zheng shu
	int he[100];
	int i,j,k;
	int num;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//for(i=0;i<n;i++)
	//{
	//	printf("%d\n",arr[i]);
	//}
	
	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n;j++)
		{
			
		}
	}






	return 0;
}

// too hard to resolve
// give up
