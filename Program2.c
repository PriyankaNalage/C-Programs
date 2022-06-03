//Write a program addtion of two numbers
#include<stdio.h>
int main()
{
int i=10;
int j=20;
int Add=0,Sub=0,Mult=0,Div=0,Mod=0;


Add=i+j;
Sub=i-j;
Mult=i*j;
Div=j/i;
Mod=i%j;

printf("Addition is:%d\n",Add);
printf("Substraction is:%d\n",Sub);
printf("Multiplication is:%d\n",Mult);
printf("Division is:%d\n",Div);
printf("Remainder is:%d\n",Mod);
return 0;
}

