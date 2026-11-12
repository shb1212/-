#include<stdio.h>
#include<stdlib.h>
#define PASSWORD 123456
int errorcount=0;
char password[50];
int checkpassword();
void showmenu();
void showmenu(){
    printf("1.我要好好学习\n");
    printf("2.我要女朋友\n");
    printf("3.我要变有钱\n");
    printf("4.我要变成技术大佬\n");
}
void option1goodstudy()
{
    int num;
    printf("请输入一个正整数:");
    scanf("%d",&num);
    if(num<=0){
        printf("Care for mentally retarded children,we stay together");
    }else{
        printf("\n%d的乘法口诀如下:\n",num);
        for(int i=1;i<=9;i++){
            printf("%d*%d=%d\n",i,num,i*num);
        }
        
    }
}
void option2girlfriend()
{
    char choice;
    printf("吾日三省吾身:高否,帅否,富否\n");
    printf("请输入你的回答(y/n):");
    scanf(" %c",&choice);
    if(choice=='n'||choice=='N')
    {
        printf("滚去学习\n");
        option1goodstudy();
    }else{
        printf("是,那就更要学习了\n");
        option1goodstudy();
    }
}
void option3money()
{
    char choice;
    printf("有钱后想干嘛\n");
    printf("A.找女朋友\n");
    printf("B.买同济版高等数学,好好学习\n");
    scanf(" %c",&choice);
    if(choice=='a'||choice=='A')
    {
        option2girlfriend();
    }else if(choice=='b'||choice=='B')
    {
        option1goodstudy();
    }
}
void option4boss()
{
    char choice;
    printf("你为什么学技术?\n");
    printf("A.为了变有钱\n");
    printf("B.因为我热爱学习\n");
    scanf(" %c",&choice);
    if(choice=='a'||choice=='A')
    {
        option3money();
    }else if(choice=='b'||choice=='B')
    {
        int num;
        printf("请输入一个正整数:\n");
        scanf("%d",&num);
        if (num<=0){
            printf("you are such asweet little fool\n");
        }else{
            printf("既然热爱学习那就加油吧\n");
        }
    }else{
        printf("无效选择\n");
    }
}
int checkpassword()
{
    int input;
    int errorcount=0;
    while(1)
    {
        printf("请输入6位密码:");
        scanf("%d",&input);
        if(input==PASSWORD){
            errorcount=0;
            return 1;
        }else{
            errorcount++;
            if(errorcount>=3)
            {
                return 0;
            }
            printf("密码错误,请重新输入!\n");
        }
    }
}
int main()
{
    int choice;
    int loop=1;
    printf("please enter your password:\n");
    if(checkpassword()){
        while(1)
        {
            showmenu();
            printf("请输入选项(1-4):");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                option1goodstudy();
                break;
                case 2:
                option2girlfriend();
                break;
                case 3:
                option3money();
                break;
                case 4:
                option4boss();
                break;
                default:
                printf("输入无效,请重新输入\n");
                break;
            }
            printf("\n按回车继续...\n");
            getchar();
            getchar();
        }
    }else{
        printf("你已经3次输入错误,you are a bad boy!");
    }
    return 0;
}