// ----------------------------------------------------------------------------
// File Name     : mimayanzheng.c
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

int check_len(char *str);
int check_type(char *str);
int check_repeat(char *str);

int main()
{
	char str[100]="";
	int num_check_len;
	int num_check_type;
	int num_check_repeat;
	while(scanf("%s",&str)!=EOF)
	//while(gets(str)!=NULL)
	{
		num_check_len = check_len(str);
		//printf("len is %d\n",num_check_len);

		num_check_type = check_type(str);
		//printf("type is %d\n",num_check_type);

		num_check_repeat = check_repeat(str);
		//printf("repeat is %d\n",num_check_repeat);
		if(num_check_len && (num_check_type > 2) && num_check_repeat)
		{
			printf("OK\n");
		}
		else
		{
			printf("NG\n");
		}

	}
	return 0;

}

int check_len(char *str)
{
	if(strlen(str)>8)
		return 1;
	else
		return 0;
}

int check_type(char *str)
{
	int num=0;
	int str_up=0;
	int str_low=0;
	int str_shuzi=0;
	int str_fuhao=0;
	char *p;
	for(p=str;*p!='\0';p++)
	{
		//printf("%s,,\n",p);
		if(isupper(*p))
		{
			str_up=1;
		}
		else if(islower(*p))
		{
			str_low=1;
		}
		else if(isdigit(*p))
		{
			str_shuzi=1;
		}
		else
		{
			str_fuhao=1;
		}

	}
	num = str_up + str_low + str_shuzi + str_fuhao ;
	return num;
	
}

int check_repeat(char *str)
{
	char *p;
	char *q;
	int num;
	p=str;
	q=str;
	for(p=str;*p!='\0';p++)
	{
		for(q=p+1;*q!='\0';q++)
		{
			if(*(p)==*(q) && *(p+1)==*(q+1) && *(p+2)==*(q+2))
			{
				num = 0;
				return 0;
			}
			else
			{
				num = 1;
			}
		}
	}
	return num;
}

//hui jia shi yi shi.

//int check_repeat(char *str)
//{
//	char *p;
//	char *q;
//	int num;
//	p=str;
//	q=str;
//	//for(int i=0;i<strlen(p)-1;i++)
//	for(p=str;*p!='\0';p++)
//	{
//		//for(int j=i+1;j<strlen(p)-1;j++)
//		for(q=p+1;*q!='\0';q++)
//		{
//			//printf("repeat str is %c,%c\n",*(p),*(q));
//			if(*(p)==*(q) && *(p+1)==*(q+1) && *(p+2)==*(q+2))
//			//if(*(p+i)==*(p+j) && *(p+i+1)==*(p+j+1) && *(p+i+2)==*(p+j+2))
//			//if((strcmp((p+i),(p+j)) && strcmp((p+i+1),(p+j+1)) && strcmp((p+i+2),(p+j+2)))==0)
//			//if(((int strcmp(char *(p+i),char *(p+j))) && int (strcmp(char *(p+i+1),char *(p+j+1))) && (int strcmp(char *(p+i+2),char *(p+j+2))))==0)
//			{
//				//printf("warning : %c %c,no \n",*p,*q);
//				num = 0;
//				return 0;
//			}
//			else
//			{
//				num = 1;
//			}
//		}
//	}
//	return num;
//}
