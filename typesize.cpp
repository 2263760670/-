// typesize.cpp : 定义控制台应用程序的入口点。
//
/* typesize.c -- 输出类型的大小 */

/*
    时间:2018年06月06日 23:39:52
    代码:程序清单3.8_typesize.c程序_《C Primer Plus》P52
    目的: 使用 %u, sizeof(数据类型),输出数据类型的字节大小 
*/
#include "stdio.h"


int main(void)
{
/* c99 为类型大小提供了一个%zd 说明符(输出控制符) */

    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type char has a size of %u bytes.\n", sizeof(char));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type double has a size of %u bytes.\n",
    sizeof(double));    //此行连接上行末尾,两行是一个语句,不可在双引号或单词中间断行;
    getchar();

    return 0;
}