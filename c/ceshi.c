// ----------------------------------------------------------------------------
// File Name     : ceshi.c
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

int main()
{
	char a;
	while(scanf("%c",&a) != EOF) {
		char c;
		char d;
		c=a+32;
		d=a-32;
		printf("c is %c, d is %c.\n",c,d);
	}
	return 0 ;
}
