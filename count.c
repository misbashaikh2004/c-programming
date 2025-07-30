#include<stdio.h>
int main()
{
    int n,cnt;
    printf("enter a no:");
    scanf("%d",&n);
    cnt=0;
    //AcceptN;
    while(n>0)
    {
        cnt++;
        n= n/ 10;
    }
    printf("count is %d",cnt);
    return 0;
}