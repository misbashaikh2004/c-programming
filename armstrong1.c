#include<stdio.h>
#include<math.h>
int main()
{
    int cnt=0,temp,n,rem;
    float result=0;
    printf("enter a no:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        cnt++;
        n=n / 10;
    }
    n=temp;
    while(n>0)
    {
        int rem=n % 10;
        result=result+pow(rem,cnt);
        n=n / 10;
    }
    if(result == temp){
    printf("Armstrong no");
    }
else
printf("Is not armstrong");
return 0;
}