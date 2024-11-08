#include<iostream>
using namespace std;

template<class T>

T Multiplication(T iNo1, T iNo2)
{
    T Ans = 0;

    Ans = iNo1 * iNo2;

    return Ans;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    float fValue1 = 0, fValue2 = 0;
    float fRet = 0;
    cout<<"Enter the First Number : "<<endl;
    cin>>iValue1;

    cout<<"Enter the Second Number : "<<endl;
    cin>>iValue2;

    iRet = Multiplication(iValue1,iValue2);
    cout<<"The multiplication of two value is : "<<iRet<<endl;

    cout<<"Enter the First Number : "<<endl;
    cin>>fValue1;

    cout<<"Enter the Second Number : "<<endl;
    cin>>fValue2;

    fRet = Multiplication(fValue1,fValue2);
    cout<<"The multiplication of two value is : "<<fRet;
}