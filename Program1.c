#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    iRet = Divide(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Cannot divide by zero\n");
    }
    else
    {
        printf("Division is: %d\n", iRet);
    }

    return 0;
}