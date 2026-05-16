#include<iostream>
using namespace std;

class Array
{
    public:
    bool CheckSorted(int Arr[], int iSize)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize - 1; iCnt++)
        {
            if(Arr[iCnt] > Arr[iCnt + 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int iLength = 0;
    bool bRet = false;

    cout<<"Enter the number of elements : ";
    cin>>iLength;

    int *Arr = new int[iLength];

    cout<<"Enter elemets : \n";
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Array aobj;

    bRet = aobj.CheckSorted(Arr,iLength);

    if(bRet == true)
    {
        cout<<"Array is sorted : \n";
    }
    else
    {
        cout<<"Array is not sorted : \n";
    }

    return 0;





    
}