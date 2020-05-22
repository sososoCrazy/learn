// ----------------------------------------------------------------------------
// File Name     : sizeyunsuan.c
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

typedef struct
{
	int top;
	int base[0];
}stack;

stack* stackInit(int num)
{
	stack* s = (stack*)malloc(sizeof(stack)+num*sizeof(int));
	memset(s, 0 , sizeof(stack)+num*sizeof(int));
	s->top = -1;
	return s;

}
void stackDestory(stack* s)
{
	free(s);
}
void stackPush(stack *s, int e)
{
	s->base[++s->top] = e;
}
int stackPop(stack *s)
{
	if(s->top == -1)
		return 0;
	return s->base[s->top--];
}
int stackTop(stack *s)
{
	return s->base[s->top];
}
int stackEmpty(stack *s)
{
	return (s->top == -1);
}

int ishigh(char c1, char c2)
{
	if(c1=='+' || c1=='-'){
		if(c2=='+' || c2=='-')
			return 0 ;
		else if(c2=='*' || c2=='/')
			return 1;
	}
	if(c1=='*' || c1=='/')
		return 0;
	if(c1=='(')
		return 1;
	return 0;
}

int calcpro(int a,int b,int ch)
{
	switch(ch){
		case '+':
			return (a+b);
		case '-':
			return (a-b);
		case '*':
			return (a*b);
		case '/':
			return (a/b);
	}
	return 0;
}


int main()
{
	char str[101];
	char str_ch[101];
	while(scanf("%s",&str_ch) !=EOF)
	{
		stack* nums, *calcs;
		int c1,n1,n2;
		char* p;
		int len = strlen(str_ch);
		int i, j=0 ,temp=0, val=0;

		nums = stackInit(100);
		calcs = stackInit(100);
		for(i=0;i<len;i++){
			if((str_ch[i]=='[') || (str_ch[i]=='{'))
				str_ch[i] = '(';
			if(str_ch[i]==']' || str_ch[i]=='}')
				str_ch[i]=')';
		}
		if(str_ch[0]=='-'){
			str[j++] = '0';
			str[j++] = str_ch[0];
		}
		else
			str[j++] = str_ch[0];
		for(i=1;i<len;i++){
			if(str_ch[i] =='-' && (str_ch[i-1]=='(')){
				str[j++] = '0';
				str[j++] = str_ch[i];
			}
			else
				str[j++] = str_ch[i];
		}
		len = strlen(str);
		for(i=0;i<len;i++) {
			if(str[i] == '(')
				stackPush(calcs,str[i]);
			else if (str[i]==')') {
				while ((c1 = stackTop(calcs)) != '(') {
					c1 = stackPop(calcs);
					n2 = stackPop(nums);
					n1 = stackPop(nums);
					temp = calcpro(n1, n2, c1);
					stackPush(nums, temp);
				}
				c1=stackPop(calcs);
			}
			else if((str[i]=='+') ||(str[i]=='-') || (str[i] == '*') || (str[i] == '/') ) {
				if(stackEmpty(calcs))
					stackPush(calcs,str[i]);
				else {
					c1 = stackTop(calcs);
					if(ishigh(c1, str[i]))
						stackPush(calcs,str[i]);
					else {
						c1 = stackPop(calcs);
						n2 = stackPop(nums);
						n1 = stackPop(nums);
						temp = calcpro(n1, n2, c1);
						stackPush(nums, temp);
						i--;
					}
				}
			}
			else if (isdigit(str[i])) {
				n1 = strtoul(&str[i], &p, 10);
				stackPush(nums,n1);
				i = p - 1 - str ;
			}
		}
		while(!stackEmpty(calcs)) {
			c1 = stackPop(calcs);
			n2 = stackPop(nums);
			n1 = stackPop(nums);
			temp = calcpro(n1, n2, c1);
			stackPush(nums, temp);
		}
		val = stackPop(nums);
		printf("%d\n",val);
		stackDestory(nums);
		stackDestory(calcs);
	}
	return 0;
}

// yes
// chao de
