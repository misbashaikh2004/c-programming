#include<stdio.h>
#include<ctype.h>
int main() 
{
    char ch;
    printf("Enter Anything:");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("Upper character");
    else if(islower(ch))
    printf("Lower character");
else if(isdigit(ch))
printf("digit");
else
printf("Special symbol");
return 0;
}