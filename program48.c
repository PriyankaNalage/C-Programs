//accept number and Display addition of Even digits
 
#include<stdio.h>
int SumOfEvenDigits(int iNo)
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
        if(irem%2==0)
        {
          iSum=iSum+irem;
        }
      
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
  iRet= SumOfEvenDigits(iValue);
 printf("Summation of even digits is:%d",iRet);
    return 0;
}