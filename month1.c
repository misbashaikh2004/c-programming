#include<stdio.h>
int main()
{
    int month_no;
    printf("Enter the Month no:");
    scanf("%d",&month_no);
    switch(month_no)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 10:
        case 12:
        printf("31 Days");
        break;
        case 2:
        printf("28 Days");
        break;
        case 4:
        case 6:
        case 3:
        case 8:
        printf("31 Days");
        break;
        case 9:
        default:
        printf("Invalid month");
    }
    return 0;
}
