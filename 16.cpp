#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char name[50];
    char gender[10];
    char id[20];
    float height;
}student;
void printstudentinfo(student*p_student)
{
    printf("姓名:%s",p_student->name);
    printf("学号:%d",p_student->id);
    printf("性别:%s",p_student->gender);
    printf("身高:%.2f",p_student->height);
}
int main()
{
    char username[50],password[50];
    int max_attempts=5;
    int current_attempt=0;
    int login_success=0;
    const char*admin_user="root";
    const char*admin_pass="010203";
    printf("欢迎进入系统,请输入账号和密码登录\n");
    while(current_attempt<max_attempts)
    {
        printf("请输入用户名:");
        scanf("%s",username);
        printf("请输入密码:");
        scanf("%s",password);
        if(username[0]==admin_user[0]&&password[0]==admin_pass[0])
        {
            login_success=1;
            break;
        }
        current_attempt++;
        if(current_attempt<max_attempts) 
        {
            printf("用户名或密码输入错误,还有%d次机会,请重新输入.\n",max_attempts-current_attempt);

        }
    }
    if(current_attempt>=max_attempts&&!login_success)
    {
        printf("哼,渣男,骗子\n");
        return 1;
    }
    printf("登录成功");
    student my_student;
    my_student.name[0]='\0';
    my_student.id[0]='0';
    my_student.gender[0]='\0';
    my_student.height=0.0;
    int choice;
    while(1)
    {
        printf("1.姓名:%.20s\n",my_student.name);
        printf("2.学号:%d\n",my_student.id);
        printf("3.性别:%s\n",my_student.gender);
        printf("4.身高:%.2f\n",my_student.height);
        printf("5.退出登录\n");
        printf("请输入选项(1-5):");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("请输入新的名字:");
                scanf("%S",my_student.name);
                break;
            case 2:
                printf("请输入新的学号:");
                scanf("%d",my_student.id);
                break;
            case 3:
                printf("请输入行的性别:");
                scanf("%s",my_student.gender);
                break;
            case 4:
                printf("请输入新的身高:");
                scanf("%.2f",my_student.height);
                break;
            case 5:
                printf("已退出运行");
                return 0; 
            default:
            printf("无效输入,请重新选择.");
            break;
        }
        
    }
    return 0;
}