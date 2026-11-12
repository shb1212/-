#include<stdio.h>
int main()
{
    int year;
    printf("请输入年份:");
    scanf("%d",&year);
    if(year<=0)
    {
        printf("年份不能为0或者是负数");
    }
    else
    {
        int century;
        
        century=(year-1)/100+1;
        printf("世纪:%d\n",century); 
        

    }
    return 0;
}