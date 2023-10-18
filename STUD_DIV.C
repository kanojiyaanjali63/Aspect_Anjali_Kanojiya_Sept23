//Assignment 2
//WAP to calculate total marks,percentage of a student input score marks of
//english,maths,science.
main()
{
int eng,maths,sci,total_marks,per;
clrscr();
printf("Enter the English Marks :");
scanf("%d",&eng);
printf("Enter the Maths Marks :");
scanf("%d",&maths);
printf("Enter the Science Marks :");
scanf("%d",&sci);
total_marks=eng+maths+sci;
per=total_marks/3;
if((per>=35)&&(per<45))
{
printf("Result=Pass");
printf("\nDivision=C");
}
if((per>=45)&&(per<60))
{
printf("\nResult=Pass");
printf("\nDivision=B");
}
if((per>=60)&&(per<75))
{
printf("\nResult=Pass");
printf("\nDivision=A");
}
if(per>=75)
{
printf("\nResult=Pass");
printf("\nDivision=Distinction");
}
if(per<35)
{
printf("\nResult=Fail");
}
getch();
}

