#include <iostream>
using namespace std;

template <typename T>
T Max(T iNo1, T iNo2, T iNo3) {
    T iMax = iNo1;
    if (iMax < iNo2) {
        iMax = iNo2;
    }
    if (iMax < iNo3) {
        iMax = iNo3;
    }
    return iMax;
}

int main() 
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fValue3 = 0.0f;

    cout<<"Enter the First integer : ";
    cin>>iValue1;

    cout<<"Enter the Second integer : ";
    cin>>iValue2;

    cout<<"Enter the Third integer : ";
    cin>>iValue3;    

    int iRet = Max(iValue1,iValue2,iValue3);

    cout<<"The maximum number is : "<<iRet<<endl;

    cout<<"Enter the First float : ";
    cin>>fValue1;

    cout<<"Enter the Second float : ";
    cin>>fValue2;

    cout<<"Enter the Third float : ";
    cin>>fValue3;    

    float fRet = Max(fValue1,fValue2,fValue3);
    cout<<"The maximum number is : "<<fRet;

    return 0;
}
