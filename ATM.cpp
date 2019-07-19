//ATM自动取款机C语言源代码
#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice(int n,int money);
int balance=1000000;
int password,m=0;
int n=0;
printf("\n\n\n\n\n\n\n\n");
printf("                欢迎使用ATM自动取款机!\n");
printf("              welcome to this system \n\n");
printf("                    按回车键继续\n");
printf("                press Enter to continue\n");
getchar();
system("cls");
do
{
if (n==0)
{
printf("\n\n\n\n\n\n\n\n\n");
printf("              请输入您的密码\n");
printf("        please input your password\n");
}
else
{
printf("          您输入的密码有误,请重新输入:\n");
printf("    The password is wrong,please input again:\n");
}
scanf("%d",&password);
n++;
}
while (password!=123456&&n!=3);
system("cls");
if (password==123456)
do
{
printf("\n\n\n\n\n\n\n\n");
printf("          欢迎使用ATM自动取款机!\n");
printf("        welcome to this system of ATM! \n");
printf("        ********************************\n");
printf("            1.取款 Debit Withdrawal \n");
printf("            2.存款 Credit Deposit\n");   
printf("            3.余额查询 Seek\n");
printf("            4.退出 Exit\n");
printf("        ********************************\n");
choice(m,balance);
printf("                继续请输入Y\n");
printf("        If you want to continue ,Press Y\n");
getchar();
}
while(getchar()=='Y');
else
{
printf("\n\n\n\n\n\n\n\n");
printf("    您好,由于您三次输入密码有误,我们将没收您的卡,请您在一周内持有效证件于银行办理取卡手续.\n");
printf( "  your password is wrong, we will sequestrate you card,please take you effective papers come to bank get your card back\n ");
}
}
int choice(int n,int money)
{
int m=0;
static int flag=1000000;
printf("            请输入你的选择\n");
printf("            please choice: \n ");
scanf("%d",&n);
system("cls");
if(n==1)
{
printf("\n\n\n\n\n\n\n\n");
printf("              请输入取款金额:\n");
printf("    please input what you want to debit:");
scanf("%d",&m);
flag=flag-m;
printf("\n");
printf("              请稍后...\n");
printf("            please wait...\n\n");
printf("            您的余额为 balance:%d \n\n\n ",flag);
printf("              交易成功!\n");
printf("        the transaction succeed!\n");
}
else if(n==2)
{
printf("          请输入您要存入的金额:\n");
printf("    please input what you want to credit:");
scanf("%d",&m);
flag=flag+m;
printf("\n");
printf("              请稍后...\n");
printf("            please wait...\n\n\n");
printf("            您的余额为 balance:%d \n\n\n",flag);
printf("                交易成功!\n");
printf("        the transaction succeed!\n\n");
}
else if(n==3)
{
printf("            请稍后...\n");
printf("            please wait...\n\n");
printf("            您的余额为 balance:%d元\n\n",flag);
}
else if(n==4)
{
printf("            请取卡,谢谢使用!\n");
printf("        please take you card!\n");
}
else
{
printf("          输入错误!\n");
printf("            Error!\n");
}
return flag;
}