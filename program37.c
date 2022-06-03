#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

    }
}






int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter a number");
    scanf("%d",&iValue);
    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
    printf("%d is a prime number\n",iValue);
    }
    else
    {
      printf("%d is not a prime number\n",iValue);  
    }
return 0;
}



