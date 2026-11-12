#include<stdio.h>
int getprice(char type)
{
    switch(type)
    {
        case'W':return 5;
        case'O':return 10;
        case'T':return 7;
        case'C':return 8;
        default:return 0;
    }
}
int main()
{
    char choice;
    int weight;
    int totalincome=0;
    int currentprice=0;
    while(totalincome<1000)
    {
        printf("请输入类型 小麦(W),洋葱(O),西红柿(T)或者胡萝卜(C):");
        scanf(" %c",&choice);
        printf("请输入公斤数:");
        scanf("%d",&weight);
        currentprice=getprice(choice);
        if(currentprice==0)
        {
            printf("查无此物!");
            continue;
        }
        totalincome+=currentprice*weight;
    }
    printf("你已经获得了%d个金币了,休息一会吧!");
 return 0;
}

     

