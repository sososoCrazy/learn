// ----------------------------------------------------------------------------
// File Name     : jiandanmima.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.08
// ----------------------------------------------------------------------------
// Version       : 20200508
// Modified Date : 2020.05.08
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
	char *p_str;

	
	scanf("%s",str);
	p_str=str;
	//printf("%c\n",*(p_str+1));
	for(;*p_str!='\0';p_str++)
	{
		if(isupper(*p_str))
		{
            if(*p_str!='Z')
			    *p_str=*p_str+33;
            else
                *p_str=*p_str+7;
		}
		else if(islower(*p_str))
		{
			switch (*p_str)
			{
				case 'a': ;
				case 'b': ;
				case 'c': *p_str='2';break;
				case 'd': ;
				case 'e': ;
				case 'f': *p_str='3';break;
				case 'g': ;
				case 'h': ;
				case 'i': *p_str='4';break;
				case 'j': ;
				case 'k': ;
				case 'l': *p_str='5';break;
				case 'm': ;
				case 'n': ;
				case 'o': *p_str='6';break;
				case 'p': ;
				case 'q': ;
				case 'r': ;
				case 's': *p_str='7';break;
				case 't': ;
				case 'u': ;
				case 'v': *p_str='8';break;
				case 'w': ;
				case 'x': ;
				case 'y': ;
				case 'z': *p_str='9';break;
				default: ;
			}
		}
		else
		{
			;
		}
		printf("%c",*p_str);
	}
	return 0;
}

//yes
