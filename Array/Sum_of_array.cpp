#include<iostream>
using namespace std;

class Array
{
    public:
        int Summation(int Arr[], int iSize)
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 1; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int Arr[] = {11,21,51,101};
    int iRet = 0;

    Array aobj;

    iRet = aobj.Summation(Arr,4);

    cout<<"Summation os array is "<<iRet<<"\n";


}