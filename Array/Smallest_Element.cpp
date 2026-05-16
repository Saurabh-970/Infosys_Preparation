#include<iostream>
using namespace std;

class Array
{
    public:
        int Smallest(int Arr[], int iSize)
        {
            int iCnt = 0;
            int iMax = 0;

            iMax = Arr[0];

            for(iCnt = 1; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMax)
                {
                    iMax = Arr[iCnt];
                }
            }
            return iMax;
        }
};

int main()
{
    int Arr[] = {11,21,51,101};
    int iRet  = 0;

    Array aobj;

    iRet = aobj.Smallest(Arr,4);

    cout<<"Smallest element is "<<iRet<<"\n";

    return 0;


}