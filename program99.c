
//Input: Row:4 Col:4

/*
output:

A
B       B
C       C       C
D       D       D       D


*/


#include<stdio.h>


void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
     char ch='\0';
     if(iRow==iCol)
     {
         return;
     }
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for(j=1;j<=i;j++)
        {
        
           printf("%c\t",ch) ;
         
         }
        printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter a number of rows");
    scanf("%d",&iValue1);

    printf("Enter a number of columns");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

return 0;
}
