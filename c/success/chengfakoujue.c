// ----------------------------------------------------------------------------
// File Name     : chengfakoujue.c
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

int main()
{
	int i;
	int j;

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d x %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}