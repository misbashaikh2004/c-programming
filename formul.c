#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter a no:");
    scanf("%d",&n);
    for(n=1;n>=2;n++)
    fact=fact*n;
n--;
    printf("factorial is %d",fact);
return 0;
}