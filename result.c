#include<stdio.h>
int main()
{
    int x,y,result=1,i=1;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    i=1;
    while(i<=y)
    {
        result= result * x;
        i++;
    }
        printf("the answer is %d\n",result);
    return 0;
}