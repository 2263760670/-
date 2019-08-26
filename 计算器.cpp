#include<stdio.h>
int main() {
double num1 = 0; //输入1
double num2 = 0; //输入2
char ch; //操作
double ret = 0; //结果 printf( "输入第一个数:" );
scanf( "%lf", &num1 );
printf( "输入第二个数:" );
scanf( "%lf", &num2 );
printf( "操作[+ - * /]:" );
getchar();
scanf( "%c", &ch ); switch( ch ) {
case '+':
ret = num1 + num2;
break;
case '-':
ret = num1 - num2;
break;
case '*':
ret = num1 * num2;
break;
case '/':
ret = num1 / num2;
break;
default:
break;
}
printf( "结果:%.2lf\n", ret ); return 0;
}