//Assignment 2:
//WAP to calculate MSEB electricity bill of a customer input customer no.,
//old reading,new reading,unit  rate 5.00 per unit.
#include<stdio.h>
#include<conio.h>
void main()
{
int custmr_no,old_reading,new_reading;
float unit_rate=5.00,electricity_bill;
clrscr();
{
printf("Enter the customer number : ");
scanf("%d",&custmr_no);
printf("Enter the old reading : ");
scanf("%d",&old_reading);
printf("Enter the new reading : ");
scanf("%d",&new_reading);
if(old_reading>0)
{
electricity_bill=(old_reading+new_reading)*unit_rate;
printf("MSEB electricity bill : %f",electricity_bill);
}
else
{
electricity_bill=new_reading*unit_rate;
printf("MSEB electricity bill : %f",electricity_bill);
}
}
getch();
}