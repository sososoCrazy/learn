// ----------------------------------------------------------------------------
// File Name     : zidianxupailie.c
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

int main()
{
	int n;
	int i;
	int j;
	char str[1000][100] = {0};
	char tmp[100]={0};

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		//printf("1,i is %d\n",i);
	}
	/*for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
		//printf("2,i is %d\n",i);
		
	}*/

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				//tmp = str[j] ;
				//str[j] = str[i] ;
				//str[i] = tmp ;
				strcpy(tmp,str[j]);
				strcpy(str[j],str[i]);
				strcpy(str[i],tmp);
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]) ;
	}

	return 0;
}
// hao xiang shi yes
// xu yao ce shi
