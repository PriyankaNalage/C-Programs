#include<stdio.h>
 
void  DisplayNonFactors(int iNo)
{ 
   if(iNo<0)
   {
      iNo=-iNo;
   }
   int iCnt=0;
   for(iCnt=1;iCnt<(iNo);iCnt++)
   {
      if((iNo%iCnt)!=0)
      {
         
         printf("%d\n",iCnt);
      }
   }
    

}

int main()
{
   int iValue=0;
   printf("Enter number:\n");
   scanf("%d",&iValue);
  
   
   DisplayNonFactors(iValue);
   return 0;
}

//Time complexity:O(N/2)