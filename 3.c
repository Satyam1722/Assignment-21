#include<stdio.h>
struct Employee
{
    int id;
    char name[100];
    float salary;
};

void display(struct Employee e){

    printf("\n\n%d ",e.id);
    fflush(stdin);
    printf("%s ",e.name);
    printf("%f ",e.salary);

}

struct Employee input(struct Employee e){
    printf("enter employee id ,name and salary  : \n");
    scanf("%d",&e.id);
    fflush(stdin);
    scanf("%s",e.name);
    scanf("%f",&e.salary);
    return e;

}

int main()
{
    struct Employee e;

    e=input(e);
    display(e);

    return 0;
}


