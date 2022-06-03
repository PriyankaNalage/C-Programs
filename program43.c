//Display Digits of Number
/*
Input:98675
output:57689
*/
#include<stdio.h>
void DisplayDigits(int iNo)
{
    int rem=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
    while(iNo>0)
   {
        rem=iNo%10;
       printf("%d\t",rem);
        iNo=iNo/10;
         
    } 
   
}
int main()
{

    int iValue=0;
    printf("Enter a number");
    scanf("%d",&iValue);
    DisplayDigits(iValue);

    return 0;
}