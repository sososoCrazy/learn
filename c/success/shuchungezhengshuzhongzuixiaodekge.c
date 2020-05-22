// ----------------------------------------------------------------------------
// File Name     : shuchungezhengshuzhongzuixiaodekge.c
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

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b ;
}

int main()
{
	int n;
	int k;

	while(scanf("%d %d",&n,&k) != EOF)
	{
		int arr[1000] = {0};
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		qsort(arr,n,sizeof(arr[0]),cmp);
		for(i=0;i<k;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}
	return 0;
}

// yes
// xu yao ce shi
