#include<stdio.h>
int main()
{
   int income;
   int totalincome=0;
   while (totalincome<200)
   {
    printf("收入输入:");
 
    scanf("%d",&income);
    if(totalincome+income>=200)
    {
        totalincome+=income;
        break;
    }
    else 
    {
         totalincome+=income;
    }

   }
    printf("你已经挣了%d元了,可以休息\n了",totalincome);

   return 0;
}