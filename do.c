#include<stdio.h>
int main()
{
int i,n;
printf("enter n");
scanf("%d",&n);
i=1;
do{
    printf("\n%d",i);
    i++;
}while(i<=n);
return 0;
}