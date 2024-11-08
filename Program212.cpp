#include<iostream>
using namespace std;

template<class T>
T Max(T Arr[], int iSize)
{
    T iMax = Arr[0];
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int *I = NULL;
    int iNo = 0;
    int i = 0;

    float *F = NULL;

    cout<<"===========To find the Maximum number=============="<<endl;

    cout<<"How many number you want to add in array : "<<endl;
    cin>>iNo;

    I = new int[iNo];
    cout<<"Enter the numbers : "<<endl;
    for(i = 0; i < iNo; i++)
    {
        cin>>I[i];
    }

    int iRet = Max(I,iNo);
    cout<<"The maximum number is : "<<iRet<<endl;

    cout<<"===========To find the Maximum decimal number=============="<<endl;

    cout<<"How many decimal number you want to add in array : "<<endl;
    cin>>iNo;

    F = new float[iNo];
    cout<<"Enter the numbers : "<<endl;
    for(i = 0; i < iNo; i++)
    {
        cin>>F[i];
    }

    float fRet = Max(F,iNo);
    cout<<"The maximum number is : "<<fRet<<endl;
    return 0;
}