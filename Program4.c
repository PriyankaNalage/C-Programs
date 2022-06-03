#include<stdio.h>
 
int Addition(int ivalue1,int ivalue2)
{
int iAns=0;
iAns=ivalue1+ivalue2;
return iAns;

 
}
int main()
{
 int iNo1=0;
int iNo2=0;
int iNo3=0;
printf("Enter the first number\n");
scanf("%d",&iNo1);
printf("Enter the Second number\n");
scanf("%d",&iNo2);
iNo3=Addition(iNo1,iNo2);
printf("Addition of numbers is:%d",iNo3);

return 0;
}

 