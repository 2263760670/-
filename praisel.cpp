#include<stdio.h>
#define PRAISE "You are an extraordinary being"
int main(void)
{
	char name[40];
	printf("你叫什么名字？");
	scanf("%s",name);
	printf("你好,%s.%s\n",name,PRAISE);
	  return 0;
}