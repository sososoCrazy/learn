// ----------------------------------------------------------------------------
// File Name     : zifujiaohuan.c
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

void exchanges(char *str1,char *str2)
{
	char *tmp;
	strcpy(tmp,str1);
	strcpy(str1,str2);
	strcpy(str2,tmp);
}

void exchangec(char str1,char str2)
{
	char tmp;
	tmp=str1;
	str1=str2;
	str2=tmp;
}

void exchangecp(char *str1,char *str2)
{
	char tmp=*str1;
	*str1=*str2;
	*str2=tmp;
}

int main()
{
	char str[100];
	while(scanf("%s",str) != EOF)
	{
		exchangecp(str,str+1);
		//exchange(str,str+1);
		printf("%s\n",str);
	}
	return 0;
}
