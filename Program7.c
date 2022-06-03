 #include<stdio.h>
 
int Addition(int,int);
//////////////////////////////////////
//Write a addition of two numbers
/////////////////////////////////////
 

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

//////////////////////////////////////
//Input: 10  20
//Output: 30
/////////////////////////////////////
