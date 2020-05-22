// ----------------------------------------------------------------------------
// File Name     : shuchudanxianglianbiaozhongdaoshudikgejiedian.c
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
#define LEN sizeof(struct ListNode)
struct ListNode
{
	int data;
	struct ListNode *next;
}*head,*cur,*new;

int main()
{
	int len,i;
	while(scanf("%d",&len) != EOF)
	{
		head = (struct ListNode *)malloc(LEN);
		scanf("%d",&head->data);
		head->next = NULL;
		cur = head ;
		int count =1;

		int *p = (int *)calloc(len ,sizeof(int));
		p[0] = head->data;
		for(i=1;i<len;i++)
		{
			new = (struct ListNode *)malloc(LEN);
			scanf("%d",&new->data);
			p[i] = new->data;
			cur->next = new;
			new->next = NULL;
			count++;
		}
		int k;
		scanf("%d",&k);
		printf("%d\n",p[len - k]);
	}
	return 0;
}

// yes
// chao de
