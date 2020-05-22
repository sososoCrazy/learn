// ----------------------------------------------------------------------------
// File Name     : congdanxianglianbiaozhongshanchuzhidingzhidejiedian.c
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

struct ListNode {
	int m_nKey;
	struct ListNode* m_pNext;
};



int main()
{
	struct ListNode *listnode=NULL;
	struct ListNode *head = NULL;
	struct ListNode *node = NULL;
	int nodenum=0;
	int headnode=0;
	int prenode=0;
	while(scanf("%d %d",&nodenum,&headnode) !=EOF)
	{
		head = (struct ListNode*)malloc(sizeof(struct ListNode));
		head->m_nKey = headnode;
		head->m_pNext = NULL;
		listnode = head;
		for(int i=0;i<nodenum-1;i++)
		{
			node = (struct ListNode*)malloc(sizeof(struct ListNode));
			scanf("%d %d", &(node->m_nKey), &prenode);
			node->m_pNext = NULL;
			while (listnode->m_nKey != prenode)
			{
				listnode = listnode->m_pNext;
			}
			node->m_pNext = listnode->m_pNext;
			listnode->m_pNext = node;
			listnode = head;
		}
		int deletnode = 0;
		scanf("%d",&deletnode);
		listnode = head;
		while(listnode != NULL)
		{
			if(listnode->m_nKey != deletnode)
			{
				printf("%d ",listnode->m_nKey);
			}
			listnode = listnode->m_pNext;
		}
		printf("\n");
	}
	return 0;
}

// yes
// chao de

