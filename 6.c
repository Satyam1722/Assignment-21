#include<stdio.h>
#include<string.h>
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
void sort_n(struct Employee e[],int n)
{
    int i,j;
    struct Employee temp;
    for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
                {
                    if(strcmp(e[i].name,e[j].name)>0)
                        {
                            temp=e[i];
                            e[i]=e[j];
                            e[j]=temp;
                        }
                }
        }


}

int main()
{
    int i,n;
    printf("enter the number of Employees\n");
    scanf("%d",&n);
    struct Employee e[n];
    for(i=0; i<n; i++)
        e[i]=input(e[i]);

        sort_n(e,n);

    for(i=0; i<n; i++)
        display(e[i]);



    return 0;
}





