#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    printf("\n enter two numbers");
    scanf("%d%d",&no1,&no2);
   (no1==no2)?(printf("\n equal")):((no1>no2)?printf("\n max=%d",no1):printf("\n max=%d",no2));
    return 0;
}
