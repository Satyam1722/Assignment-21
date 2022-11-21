#include<stdio.h>
struct Employee
{
    int id;
    char name[100];
    float salary;
};

void display(struct Employee e)
{

    printf("\n%d ",e.id);
    fflush(stdin);
    printf("%s ",e.name);
    printf("%f ",e.salary);

}

struct Employee input(struct Employee e)
{
    printf("enter employee id ,name and salary  : \n");
    scanf("%d",&e.id);
    fflush(stdin);
    scanf("%s",e.name);
    scanf("%f",&e.salary);
    return e;

}
struct Employee h_s(struct Employee e[] )
{
    int i;
    float max;
    struct Employee s;
    max=e[0].salary;
    for(i=1; i<10; i++)
        {
            if(max<e[i].salary)
                {
                    s=e[i];
                    max=e[i].salary;
                }

        }
     return s;

}

int main()
{
    struct Employee e[10],h;
    int i;
    for(i=0; i<10; i++)
        e[i]=input(e[i]);

    h=h_s(e);
    printf("highest salary is %s",h.name);



    return 0;
}



