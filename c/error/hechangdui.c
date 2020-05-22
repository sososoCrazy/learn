// ----------------------------------------------------------------------------
// File Name     : hechangdui.c
// Author        : gsj
// E-MAIL        : guosj.so@gmail.com
// Created Date  : 2020.05.09
// ----------------------------------------------------------------------------
// Version       : 20200509
// Modified Date : 2020.05.09
// Modified by   : gsj   guosj.so@gmail.com
// ----------------------------------------------------------------------------
// others        :
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int digui1(int *a,int i,int p,int ch,int k);
int digui2(int *a,int len,int i,int p,int ch,int k);

int minch1=0,minch2=0;

void main()
{
	int *a,num=0,i=0,j=0,p=0,ch=0,minch=0;
	scanf("%d",&num);
	minch=num;
	a=(int *)malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<num-1;i++)
	{
		minch1=num;
		minch2=num;
		digui1(a,i-1,i,0,i);
		digui2(a,num,i+1,i,0,i);
		ch=minch1 + minch2 ;
		if(ch<minch)
		{
			minch=ch;
		}
	}
	printf("%d\n",minch);

}


int digui1(int *a,int i,int p,int ch,int k)
{
	if(i==0)
	{
		if(a[i]<a[p])
		{
			if(ch<minch1)
				minch1=ch;
		}
		else
		{
			ch++;
			if(ch<minch1 && ch<k)
			{
				minch1 =ch;
			}
		}
		return 0;
	}
	else
	{
		digui1(a,i-1,p,ch+1,k);
	}
	return 0;
}


int digui2(int *a,int len,int i,int p,int ch,int k)
{
	if(i==len-1)
	{
		if(a[i]<a[p])
		{
			if(ch<minch2)
				minch2=ch;
		}
		else
		{
			ch++;
			if(ch<minch2 && ch<len-k-2)
				minch2=ch;
		}
		return 0;
	}
	else
	{
		if(a[i]<a[p])
		{
			digui2(a,len,i+1,i,ch,k);
			digui2(a,len,i+1,p,ch+1,k);
		}
		else
		{
			digui2(a,len,i+1,p,ch+1,k);
		}
		return 0;
	}
}




/*int main()
{
	int n;
	int height_i;
	int height[100];
	int i=0;
	int j;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			scanf("%d ",&height_i);
			height[i]=height_i;
		}
		else if(i==n-1)
		{
			scanf("%d",&height_i);
			height[i]=height_i;
		}
	}

	for(j=0;j<n;j++)
	{
		printf("%d\n",height[j]);
	}

	return 0;
}
*/
