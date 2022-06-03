
// Input: Row:4 Col:4

/*
output:

*       *       *       $
*       *       $       *
*       $       *       *
$       *       *       *




i\j    4   3    2   1
1     14   13   12  11   
2     24   23   22  21
3     34   33   32  31
4     44   43   42  41


diagonal milto 
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{

    int i = 0;
    int j = 0;

    if (iRow != iCol)
    {
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = iCol; j >= 1; j--)
        {
            if (i == j)
            {
                printf("$\t");
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
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter a number of rows");
    scanf("%d", &iValue1);

    printf("Enter a number of columns");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
