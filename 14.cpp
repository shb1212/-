#include<stdio.h>
struct snake
{ 
    int l;
    
    snake() :l(3){}
    
        bool eat(int f)
        {
            if(f>l)
            {
                return false;
            
        }else{
            l+=f;
            return true;
        }
    
}
};
int main()
{
    snake snake;
    int f;
    while(true)
    {
        printf("输入食物大小:");
        scanf("%d",&f);
        if(!snake.eat(f))
        {
            printf("蛇在吃比他大的食物的时候死了.总长度为%d米",snake.l);
            break;
        }
    }
return 0;
}
