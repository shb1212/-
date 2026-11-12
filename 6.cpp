#include<stdio.h>
int main()
{
    char choice = 0;
    int count1;
    int count2;
    char delivery = 0;
    int totalprice;
    while(true)
    {
        printf("输入N计算新订单");
        printf("输入Q结束程序");
        scanf("%c" , &choice);
        if(choice=='Q')
        {
            break;
    
        }
        else if(choice=='N')
        {
            printf("披萨数量\n");
            scanf("%d",&count1);
            printf("配料数量\n");
            scanf("%d",&count2);
            printf("是否需要外送(Y/N)\n");
            scanf(" %c" , &delivery);
            totalprice=(count1*20)+(count2*2);
            if(delivery=='Y')
            {
                totalprice+=5;
            }
            printf("订单价格为%d个金币 , \n",totalprice);
        } else {
            printf("无效输入,请重新输入!");
        }
    }
    return 0;

}