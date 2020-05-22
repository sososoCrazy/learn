// ----------------------------------------------------------------------------
// File Name     : mingzidepiaoliangdu.c
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
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		char name[100][30];
		int name_num[100];
		int i,j,k,m;
		int len[100];

		int pld=26;
		int name_pld=0;
		int tmp;
		for(i=0;i<n;i++)
		{
			scanf("%s",&name[i]);
			len[i]=strlen(name[i]);
			//printf("len[%d] is %d\n",i,len[i]);
		}
		m=0;
		for(i=0;i<n;i++)
		{
			m=0;
			pld=26;
			name_pld=0;
			for(j=0;j<len[i];j++)
			{
				if(isupper(name[i][j]) || islower(name[i][j]) )
				{
					name_num[m] = 1 ;
					//printf("name_num[%d] is %d \n",m,name_num[m]);
					for(k=j+1;k<len[i];k++)
					{
						if(name[i][j] == name[i][k] || name[i][j] == name[i][k] +32 || name[i][j] == name[i][k] -32)
						{
							name_num[m] ++ ;
							//printf("name_num++ zhihou name_num[%d] is %d \n",m,name_num[m]);
							//m++;
							name[i][k] = '^';
							//printf("name[%d][%d] is %c\n",i,k,name[i][k]);
						}
					}
					//printf("%d\n",name_num[m]);
					//name_pld = name_pld + name_num[m] * pld;
					//printf("name_pld = %d + %d * %d\n",name_pld,name_num[m],pld);
					//pld--;

					m++;
				}

			}
			for(j=0;j<m;j++)
			{
				//printf("name_num [%d] is %d\n",j,name_num[j]);
				for(k=j+1;k<m;k++)
				{
					if(name_num[j]<name_num[k])
					{
						tmp= name_num[j];
						name_num[j] = name_num[k] ;
						name_num[k] = tmp ;
					}
				}
				//printf("name_num [%d] is %d\n",j,name_num[j]);
				name_pld = name_pld + name_num[j] * pld;
				pld-- ;
			}
			//printf("name_pld is %d\n",name_pld);
			printf("%d\n",name_pld);
		}
		
	}
	return 0;
}

// yes
// xu yao ce shi
