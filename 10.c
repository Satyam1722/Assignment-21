#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float chem_marks,maths_marks,phy_marks;
};

int main()
{

    int i;
    float avg;
    struct student s[5];
    for(i=0; i<5; i++)
        {
            printf("enter %d student roll no ,name,chem,maths,phy marks : \n",i+1);
            scanf("%d",&s[i].roll_no);
            scanf("%s",&s[i].name);
            scanf("%f",&s[i].chem_marks);
            scanf("%f",&s[i].maths_marks);
            scanf("%f",&s[i].phy_marks);

        }

        for(i=0;i<5;i++){
            avg=s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
            printf("percentage of %d is %f \n",i+1,avg/5);
        }

    return 0;
}
