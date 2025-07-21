#include<stdio.h>
int main()
{
    int pid1,pid2,pid3,pqty1,pqty2,pqty3,dis_per;
    float pname1,pname2,pname3,pprice1,pprice2,pprice3;
    float total,dis_amt,pay_amt,discount;
    char n1[50],n2[50],n3[50];
    FILE *fp;

    fp = fopen("Result.txt", "w");

printf("1st product:\nEnter Id:");
    scanf("%d",&pid1);
    printf("Enter name of product:");
    scanf("%s",&pname1);
    printf("\nprice of the product:");
    scanf("%f",&pprice1);
    printf("Quantity of the product:");
    scanf("%d",&pqty1);

    printf("2nd product:\nEnter Id:");
    scanf("%d",&pid2);
    printf("Enter name of product:");
    scanf("%s",&pname2);
    printf("\nprice of the product:");
    scanf("%f",&pprice2);
    printf("Quantity of the product:");
    scanf("%d",&pqty2);

    printf("3rd product:\nEnter Id:");
    scanf("%d",&pid3);
    printf("Enter name of product:");
    scanf("%s",&pname3);
    printf("\nprice of the product:");
    scanf("%f",&pprice3);
    printf("Quantity of the product:");
    scanf("%d",&pqty3);

    total=(pprice1*pqty1)+(pprice2*pqty2)+(pprice3*pqty3);
    if(total>=100000)
    discount=10;
else if(total>=80000)
discount=8;
else if(total>=50000)
discount=5;
else if(total>=30000)
discount=3;
else
discount=0;

dis_amt=(total*dis_per)/100;
pay_amt=total - dis_amt;

printf("\n---------------------------------------------------------------------------");
printf("\n| ID  |    Name     |     Price      |        Qty    |            Total    |");
printf("\n---------------------------------------------------------------------------|");
printf("\n|%5d|%13s|%16f|%15f|%21f|",pid1 , pname2 , pprice1 ,pqty1 ,(pprice1 * pqty1));
printf("\n---------------------------------------------------------------------------|");
printf("\n|%5d|%13s|%16f|%15f|%21f|",pid2  , pname2 , pprice2 ,pqty2 ,(pprice2 * pqty2));
printf("\n---------------------------------------------------------------------------|");
printf("\n|%5d|%13s|%16f|%15f|%21f|",pid3  , pname3 , pprice3 ,pqty3 ,(pprice3 * pqty3));
printf("\n---------------------------------------------------------------------------|");
printf("\n\t\t\t\tTotal                       :%.2f",total);
printf("\n\t\t\t\tDiscount percentage (%%)    :%.2f",dis_per);
printf("\n\t\t\t\tDiscount Amount             :%.2f",dis_amt);
printf("\n\t\t\t\tPay Amount                  :%.2f",pay_amt);
return 0;
    }