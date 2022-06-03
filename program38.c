#include<stdio.h>
 

int CountFactors(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;
    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactCnt++;
        }
        
    }
 return iFactCnt;
}


int main()
{ 

int iValue=0;
   int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iRet=CountFactors(iValue);
  printf("Number of factors are:%d",iRet);
return 0;
}