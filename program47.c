//accept number and Display Even digits
 
#include<stdio.h>
void DisplayEvenDigits(int iNo)
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
          printf("%d",irem);
        }
      
        iNo=iNo/10;
         
    } 
  
}
int main()
{

    int iValue=0;
    
    printf("Enter a number");
    scanf("%d",&iValue);
   DisplayEvenDigits(iValue);
 
    return 0;
}