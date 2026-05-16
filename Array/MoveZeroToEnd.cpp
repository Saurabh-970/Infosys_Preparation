#include<iostream>
using namespace std;

class Array 
{
    public:

    void MoveZero(int Arr[], int iSize)
    {
        int iCnt = 0;
        int j  = 0;
        int temp = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] != 0)
            {
                temp = Arr[iCnt];
                Arr[iCnt] = Arr[j];
                Arr[j] = temp;
                j++;
            }
        }
    }
    // Time Complexity: O(n)

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

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    int *Arr = new int[iLength];

    cout<<"Enter the elements : \n";

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Array aobj;

    aobj.MoveZero(Arr, iLength);
    cout<<"Array after moving zero :\n ";

    aobj.Display(Arr,iLength);

    delete[]Arr;

    return 0;

}