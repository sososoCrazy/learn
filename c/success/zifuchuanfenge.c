// ----------------------------------------------------------------------------
// File Name     : zifuchuanfenge.c
// Author        : gsj
// E-MAIL        : guosijia@sylincom.com
// Created Date  : 2020.05.08
// ----------------------------------------------------------------------------
// Version       : 20200508
// Modified Date : 2020.05.08
// Modified by   : gsj   guosijia@sylincom.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main()
{
    char str[2][100]={};
    char str_i[2][100];
    char str_o[2][25][8];
    //char ling[2]={'00'};
    char str_o1[25][8]={};
    char str_o2[25][8]={};
    int len[2];
    int i;
    int j;
    int k;
    int m;
    int x,y;
    int zero;
    int shang[2];
    int yushu[2];
    //printf("%s\n",ling);
    
    for(i=0;i<2;i++)
    {
        fgets(str[i],sizeof(str[i]),stdin);
        len[i]=strlen(str[i])-1;
        shang[i]=len[i]/8;
        yushu[i]=len[i]%8;
        //len[i]=len[i]-1;
        //str_i[i]=str[i];
        //printf("%s,len is %d, shang is %d, yushu is %d .\n",str[i],len[i],shang[i],yushu[i]);
    }

    i=0;
    //for(i=0;i<2;i++)
	//if(i=0)
    {
        for(x=0;x<=shang[i];x++)
        {
            for(y=0;y<8;y++)
            {
                if((8*x+y)<=len[i]-1)
                {
					
                    str_o1[x][y]=str[i][8*x+y];
                    if(x<shang[i] && y==7)
                    {
                        printf("%s\n",str_o1[x]);
                    }
				}
                if(x==shang[i] && y==yushu[i] && yushu[i]!=0)
                {
                    for(zero=0;zero<8-yushu[i];zero++)
                    {
                        strcat(str_o1[x],"0");
                    }
                    printf("%s\n",str_o1[x]);
                    break;
                }


            }
            //printf("%s\n",str_o[i][x]);
        }
    }
    i=1;
	//if(i=1)
    {
        for(x=0;x<=shang[i];x++)
        {
            for(y=0;y<8;y++)
            {
                if((8*x+y)<=len[i]-1)
                {
					
                    str_o2[x][y]=str[i][8*x+y];
                    if(x<shang[i] && y==7)
                    {
                        printf("%s\n",str_o2[x]);
                    }
				}
                if(x==shang[i] && y==yushu[i] && yushu[i]!=0)
                {
                    for(zero=0;zero<8-yushu[i];zero++)
                    {
                        strcat(str_o2[x],"0");
                    }
                    printf("%s\n",str_o2[x]);
                    break;
                }


            }
            //printf("%s\n",str_o[i][x]);
        }
    }

    return 0;
}
