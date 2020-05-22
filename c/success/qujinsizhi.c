// ----------------------------------------------------------------------------
// File Name     : qujinsizhi.c
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
	float a;
	float c;
	int b;
	int out;

	scanf("%f",&a);
	for(int i=0;i<=a;i++)
	{
		if(a-i<1)
		{
			if(a-i==0)
				out=a;
			else if(a-i<0.5)
			{
				out=i;
			}
			else
				out=i+1;
		}
		
	}
	printf("%d\n",out);
	return 0;

}
//yes
