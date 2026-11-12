#include<stdio.h>
int main()
{
    int grid[3][3];
    int sum;int product;
    int vaild=1;
    int i; int j;
    for(int i=0;i<3;i++)
    {
        printf("请输入数字: \n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&grid[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
    sum=grid[i][0]+grid[i][1]+grid[i][2];
    product=grid[i][0]*grid[i][1]*grid[i][2];
    if(sum !=6||product !=6)
    {
        vaild=0;
        break;
    }
    }
    if(vaild)
    {
        for(int j=0;j<3;j++)
        {
            sum=grid[0][j]+grid[1][j]+grid[2][j];
            product=grid[j][0]*grid[j][1]*grid[j][2];
            if(sum !=6||product !=6)
            {
                vaild=0;
                break;
            }
        }
    }
    if(vaild)
    {
        printf("正确,您可以离开这里了");
    }else{
        printf("错误,您无法走出这里");
    }
    return 0;
}