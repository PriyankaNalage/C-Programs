//accept number and return summation of digits
//Display number of digits 
 
#include<stdio.h>
int SumOfDigits(int iNo)
{
    int irem=0;
    int iSum=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   
    while(iNo>0)
   {
        irem=iNo%10;
      iSum=iSum+irem;
        iNo=iNo/10;
         
    } 
   return iSum;
}
int main()
{

    int iValue=0;
    int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);
   iRet= SumOfDigits(iValue);
printf("Sum of digits is:%d",iRet);
    return 0;
}