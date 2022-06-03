#include<stdio.h>
//Accept number from user and display its factors
/*
Input :10
Output: 1 2 5

Input :9
Output: 1 3

Input :17
Output: 1 

Input :20
Output: 1 2 4 5 10

Input :-20
Output: 1 2 4 5 10
*/
void  DisplayFactors(int iNo)
{ 
   if(iNo<0)
   {
      iNo=-iNo;
   }
   int iCnt=0;
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
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
  
   
   DisplayFactors(iValue);
   return 0;
}

//Time complexity:O(N/2)