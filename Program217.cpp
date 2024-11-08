#include<iostream>
using namespace std;

template<class T>
int LastOcc(T Arr[], int iSize, T iNum)
{
    int LO = 0;
    int i = 0;
    int iCnt = 1;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNum)
        {
            LO = iCnt;
        }   
        iCnt++;    
    }
    return LO;
}

int main()
{
    int iNo = 0;
    int Occ = 0;
    int i = 0;
    int *iptr = NULL;
    float *fptr = NULL;

    cout<<"How many numbers you want to add in array : "<<endl;
    cin>>iNo;

    iptr = new int[iNo];
    cout<<"Enter the element : "<<endl;
    for(i = 0; i < iNo; i++)
    {
        cin>>iptr[i];
    }

    cout<<"Which number you want to find the first occ : "<<endl;
    cin>>Occ;

    int iRet = LastOcc(iptr,iNo,Occ);
    cout<<"The First occ is : "<<iRet;

    return 0;
}