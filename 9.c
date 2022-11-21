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
    int n;
    printf("enter number of student : ");
    scanf("%d",&n);
    struct Student e[n];

    for(int i=0;i<n;i++)
    e[i]=input(e[i]);

    for(int i=0;i<n;i++)
    display(e[i]);

    return 0;
}




