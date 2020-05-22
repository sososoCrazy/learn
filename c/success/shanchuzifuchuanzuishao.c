// ----------------------------------------------------------------------------
// File Name     : shanchuzifuchuanzuishao.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.09
// ----------------------------------------------------------------------------
// Version       : 20200509
// Modified Date : 2020.05.09
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str_i[1000];
	char str[1000];
	int arr[1000];
	char str_o[1000]="";
	int len;
	int num;
	int i;
	int min_arr=0;
	int min_num[1000];
	int j;
	int k=0;

	//while (fgets(str,sizeof(str_i),stdin) != EOF)
	while(scanf("%s",str)!=EOF)
	{
		//strcpy(str,str_i);
	
	//fgets(str,sizeof(str),stdin);
	//printf("%s\n",str);

	len = strlen(str)  ;

	for(i=0;i<len;i++)
	{
		num=0;
		for(j=0;j<len;j++)
		{
			if(str[i]==str[j])
			{
				num++;
			}
			
		}
		arr[i]=num;
		//printf("arr is %d\n",arr[i]);
	}

	min_arr=arr[0];
	for(i=0;i<len-1;i++)
	{
		if(min_arr<arr[i])
		{
			//min_arr = arr[i];
			//min_num = i ;
		}
		else
		{
			min_arr = arr[i];
			//min_num = i+1 ;
		}
	}
	//printf("min_arr is %d \n",min_arr);


	k=0;
	for(i=0;i<len;i++)
	{
		if(arr[i]>min_arr)
		{
			str_o[k]=str[i];
			printf("%c",str_o[k]);
			k++;
		}
		
	}

	printf("\n");
	}
	
	return 0;
}
//yes,huiqu shi yi shi
// while(scanf("",) != EOF) ,add then yes
