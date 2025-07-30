//Sum of digit no

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i;
printf("Addition of %d to %d is %d ",1,n,sum);
return 0;
}