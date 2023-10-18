//Assignment 1
//1) WAP to find & calculate,sum,substraction,multiplication & division
// of 2 input number.
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,sum,sub,mul;
float div;
clrscr();
printf("Enter the number 1 : ");
scanf("%d",&num1);
printf("Enter the number 2 : ");
scanf("%d",&num2);
sum=num1+num2;
printf("\n Addition : %d",sum);
sub=num1-num2;
printf("\n Substraction : %d",sub);
mul=num1*num2;
printf("\n Multiplication : %d",mul);
div=num1/num2;
printf("\n Division : %f",div);
getch();
}

