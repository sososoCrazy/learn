// ----------------------------------------------------------------------------
// File Name     : chazhaoyigeoushuzuijiejindelianggesushu.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.20
// ----------------------------------------------------------------------------
// Version       : 20200520
// Modified Date : 2020.05.20
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void exchange(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int isprime(int a )
{
	int i,j=2;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int num_i;

	while(scanf("%d",&num_i) != EOF)
	{
		int num1=0;
		int num2=0;
		int i,j,k;
		int cha=num_i;
		for(i=0;i<=num_i/2;i++)
		{
			j=num_i-i;
			if(isprime(i) && isprime(j))
			{
				if( (j-i) < cha )
				{
					cha = j-i;
					num1 = i;
					num2 = j;
				}
			}
		}
		printf("%d\n",num1);
		printf("%d\n",num2);
	}


	//printf("num1 is %d, num2 is %d\n",num1,num2);
}

// yes
// xu yao ce shi
