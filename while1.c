#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter 2 no:");
    scanf("%d",&n);
    i=1;
while(i<=n)
{
  sum=sum+i;
  //printf("after adding %d,sum is%d\n",i,sum);  printf("Addition of %d is %d\n",n,sum);
   i++;
   printf("Addition of %d is %d\n",n,sum);
}
return 0;
}