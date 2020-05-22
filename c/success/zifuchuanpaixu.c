// ----------------------------------------------------------------------------
// File Name     : zifuchuanpaixu.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.12
// ----------------------------------------------------------------------------
// Version       : 20200512
// Modified Date : 2020.05.12
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void exchange(char *str1,char *str2)
{
	char tmp=*str1;
	*str1=*str2;
	*str2=tmp;
}

int main()
{
	char str[1000]={0};
    char str_o[1000]={0};
    int min;
	int i,j,k,x,y;
	int len;
	int cmp;

	//while(scanf("%s",str) != EOF)
	//while(scanf("%s",&str) != '\n')
	//while(scanf("%[^\n]",&str) != EOF)
	//while(1)
	while(fgets(str,sizeof(str),stdin))
	{
		//scanf("%[^\n]",str);
		len = strlen(str) ;
		//printf("len is %d\n",len);


		/*if(isupper(str[0]) != 0)
		{
			//cmp= strcmp(str[0]+32,str[1]);
			if(str[0]+32<str[1])
			{
			//	cmp = -1;
				printf("0 < 1\n");
			}
			else if(str[0]+32 > str[1])
				printf("0 > 1\n");
			else
				printf("0 = 1\n");
			//printf("cmp is %d\n",cmp);
		}*/
        /*for(i=0;i<len;i++)
        {
            str_o[i]=str[i];
            for(j=0;j<len;j++)
            {
                if(isupper(str[i]))
                {
                    if(isupper(str[j]))
                    {
                        if(str[j]<str[i])
                    }
                }
                else if(islower(str[i]))
                {
                    
                }
                else
                {
                    
                }
                
            }
        }*/
        
        
        
		for(i=0;i<len;i++)
		{
            min = i ;
			for(j=i+1;j<len;j++)
			{
				if(isupper(str[min]) != 0)
				{
					if(isupper(str[j]) != 0)
					{
						//if(str[i] > str[j])
                        if(str[j] < str[min])
                            min = j;
						    //exchange(str+min,str+j);
					}
					else if(islower(str[j]) != 0)
					{
						if(str[min]+32 > str[j])
                            min = j;
							//exchange(str+min,str+j);
					}
					else
					{
						
					}
				}
				else if(islower(str[min]) != 0)
				{
					if(isupper(str[j]) != 0)
					{
						if(str[min] > str[j]+32)
                            min = j ;
							//exchange(str+i,str+j);
					}
					else if(islower(str[j]) != 0)
					{
						if(str[min] > str[j])
                            min = j ;
							//exchange(str+i,str+j);
					}
					else
					{
						
					}
				}
				else
				{

					/*if(isupper(str[j]) != 0)
					{
						
					}
					else if(islower(str[j]) != 0)
					{
						
					}
					else
					{
						
					}*/
				}
			}
            //printf("\n\n\nmin is %c,,, %d\n",str[min],min);
            printf("%c",str[min]);
			k=1;
			x=0;
			if(isupper(str[min]) || islower(str[min]))
				for(;min-k>=i;min--)
				{
					k=1;
					while( (isupper(str[min-k])==0) && (islower(str[min-k])==0) )
						k++;
					if( (isupper(str[min]) || islower(str[min])) && (isupper(str[min-k]) || islower(str[min-k])) )
					{
						//printf("\nk is %d\n",k);

						exchange(str+min,str+min-k);
						//x++;
						//printf("str is   %s",str);
					}
					//else
					//	k++;

				}
			//k=1;
			/*for(;min-k>=i;min--)
			{
				//printf("k is %d\n",k);
				if((isupper(str[min]) || islower(str[min]) ) && ( isupper(str[min-k]) || islower(str[min-k])))
				{
					exchange(str+min,str+min-k);
					//printf("str is   %s\n",str);
				}
				else if((isupper(str[min])==0) && (islower(str[min])==0))
					break;
				else if((isupper(str[min]) || islower(str[min])) && ((isupper(str[min-k])==0) && (islower(str[min-k])==0)))
					k++;
				else
					//k++;
					;
			}*/
            //str[min]=str[min];
            //printf("\n\n%c\n\n","z"+30);
            //exchange(str+min,str+i);
		}
		//printf("i is %d, j is %d \n",i,j);

		//printf("%s",str);

	}








	/*char c;
	scanf("%c",&c);
	printf("%c",c+32);*/

	return 0;
}












/*
void exchange(char *str1,char *str2)
{
	char tmp=*str1;
	*str1=*str2;
	*str2=tmp;
}

int main()
{
	char str[1000]={0};
	int i,j;
	int len;
	int cmp;

	//while(scanf("%s",str) != EOF)
	//while(scanf("%s",&str) != '\n')
	//while(scanf("%[^\n]",&str) != EOF)
	//while(1)
	while(fgets(str,sizeof(str),stdin))
	{
		//scanf("%[^\n]",str);
		len = strlen(str) ;
		//printf("len is %d\n",len);


		/*if(isupper(str[0]) != 0)
		{
			//cmp= strcmp(str[0]+32,str[1]);
			if(str[0]+32<str[1])
			{
			//	cmp = -1;
				printf("0 < 1\n");
			}
			else if(str[0]+32 > str[1])
				printf("0 > 1\n");
			else
				printf("0 = 1\n");
			//printf("cmp is %d\n",cmp);
		}*/
/*		for(i=0;i<len;i++)
		{
			for(j=i+1;j<len;j++)
			{
				if(isupper(str[i]) != 0)
				{
					if(isupper(str[j]) != 0)
					{
						if(str[i] > str[j])
							exchange(str+i,str+j);
					}
					else if(islower(str[j]) != 0)
					{
						if(str[i]+32 > str[j])
							exchange(str+i,str+j);
					}
					else
					{
						
					}
				}
				else if(islower(str[i]) != 0)
				{
					if(isupper(str[j]) != 0)
					{
						if(str[i] > str[j]+32)
							exchange(str+i,str+j);
					}
					else if(islower(str[j]) != 0)
					{
						if(str[i] > str[j])
							exchange(str+i,str+j);
					}
					else
					{
						
					}
				}
				else
				{
					if(isupper(str[j]) != 0)
					{
						
					}
					else if(islower(str[j]) != 0)
					{
						
					}
					else
					{
						
					}
				}
			}
		}
		//printf("i is %d, j is %d \n",i,j);

		printf("%s",str);

	}
*/







	/*char c;
	scanf("%c",&c);
	printf("%c",c+32);*/
/*
	return 0;
}
*/

//yes
//xu yao ce shi
//error

// changed yes
// xu yao ce shi
// yes
