
 //program to accept any number and check is  divisible by 2
#include<stdio.h>
 #include<stdbool.h>
bool checkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
        }
    else
    {
        return false;
    }
    
}
int main()
{
 int iValue=0;
 bool bRet=false;
 printf("Enter number\n");
 scanf("%d",&iValue);
 bRet=checkEven(iValue);
if(bRet==true)
{
    printf("%d is even number\n",iValue);
}
else
{
    printf("%d is odd number\n",iValue);
}
    return 0;
}
 
 