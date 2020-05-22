// ----------------------------------------------------------------------------
// File Name     : zuixiaotiaoyuecishu.c
// Author        : gsj
// E-MAIL        : guosijia@sylincom.com
// Created Date  : 2020.05.21
// ----------------------------------------------------------------------------
// Version       : 20200521
// Modified Date : 2020.05.21
// Modified by   : gsj   guosijia@sylincom.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

/******************************************************************
* 题目描述：给出一组正整数，你从第一个数向最后一个数方向跳跃，
* 		每次至少跳跃1格，每个数字的值表示你这个位置可以跳跃的最大长度。
* 		计算如何以最少的跳跃次数跳到最后一个数。
* 输入描述：
* 		第一行表示有多少个数n 
* 		第二行依次是1到n，一个数一行。
* 输出描述：
* 		输出一行，表示跳跃最少的次数
*****************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
 
#define NUM_BUF_SIZE		100		/* 最大可存储的数字数量 */
 
int main()
{
	int input[NUM_BUF_SIZE],res[NUM_BUF_SIZE];
	int num;
	int i=0,j=0;
	int temp = INT_MAX;
	
	scanf("%d",&num);
	
	memset(input,0,sizeof(input));
	memset(res,0,sizeof(res));
	
	while(i<num)
	{
		scanf("%d",&input[i]);
		i++;
	}
    
    for (i = 1; i < num; i++)
    {
        temp = INT_MAX;
        for (j = 0; j < i; j++)
        {
			printf("\ni = %d, j = %d.\n",i,j);
            if (input[j] + j >= i)			/* 找到可以跳出当前的点的值 */
            {
				printf("tmp is %d,,,\n",temp);
                temp = temp <= (res[j] + 1) ? temp : (res[j] + 1);
				printf("temp is %d, res[%d] is %d\n",temp,j,res[j]);
            }
        }
        res[i] = temp;
		printf("i:res[%d] is %d,temp is %d. \n\n\n\n",i,res[i],temp);
    }
	printf("%d\n",res[num-1]);
}

