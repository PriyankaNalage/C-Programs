 
   
//Input: 4
//output: * 2 * 4

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++) //sequencial loop
    {
        if(iCnt%2==0)
        {
           printf("%d\t",iCnt);
        }
        else{
            printf("*\t");
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
    
    
    
    
    
    
    
     