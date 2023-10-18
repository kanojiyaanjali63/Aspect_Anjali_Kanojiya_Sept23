//Assigment 2
//WAP to calculate prize of product input total bill,quantities of product.
main()
{
int quantity,price;
float rate;
clrscr();
printf("Enter the quantity : ");
scanf("%d",&quantity);
printf("Enter the price : ");
scanf("%d",&price);
rate=quantity/price;
//bill=rate*quantity;
printf("Rate= %f",rate);
getch();
}