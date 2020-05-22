// ----------------------------------------------------------------------------
// File Name     : shexingjuzhen.c
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
	int N;
	while(scanf("%d",&N) != EOF)
	{
		int arr[150][150] = {0} ;
		int i=0, j=0, k=0;
		int col_add=0, row_add=0;
		int m=0, n=0;
		
		//printf("%d\n",arr[0][0]);
		n = N ; 
		for(i=0;i<N;i++)
		{
			col_add = i ;
			row_add = i ;
			for(j=0;j<n;j++)
			{
				col_add++ ;
				//count
				if(i==0 && j==0)
				{
					arr[i][j] = 1 ;
				}
				else if(i!=0 && j==0)
				{
					arr[i][j] = arr[i-1][j] + row_add ;
				}
				else
				{
					arr[i][j] = arr[i][j-1] + col_add ;
				}
				
				//printf
				if( j == n-1 )
				{
					printf("%d\n",arr[i][j]);
				}
				else
				{
					printf("%d ",arr[i][j]);
				}
			}
			n-- ;
		}

	}
	return 0;
}

// yes
// xu yao ce shi
