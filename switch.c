#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter choice");
    scanf("%d",&ch);
    printf("Enter 2 Numbers");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:printf("Addition is %d",(a+b));
        break;
         case 2:printf("Subtraction is %d",(a-b));
        break;
         case 3:printf("Multiplication is %d",(a*b));
        break;
         case 4:printf("Division is %d",(a/b));
        break;
        dafault:printf("invalid choice");
    }
        return 0;
    }