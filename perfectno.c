#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n % i==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("perfect no");
else
printf("not perfect no");
return 0;
}