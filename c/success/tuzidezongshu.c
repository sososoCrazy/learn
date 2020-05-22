// ----------------------------------------------------------------------------
// File Name     : tuzidezongshu.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.18
// ----------------------------------------------------------------------------
// Version       : 20200518
// Modified Date : 2020.05.18
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int month;
	while(scanf("%d",&month) != EOF)
	{
		int i=0, j=0, k=0;
		int m=0, n=0;
		int num1=0, num2=0, num3=0;
		int num[1000]={0};
		m=month;
		for(i=0;i<month;i++)
		{
			if(i==0 || i==1)
			{
				num[i] = 1;
			}
			else
			{
				num[i] = num[i-1] + num[i-2] ;
			}
		}
		printf("%d\n",num[month-1]);
	}
	return 0;
}

// yes
// xu yao ce shi
