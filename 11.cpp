#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int count=0;
    printf("输入一个自然数:");
    scanf("%d",&num1);
    printf("输入num2(0-9):");
    scanf("%d",&num2);
    
    while(num1>0)
    {
        if(num1%10==num2)
        {
            count++;
        }
        num1=num1/10;
    }
    printf("num2在自然数中出现了%d次",count);
    return 0;
}