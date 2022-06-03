#include "Header54.h"
int main()
{
   auto int iNum1=0;
    auto int iNum2=0;
    int lRet=0;
    printf("Enter a values of number");
    scanf("%d%d",&iNum1,&iNum2);
    lRet=Power(iNum1,iNum2);
    printf("power of number is:%ld",lRet);
    return 0;
}
 

 //Time Complexity is N