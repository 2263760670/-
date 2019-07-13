#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("随机数字：%d\n",rand());

    int hp1 = 100,hp2 = 100;
    int att1,att2;
    int i = 1;

    while(hp1>=0&&hp2>=0)
    {
        att1=rand()%11+5;
        att2=rand()%11+5;
        hp2-=att1;
        hp1-=att2;
        if(hp1<=0)
        {
            printf("玩家1受到攻击%d\n",att2);
            printf("玩家1输\n");
            break;
        }

        if(hp2<=0)
        {
            printf("玩家2受到攻击%d\n",att1);
            printf("玩家2输\n");
            break;
        }

        printf("**************************\n");
        printf("第%d轮\n",i);
        printf("玩家2剩余血量%d\n",hp2);
        printf("玩家1剩余血量%d\n",hp1);
        i++;
    }
    printf("************************\n");
    printf("游戏结束");
    return 0;
}