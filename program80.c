
//Input: 4
//output:  -4 -3 -2 -1 0  1 2 3 4

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
     
    for(iCnt=iNo;iCnt<=iNo;iCnt++) //sequencial loop
    {
        printf("%d\t",iCnt);
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