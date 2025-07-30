#include<stdio.h>
int main()
{
    int x,y,result=1,i=1;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    i=1;
    do{
        result= result * x;
        i++;
    }while(i<=y);
        printf("%d is answer",result);
    return 0;
}
    