#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("%c Capital letter");
else if(ch>='a' && ch<='z')
printf("%c Small Letter ");
else 
printf(" Special Symbol");
return 0;
}