#include<iostream>
using namespace std;

class Array
{
    public:

        void Reverse(int Arr[], int iSize)
        {
            int iStart = 0;
            int iEnd = iSize - 1;
            int iTemp = 0;

            while(iStart < iEnd)
            {
                iTemp = Arr[iStart];
                Arr[iStart] = Arr[iEnd];
                Arr[iEnd] = iTemp;

                iStart++;
                iEnd--;
            }
        }

        void Display(int Arr[], int iSize)
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<" ";
            }

            cout<<"\n";
        }
};

int main()
{
    int iLength = 0;
    int iCnt = 0;

    cout<<"Enter the number of elements : ";
    cin>>iLength;

    int *Arr = new int[iLength];

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Array aobj;

    cout<<"Before Reverse : \n";
    aobj.Display(Arr, iLength);

    aobj.Reverse(Arr, iLength);

    cout<<"After Reverse : \n";
    aobj.Display(Arr, iLength);

    delete []Arr;

    return 0;
}