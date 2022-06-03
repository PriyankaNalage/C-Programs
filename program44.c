//Display number of digits 
 
#include<stdio.h>
int CountDigits(int iNo)
{
    int rem=0;
    int iCnt=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   
    while(iNo>0)
   {
        rem=iNo%10;
       iCnt++;
        iNo=iNo/10;
         
    } 
   return iCnt;
}
int main()
{

    int iValue=0;
    int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);
   iRet= CountDigits(iValue);
printf("Number of digits of number is:%d",iRet);
    return 0;
}