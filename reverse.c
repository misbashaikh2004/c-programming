#include<stdio.h>
int main()
{
    int n,result=0;
    printf("Enter a no:");
    scanf("%d",&n);
   while(n>0)                  
    {
        int rem=n%10;
        result=result*10+rem;
        n=n/10;
    }
    printf("reverse no is %d",result);
    return 0;
}