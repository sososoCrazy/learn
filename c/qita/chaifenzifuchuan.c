// ----------------------------------------------------------------------------
// File Name     : chaifenzifuchuan.c
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
	char str[2][100]={0};
	char str_o1[13][8]={0};
	char str_o2[13][8]={0};
	int len[2]={0};
	int shang[2]={0};
	int yushu[2]={0};
	int str_o;
	char zero_o[8]={0};
	int zero;


	for(int i=0;i<2;i++)
	{
		fgets(str[i],sizeof(str[i]),stdin);
		len[i]=strlen(str[i])-1;
		shang[i]=len[i] / 8 ;
		yushu[i]=len[i] % 8 ;
		//printf("shang[%d] is %d\n",i,shang[i]);
		//printf("yushu[%d] is %d\n",i,yushu[i]);
	}
	for(int j=0;j<2;j++)
	{
		for(int x=0;x<=shang[j];x++)
		{
			for(int y=0;y<8;y++)
			{
				if(j==0)
				{
					if((8*x+y)<=len[j])
					{
						str_o1[x][y]=str[j][8*x+y];
						//str_o=str_o1;
					
						if(x<shang[j]&&y==7)
						{
							//printf("%s,x=%d\n",str_o1[x],x);
							printf("%s\n",str_o1[x]);
						}
					}
					if(x==shang[j]&&y==yushu[j])
					{
						for(zero=0;zero<8-yushu[j];zero++)
						{
							//zero_o[zero]=zero_o[0];
							strcat(str_o1[x], "0");
							//strcpy(*str_o1,strcat(str_o1[x],"0"));
							//str_o1[x][y+zero+1]='0';
						}
						//printf("%s,,%d\n",zero_o,zero);
						//str_o1[x]={'str_o1[x]',0};
						printf("%s\n",str_o1[x]);
						break;
						continue;
					}
				}
				if(j==1)
				{
					if((8*x+y)<=len[j])
					{
						str_o2[x][y]=str[j][8*x+y];
						//str_o=str_o1;
					}
					if(x<shang[j]&&y==7)
					{
						//printf("%s,x=%d\n",str_o1[x],x);
						printf("%s\n",str_o1[x]);
					}
					if(x==shang[j]&&y==yushu[j])
					{
						for(zero=0;zero<8-yushu[j];zero++)
						{
							//zero_o[zero]=zero_o[0];
							strcat(str_o2[x], "0");
							//str_o2[x][y+zero+1]='0';
						}
						//printf("%s,,%d\n",zero_o,zero);
						//str_o1[x]={'str_o1[x]',0};
						printf("%s\n",str_o2[x]);
						break;
						continue;
					}
				}

			}
		}
	}
	
	return 0;

}
