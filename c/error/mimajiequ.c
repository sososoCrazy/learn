// ----------------------------------------------------------------------------
// File Name     : mimajiequ.c
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
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[1000];

	while(fgets(str,sizeof(str),stdin))
	{
		char str_tmp[1000];
		int i=0,j=0,k=0;
		int i_tmp,j_tmp;
		int len=0;
		int num=0;
		int num_o=0;
		int num_tmp;
		len = strlen(str) -1 ;

		for(i=0;i<len;i++)
		{
			for(j=len;j>=0;j--)
			{
				i_tmp=i;
				j_tmp=j;
				num_tmp=0;
				while(j-i>0)
				{
					if(str[i_tmp]==str[j_tmp])
					{
						num_tmp++;
						//printf("tmp yes , i is %d, j is %d.\n",i_tmp,j_tmp);
						//printf("num_tmp is %d\n",num_tmp);
					}
					else
					{
						num_tmp=0;
						//printf("i is %d, j is %d.\n",i_tmp,j_tmp);
						break;
					}
					if(((j_tmp-i_tmp==1) || (j_tmp-i_tmp==2)) && (num_tmp>num)  )
					{
						num = num_tmp ;
						if(j_tmp-i_tmp==1)
							num_o = num *2 ;
						else if(j_tmp-i_tmp==2)
							num_o = num * 2 + 1 ; 
					}
					i_tmp++;
					j_tmp--;
				}

			}
			//if(num_tmp>num)
			//	num=num_tmp;
		}
		printf("%d\n",num_o);
		//printf("%d\n",len);
		
	}
	return 0;
}

// yes
// xu yao ce shi
