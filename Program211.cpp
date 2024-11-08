#include<iostream>
using namespace std;

template<class T>
T Addition(T Arr[],int iSize)
{
    T iSum = 0;
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int *p = NULL;
    int iNo = 0;
    int i = 0;
    int iRet = 0;

    float *P = NULL;
    float fRet = 0.0f;

    cout<<"=============To Perform the addition of an Integer=============="<<endl;
    cout<<"How many number syou want to add in array : "<<endl;
    cin>>iNo;

    p = new int[iNo];

    cout<<"Enter the numbers"<<endl;

    for(i = 0; i < iNo; i++)
    {
        cin>>p[i];
    }
    iRet = Addition(p,iNo);
    cout<<"The addition of Integer is : "<<iRet<<endl;

    cout<<"=============To Perform the addition of an Integer=============="<<endl;
    cout<<"How many decimal number you want to add in array : "<<endl;
    cin>>iNo;
    P = new float[iNo];

    cout<<"Enter the numbers"<<endl;

    for(i = 0; i < iNo; i++)
    {
        cin>>P[i];
    }
    fRet = Addition(P,iNo);
    cout<<"The addition of Float is : "<<fRet;

    return 0;
}