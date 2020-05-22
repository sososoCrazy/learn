// ----------------------------------------------------------------------------
// File Name     : zifuchuanxianglian.c
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
	char a[10] = "afhre";
	printf("%s\n",a);
	for(int i=0;i<8;i++)
	strcat(a,"0");
	printf("%s\n",a);
	return 0;
}
