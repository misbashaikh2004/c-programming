#include<stdio.h>
int main()
{
    int x,y,result=1,i=1;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
        result= result * x;
        i++;
        printf("the answer is %d\n",result);
    return 0;
}