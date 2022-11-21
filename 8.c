#include<stdio.h>
struct Student
{
    int id,age;
    char name[100];
};

void display(struct Student e){

    printf("\n\n%d ",e.id);
    printf("%s ",e.name);
    printf("%d ",e.age);

}

struct Student input(struct Student e){
    printf("enter student id ,name and age  : \n");
    scanf("%d",&e.id);
    fflush(stdin);
    scanf("%s",e.name);
    scanf("%d",&e.age);
    return e;

}

int main()
{
    struct Student e[10];

    for(int i=0;i<10;i++)
    e[i]=input(e[i]);

    for(int i=0;i<10;i++)
    display(e[i]);

    return 0;
}



