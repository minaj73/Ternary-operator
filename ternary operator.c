#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    printf("\n enter two numbers");
    scanf("%d%d",&no1,&no2);
    if(no1==no2)
    {
        printf("\n both numbers are equal");
    }
    else
    {
    (no1>no2)?printf("\n %d is greater",no1):printf("\n %d is greater",no2);
    }
    getch();
    return 0;
}
