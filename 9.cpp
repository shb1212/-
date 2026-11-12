#include<stdio.h>
int main()
{
    double fahrenheit;
    double celsius;
    printf("请输入华氏温度:");
    scanf("%lf",&fahrenheit);
    celsius=(fahrenheit-32)*5.0/9.0;
    printf("摄氏度为:%.2f",celsius);
    return 0;
}
