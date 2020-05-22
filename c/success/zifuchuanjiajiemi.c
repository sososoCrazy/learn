// ----------------------------------------------------------------------------
// File Name     : zifuchuanjiajiemi.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.13
// ----------------------------------------------------------------------------
// Version       : 20200513
// Modified Date : 2020.05.13
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *aucPassword, char *aucResult)
{
	if(isupper(*aucPassword) != 0)
	{
		if(*aucPassword >= 'A' && *aucPassword <= 'Y')
			*aucResult = *aucPassword + 33 ;
		else
			*aucResult = 'a' ;
	}
	else if(islower(*aucPassword) != 0)
	{
		if(*aucPassword >= 'a' && *aucPassword <= 'y')
			*aucResult = *aucPassword - 31 ;
		else
			*aucResult = 'A' ;
	}
	else if(isdigit(*aucPassword) != 0)
	{
		if(*aucPassword >= '0' && *aucPassword <= '8')
			*aucResult = *aucPassword + 1 ;
		else
			*aucResult = '0' ;
	}
	else
	{
		;
	}
}

void unencrypt(char *result, char *password)
{
	if(isupper(*result) != 0)
	{
		if(*result >= 'B' && *result <= 'Z')
			*password = *result + 31 ;
		else
			*password = 'z' ;
	}
	else if(islower(*result) != 0)
	{
		if(*result >= 'b' && *result <= 'z')
			*password = *result - 33 ;
		else
			*password = 'Z' ;
	}
	else if(isdigit(*result) != 0)
	{
		if(*result >= '1' && *result <= '9')
			*password = *result - 1 ;
		else
			*password = '9' ;
	}
	else
	{
		;
	}
}

int main()
{
	char str_enc[100];
	char str_enc_o[100];
	char str_unenc[100];
	char str_unenc_o[100];
	int i,j,k;
	int len1,len2;
    //int n=100;

	while(fgets(str_enc,sizeof(str_enc),stdin))
	{
	fgets(str_unenc,sizeof(str_unenc),stdin);
	
	len1=strlen(str_enc);
	len2=strlen(str_unenc);
	
	for(i=0;i<len1-1;i++)
	{
		encrypt(str_enc+i,str_enc_o+i);
		//printf("%c",str_enc[i]);
		printf("%c",str_enc_o[i]);
	}

	printf("\n");

	for(i=0;i<len2-1;i++)
	{
		unencrypt(str_unenc+i,str_unenc_o+i);
		//printf("%c",str_enc[i]);
		printf("%c",str_unenc_o[i]);
	}
    printf("\n");
	}

	return 0;
}
// yes
// xu yao ce shi
// yes
