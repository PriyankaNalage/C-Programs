//Write a program addtion of two numbers
#include<stdio.h>
int main()
{
int iNo1;
int iNo2;
printf("Enter first number\n");
scanf("%d",&iNo1);

printf("Enter second number\n");
scanf("%d",&iNo2);
int Add=0,Sub=0,Mult=0,Div=0,Mod=0;


Add=iNo1+iNo2;
Sub=iNo1-iNo2;
Mult=iNo1*iNo2;
Div=iNo1/iNo2;
Mod=iNo1%iNo2;

printf("Addition is:%d\n",Add);
printf("Substraction is:%d\n",Sub);
printf("Multiplication is:%d\n",Mult);
printf("Division is:%d\n",Div);
printf("Remainder is:%d\n",Mod);
return 0;
}

