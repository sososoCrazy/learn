// ----------------------------------------------------------------------------
// File Name     : xiaoqiuluodi.c
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
	int num;
	while(scanf("%d",&num) != EOF)
	{
		int i=0;
		float height=0,length=0;

		height = num ;
		length = num ;
		for(i=0;i<4;i++)
		{
			height = height/2 ;
			length = length + height*2 ;
			//printf("height is %f, length is %f.\n",height,length);
		}
		height = height/2 ;
		//printf("height is %f.\n",height);
		printf("%.6g\n",length);
		printf("%.6g\n",height);
	}
	return 0;
}

// yes
// xu yao ce shi

