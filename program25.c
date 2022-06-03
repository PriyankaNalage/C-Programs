 
 //program to accept any number and checkevenor odd
#include<stdio.h>
 #include<stdbool.h>
int checkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return 1;
        }
    else
    {
        return 0;
    }
    
}
int main()
{
 int iValue=0;
 int iRet=0;
 printf("Enter number\n");
 scanf("%d",&iValue);
 iRet=checkEven(iValue);
if(iRet==true)
{
    printf("%d is even number\n",iValue);
}
else
{
    printf("%d is odd number\n",iValue);
}
    return 0;
}
 
 