#include<stdio.h>

int Largest(int Brr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Brr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] > iMax)
        {
            iMax = Brr[iCnt];
        }

    }
    return iMax;
}
int main()
{
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;
    
    iRet = Largest(Arr,5);

    printf("Largest element is %d: ", iRet);
}