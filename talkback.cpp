#include<stdio.h>
#include<string.h>
//提供strlen()函数的原型
#define DENSITY 62.4
 //人体密度 磅/立方英尺
int main()
{
	float weight, volume;
	int size,letters;
	char name[40];
	//name 是可容纳40个字符的数组
	printf("你好，你叫什么名字？\n");
	scanf("%s",name);
	printf("%s,你的体重价值多少磅？\n",name);
	scanf("%f",&weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("好的，%s,你的体重价值%2.2f  每立方英尺\n",name,volume);
	printf("你的姓有 %d 个字符\n",letters);
	printf(" 你的名字我用了 %d 个字节存储 ",size);
	return 0;
	}