// ----------------------------------------------------------------------------
// File Name     : dancidaopai.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.14
// ----------------------------------------------------------------------------
// Version       : 20200514
// Modified Date : 2020.05.14
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
	char str[1000];
	//char str_tmp[50][20]={0};
	char str_o[100];
	int len;
	int i,j,k;
	int num;

	while(fgets(str,sizeof(str),stdin))
	{
		char str_tmp[50][20]={0};
		//for(i=0;i<50;i++)
			//strcpy(str_tmp[i]," ");
			//str_tmp[i]=' ';
		len = strlen(str)-1;
		//printf("len is %d\n",len);
		//printf("%s",str);
		k=0;
		j=0;
		for(i=0;i<len;i++)
		{
			if(isupper(str[i]) || islower(str[i]))
			{
				str_tmp[k][j]=str[i];
				j++;
			}
			else
			{
				//str_tmp[k][j]=' ';
				//num=strlen(str_tmp[k]);
				//printf("tmp len is %d,  k is %d.\n",num,k);
				k++;
				j=0;
			}
			//printf("tmp is %s\n\n",str_tmp[k-1]);

		}
		//printf("\n\n\nk is %d\n",k);
		for(i=0;i<=k;i++)
		{
			//num = strlen(str_tmp[i]);
			//printf(" str_tmp [i] len is %d\n",num);
			for(j=0;j<strlen(str_tmp[i]);j++)
			{
				//printf("%c",str_tmp[i][j]);
				//printf("  i is %d, j is %d.\n",i,j);
			}
		}
		for(i=k;i>=0;i--)
		{
			//strcpy(*(*str_o+i),*(*str_tmp+k));
			//k--;
			if(i>0)
				printf("%s ",str_tmp[i]);
			else
				printf("%s\n",str_tmp[i]);
		}
	}
	return 0;
}

// yes
// xu yao ce shi
// error 
// 30% success
