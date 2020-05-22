// ----------------------------------------------------------------------------
// File Name     : 1degeshu.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.12
// ----------------------------------------------------------------------------
// Version       : 20200512
// Modified Date : 2020.05.12
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int num;
	int num_b[1000];
	int n=0;
	int i;

	scanf("%d",&num);

	/*for(i=0;i<num;i++)
	{
		if(num/2 > 0)
		{
			
		}
	}*/

	for(i=num;i>0;i=i/2)
	{
		num_b[n]= (i%2) ;
		n++;

		/*if(i%2==1)
		{
			n++;
		}*/

	}
	//printf("%d",n);
	n=n-1;
	for(i=n;i>=0;i--)
	{
		printf("%d",num_b[i]);
	}

	return 0;

}

// yes
// xu yao ce shi

