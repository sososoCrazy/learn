// ----------------------------------------------------------------------------
// File Name     : maopaopaixu.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.19
// ----------------------------------------------------------------------------
// Version       : 20200519
// Modified Date : 2020.05.19
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

void exchange(int *a, int *b)
{
	int tmp;
	tmp = *a ;
	*a = *b ;
	*b = tmp ;
}

void maopao(int arr[], int len)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(arr[j] > arr[j+1])
			{
				/*tmp = arr[j] ;
				arr[j] = arr[j+1] ;
				arr[j+1] = tmp ;*/
				exchange(arr+j,arr+j+1);
				//exchange(&(arr[j]),&(arr[j+1]));
			}
		}
	}
	//printf("maopao zhong de len is %d\n",len);
}

void xuanze(int arr[], int len)
{
	int i,j;
	int min;
	for(i=0;i<len;i++)
	{
		min = i ;
		for(j=i+1;j<len;j++)
		{
			if(arr[j]<arr[min])
				min = j ;
		}
		exchange(arr+i,arr+min);

	}
}

void charu(int arr[], int len)
{
	int i,j,tmp;
	int k;
	for(i=0;i<len;i++)
	{
		tmp = arr[i] ;
		for(j=i;j>0 && arr[j-1] > tmp ; j-- )
		{
			arr[j] = arr[j-1] ;
			/*for(k=0;k<len;k++)
			{
				printf("%2d  ",arr[k]);
			}
			printf("\n");*/
		}
		arr[j] = tmp ;
	}
}

int main()
{
	int arr[]={22,34,3,32,82,55,89,50,37,5,64,35,9,70} ;
	int len,len_bak ;
	int i;
	len = (int)sizeof(arr) / sizeof(*arr) ;
	len_bak = len ;

	//-----------------------------------------------------
	//maopao(arr,len) ;
	//xuanze(arr,len) ;
	//charu(arr,len) ;
	qsort(arr,len,sizeof(arr[0]),cmp);

	//-----------------------------------------------------

	//printf("len is %d\n",len);

	for(i=0;i<len;i++)
	{
		//printf("%d %d\n",arr[i],i);
		if(i==len-1)
			printf("%d\n",arr[i]);
		else
			printf("%d ",arr[i]);
	}
	//printf("\n");
	return 0;
}

