// ----------------------------------------------------------------------------
// File Name     : tupianzhengli.c
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

int cmp(const void *a, const void *b)
{
	return *(char*)a - *(char*)b ;
}

int main()
{
	char str[1200] ;
	while(scanf("%s",&str) != EOF)
	{
		int len;
		len = strlen(str);
		qsort(str, len, sizeof(str[0]), cmp);
		printf("%s\n",str);
	}
	return 0;
}

// yes
// xu yao ce shi
