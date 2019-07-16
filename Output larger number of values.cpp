#include<stdio.h>
int max(int a,int b);
int main(void)
{
    int x,y,z;
    int max(int a,int b);
	printf("输入两个数：\n");
	scanf("%d%d",&x,&y);
	z=max(x,y);
	printf("maxmum=%d",z);
}
int max(int a,int b)
{
	if(a>b)return a;else return b;
	}