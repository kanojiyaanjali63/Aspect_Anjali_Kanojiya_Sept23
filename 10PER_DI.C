//Assignment 2 :
//WAP to calculate total bill of a product with 20%  discount input product
//rate,product quantity.
#include<stdio.h>
#include<conio.h>
void main()
{
int quantity,price;
float rate,bill,total_bill;
clrscr();
{
printf("Enter the quantity : ");
scanf("%d",&quantity);
printf("Enter the price : ");
scanf("%d",&price);
rate=quantity/price;
printf("\nrate = %f",rate);
bill=quantity*rate;
printf("\nBill= %f",bill);
total_bill=bill-(bill*20/100);
printf("\n Total bill after 20 percent discount : %f",total_bill);
}
getch();
}