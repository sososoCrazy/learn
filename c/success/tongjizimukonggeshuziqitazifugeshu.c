// ----------------------------------------------------------------------------
// File Name     : tongjizimukonggeshuziqitazifugeshu.c
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
/*int zimu(char str[10000])
{
	printf("zimu nei str is %s\n\n",str);
	int i;
	int len;
	int num=0;
	len = strlen(str);
	for(i=0;i<len;i++)
	{
		if(isupper(str[i]) || islower(str[i]))
		{
			num++;
			printf("num is %d\n",num);
		}
	}
	return num;
}*/

int zimu(char *str)
{
	int i;
	int len;
	int num=0;
	len = strlen(str)-1;
	for(i=0;i<len;i++)
	{
		if(isupper(*(str+i)) || islower(*(str+i)))
		{
			num++;
			//printf("num is %d\n",num);
		}
	}
	return num;
}

int kongge(char *str)
{
	int i;
	int len;
	int num=0;
	len = strlen(str)-1;
	for(i=0;i<len;i++)
	{
		if(*(str+i) == ' ')
		{
			num++;
			//printf("num is %d\n",num);
		}
	}
	return num;
}

int shuzi(char *str)
{
	int i;
	int len;
	int num=0;
	len = strlen(str)-1;
	for(i=0;i<len;i++)
	{
		if(isdigit(*(str+i)))
		{
			num++;
			//printf("num is %d\n",num);
		}
	}
	return num;
}

int qita(char *str)
{
	int i;
	int len;
	int num=0;
	len = strlen(str)-1;
	for(i=0;i<len;i++)
	{
		if( isupper(*(str+i))==0 && islower(*(str+i)) == 0 && isdigit(*(str+i)) ==0 && *(str+i) != ' ' )
		{
			num++;
			//printf("num is %d\n",num);
		}
	}
	return num;
}



int main()
{
	char str[10000];
	//while(scanf("%s",&str) != EOF)
	while(fgets(str,sizeof(str),stdin))
	{
		//printf("main str is %s\n",str);
		int num_zimu;
		int num_kongge;
		int num_shuzi;
		int num_qita;
		num_zimu = zimu(str);
		num_kongge = kongge(str);
		num_shuzi = shuzi(str);
		num_qita = qita(str);
		//printf("num_zimu is %d\n",num_zimu);
		printf("%d\n",num_zimu);
		printf("%d\n",num_kongge);
		printf("%d\n",num_shuzi);
		printf("%d\n",num_qita);
	}
	return 0;
}

// yes
// xu yao ce shi
// yes
