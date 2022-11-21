#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

int main()
{

    struct time a,b;
    printf("enter 1 time hr min sec : ");
    scanf("%d%d%d",&a.hour,&a.min,&a.sec);
    printf("enter 2 time hr min sec : ");
    scanf("%d%d%d",&b.hour,&b.min,&b.sec);

    if(a.sec-b.sec<0)
        {
            a.sec=60+(a.sec-b.sec);
            a.min--;
        }
    else
        a.sec=a.sec-b.sec;

    if(a.min-b.min<0)
        {
            a.min=60+(a.min-b.min);
            a.hour--;
        }
    else
        a.min=a.min-b.min;

    a.hour=a.hour-b.hour;

    printf("%d %d %d ",a.hour,a.min,a.sec);


    return 0;
}
