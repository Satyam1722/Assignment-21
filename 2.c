#include<stdio.h>
struct Employee
{
    int id;
    char name[100];
    float salary;
};

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


    return 0;
}

