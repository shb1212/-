#include<stdio.h>
 typedef struct student_struct
{
    char name[50];
    char gender[10];
    int id;
}student;
void swapstudent(student*a,student*b){
student t=*a;
*a=*b;
*b=t;
}
void printstudent(student s){
    printf("姓名%s 学号%d 性别%s",s.name,s.id,s.gender);
}
int main(void)
{
    student student1,student2;
    printf("请输入学生1的信息(姓名,学号,性别)\n");
    scanf("%s %d %s",student1.name,&student1.id,student1.gender);
    printf("请输入学生2的信息(姓名,学号,性别)\n");
    scanf("%s %d %s",student2.name,&student2.id,student2.gender);
    printf("交换前:\n");
    printf("student1--");printstudent(student1);
    printf("student2--");printstudent(student2);
    swapstudent(&student1,&student2);
    printf("交换后:\n");
    printf("student1--");printstudent(student1);
    printf("student2--");printstudent(student2);
    return 0;
}