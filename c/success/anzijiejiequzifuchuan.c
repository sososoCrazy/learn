// ----------------------------------------------------------------------------
// File Name     : anzijiejiequzifuchuan.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.19
// ----------------------------------------------------------------------------
// Version       : 20200519
// Modified Date : 2020.05.19
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[2000];
    while(scanf("%s",&str) != EOF)
    {
        int num;
        int count;
        int i;
        count = 0;
        i = 0;
        scanf("%d",&num);
        while(count + sizeof(str[i]) <= num)
        {
            printf("%c",str[i++]);
            count = count + sizeof(str[i]);
        }
        printf("\n");
    }
    return 0;
}

/*
int main()
{
	char str[10000];
	while(fgets(str,sizeof(str),stdin))
	{
		int num=0;;
		int len=0;; 
		int i=0,j,k;
		char str_o[10000]={0};
		len = strlen(str) - 1 ;

		scanf("%d",&num);
		

		for(i=0;i<num;i++)
		{
			str_o[i] = str[i] ;
		}
		//strcpy(str_o,str);
		if(i != 0)
		{
			printf("%s",str_o);
			printf("\n");
		}
	}
	return 0;
}*/
// yes
// xu yao ce shi
// error
// yes chao
