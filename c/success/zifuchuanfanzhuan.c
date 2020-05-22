// ----------------------------------------------------------------------------
// File Name     : zifuchuanfanzhuan.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.06
// ----------------------------------------------------------------------------
// Version       : 20200506
// Modified Date : 2020.05.06
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;
	int len;
	fgets(str,sizeof(str),stdin);
	len=strlen(str)-1;
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;

}
