 
   
//Input: 4
//output: 1 * 3 * 5 *

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++) //sequencial loop
    {
        if(iCnt%2==0)
        {
            printf("*\t");
        }
        else{
            printf("%d\t",iCnt);
        }
         
   }
  
    //Time Complexity=2n+1
}
int main()
{
    int iValue=0;
    printf("Please enter the value");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
} 
    
    
    
    
    
    
    
     