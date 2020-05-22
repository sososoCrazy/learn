// ----------------------------------------------------------------------------
// File Name     : tiao7.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.15
// ----------------------------------------------------------------------------
// Version       : 20200515
// Modified Date : 2020.05.15
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int beishu(int a)
{
	if(a%7==0)
		return 1;
	else
		return 0;
}

int baohan(int a)
{
	if(a==7)
		return 1;
	else
		return 0;
}


int main()
{
	int num;
	//int num;
	
	while(scanf("%d",&num) != EOF)
	{
		//int arr[10]={0};
		int i,j;
		int weishu=0;
		int num_o=0;
		//printf("num is %d\n",num);
		
		for(i=7;i<=num;i++)
		{
			if(beishu(i))
			{
				num_o++ ;
				//printf("7 de beishu is %d\n",i);
				continue;
			}
			else
			{
				weishu=0;
				int arr[10]={0};
				for(j=i;j>0;j=j/10)
				{
					//printf("i is %d , j is %d \n",i,j);
					//printf("weishu is %d\n",weishu);
					arr[weishu]= j % 10 ;
					weishu++;
					//printf("i is %d , j is %d, weishu is %d . \n",i,j,weishu);
				}
				for(j=0;j<weishu;j++)
				{
					if(baohan(arr[j]))
					{
						//printf("baohan 7 is %d\n",i);
						num_o++;
						break;
					}
				}

			}
		}

		//for(i=0;i<j;i++)
		//{
		//	printf("%d\n",arr[i]);
		//}
		
		printf("%d\n",num_o);
	}

	//printf("%s\n",*str);
	
	return 0;
	
}

// yes
// xu yao ce shi
