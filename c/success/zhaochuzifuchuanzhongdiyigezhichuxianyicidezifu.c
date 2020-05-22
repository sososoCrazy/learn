// ----------------------------------------------------------------------------
// File Name     : zhaochuzifuchuanzhongdiyigezhichuxianyicidezifu.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.20
// ----------------------------------------------------------------------------
// Version       : 20200520
// Modified Date : 2020.05.20
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
	char str[10000];
	while(scanf("%s",&str) != EOF)
	{
		int i, j, k;
		int len;
		int num=0;
		len = strlen(str);
		for(i=0;i<len;i++)
		{
			num = 0;
			for(j=0;j<len;j++)
			{
				if(str[i] == str[j])
				{
					num++;
				}
			}
			if(num == 1)
			{
				k = i;
				break;
			}
			else
			{
				k = -1 ;
			}
		//	printf("k is %d\n",k);
		}
		if(k>=0)
			printf("%c\n",str[k]);
		else
			printf("%d\n",k);
	}
}

// yes
// xu yao ce shi
