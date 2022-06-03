  //Input: Row:4 Col:4

/*
 Output:
   
   $  *  *  *
   #  $  *  *
   #  #  $  *
   #  #  #  $
   
*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
    if(iRow!=iCol)
    {
        return;
    }

    for(i=1;i<=iRow;i++)  //outer
    {
        for(j=1;j<=iCol;j++)  //inner
        {
            if(i==j)
            {
              printf("$\t");  
            }
            else if(i>j) {
                printf("#\t");
            }
            else  
            {
                printf("*\t");
            }
             
             
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf(" Enter number of rows");
    scanf("%d",&iValue1);

   printf(" Enter number of Columns");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
//complexity=n^2