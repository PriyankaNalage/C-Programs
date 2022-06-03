
//program to Accept no from user and display Addition of these number
  
#include<stdio.h>
int Summation(int iNo)
{
    int iCnt=0;
    int iSum=0;
     if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
        
    } 
    
    return iSum;
     
}
int main()
{
int iValue=0;
printf("Enter the number\n");
scanf("%d",&iValue);     
  int iRet=0;
   iRet= Summation(iValue);
   printf("%d",iRet);
    return 0;
}
 
 