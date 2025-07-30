#include<stdio.h>
int main()
{
    int cnt=0,i,n;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n % i== 0)
        cnt++;
    }
    if(cnt==2)
    printf("Prime");
else
printf("not prime");
return 0;
}