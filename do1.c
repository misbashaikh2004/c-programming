#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter no:");
scanf("%d",&n);
i=1;
do{
    sum=sum+i;
  printf("after adding %d,sum is%d\n",i,sum);
i++;
}while(i<=n);
printf("Addition of %d is %d\n",n,sum);
return 0;
}
