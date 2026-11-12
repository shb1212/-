

#include<stdio.h>
int main()
{
    char choice;
    double number1,number2;
    double result;
    printf ("您要进行加法(A),减法(S),乘法(M)还是除法(D)?");
    scanf("%c",&choice);

    printf("输入第一个数字:");
    scanf("%lf",&number1);
    printf("输入第二个数字:");
    scanf("%lf",&number2);

    switch(choice)
    {
        case'A':
        case'a':
            result=number1+number2;
            printf("%f",result);
            break;

        case'S':
        case's':
            result=number1-number2;
            printf("%f",result);
            break;
        
        case'M':
        case'm':
            result=number1*number2;
            printf("%f",result);
            break;

        case'D':
        case'd':
            if (number2 !=0)
            {
            result=number1/number2;
            printf("%f",result);
    }
        else{
            printf("错误:除数不能为零！");

        }
            break;
        default:
            printf("错误:无效操作符,请输入A,S,M或D");
            break;
    }
    return 0;
}