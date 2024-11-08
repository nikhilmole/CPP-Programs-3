#include<iostream>
using namespace std;

template<class T>
T Freq(T Arr[], int iSize, T iFind)
{
    int iFreq = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iFind)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{   
    int *I = NULL;
    int i = 0;
    int iNo = 0;
    int iNum = 0;

    cout<<"===========Count number frequnecy==========="<<endl;
    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iNo;

    I = new int[iNo];
    cout<<"Entyer the number"<<endl;
    for(i = 0; i < iNo; i++)
    {
        cin>>I[i];
    }
    cout<<"Which number you want to get th frequnecy : "<<endl;
    cin>>iNum;
    int iRet = Freq(I,iNo,iNum);

    cout<<"The frequency of number is : "<<iRet;

    return 0;
}