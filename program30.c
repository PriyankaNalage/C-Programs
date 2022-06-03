#include<stdio.h>
 
int AdditionOfFactors(int iNo)
{ 
   if(iNo<0)
   {
      iNo=-iNo;
   }
   int iCnt=0;
   int iSum=0;
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         
         iSum=+iCnt;
        
      }
   }
   return iSum;
    

}

int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter number:\n");
   scanf("%d",&iValue);
  iRet=AdditionOfFactors(iValue);
     printf("Sum of Factors:%d\n",iRet);
   return 0;
}

 