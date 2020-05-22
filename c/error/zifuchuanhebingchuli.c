// ----------------------------------------------------------------------------
// File Name     : zifuchuanhebingchuli.c
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
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char bitdaoxu(char *str)
{
    char str_o;
    switch(*str){
            case '0' : str_o = '0'; break;//0000
            case '1' : str_o = '8'; break;//0001
            case '2' : str_o = '4'; break;//0010
            case '3' : str_o = 'C'; break;//0011
            case '4' : str_o = '2'; break;//0100
            case '5' : str_o = 'A'; break;//0101
            case '6' : str_o = '6'; break;//0110
            case '7' : str_o = 'e'; break;//0111
            case '8' : str_o = '1'; break;//1000
            case '9' : str_o = '9'; break;//1001
            case 'a' : str_o = '5'; break;//1010
            case 'A' : str_o = '5'; break;
            case 'b' : str_o = 'D'; break;//1011
            case 'B' : str_o = 'D'; break;
            case 'c' : str_o = '3'; break;//1100
            case 'C' : str_o = '3'; break;
            case 'd' : str_o = 'B'; break;//1101
            case 'D' : str_o = 'B'; break;
            case 'e' : str_o = '7'; break;//1110
            case 'E' : str_o = '7'; break;
            case 'f' : str_o = 'F'; break;//1111
            case 'F' : str_o = 'F'; break;
            default  : ;
    }

    return str_o;
}



int main()
{
    char str1[1000];
    char str2[1000];
    char str_o[1000];
    while(scanf("%s %s",str1,str2))
    {
        //scanf("%s %s",str1,str2);
        printf("%s\n",str1);
        printf("%s\n",str2);
        //break;
    }
    return 0;
}
