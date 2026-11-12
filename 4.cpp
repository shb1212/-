#include<stdio.h>
int main()
{
    int x;
    double price=95.125;
    double totalcost;
    {
        printf(" 你想购买多少台电脑:");
        scanf ("%d",&x);
        totalcost=x*price;
        printf ("购买%d台电脑需要%f个硬币",x,totalcost);
    }
    return 0;
}