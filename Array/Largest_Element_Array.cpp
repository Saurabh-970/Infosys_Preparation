// Largest element from the array
#include<iostream>
using namespace std;

class Marvellous
{
    public:
        int Largest(int Arr[], int iSize)
        {   
            int iCnt = 0;
            int iMax = 0;

            iMax = Arr[0];
            for(iCnt = 1; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iMax)
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
    int iRet = 0;

    Marvellous mobj;

    iRet = mobj.Largest(Arr,4);

    cout<<"Largest element is : "<<iRet<<"\n";

    return 0;

}