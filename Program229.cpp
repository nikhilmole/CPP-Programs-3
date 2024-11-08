#include<iostream>
using namespace std;

int DigoAdd(int **Arr, int iRow, int iCol)
{
    int iSum = 0;
    int i = 0;
    int j = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                iSum = iSum + Arr[i][j];
            }
        }
    }
    return iSum;
}

int main()
{
    int **Arr;
    int iNo1 = 0;
    int iNo2 = 0;
    int i = 0;
    int iRet = 0;
    int j = 0;

    cout<<"Enter the number of rows : "<<endl;
    cin>>iNo1;

    cout<<"Enter the number of cols : "<<endl;
    cin>>iNo2;

    Arr = new int*[iNo1];
    if(Arr == NULL)
    {
        cout<<"Unable to allocate the memory"<<endl;
        return -1;
    }

    for(i = 0; i < iNo2; i++)
    {
        Arr[i] = new int[iNo2];
        if(Arr[i] == NULL)
        {
            cout<<"Unable to alloacter the memory"<<endl;
            return -1;
        }
    }
    cout<<"Enter the Element"<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cin>>Arr[i][j];
        }
    }

    cout<<"Entered elements are : "<<endl;

    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cout<<Arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    iRet = DigoAdd(Arr,iNo1,iNo2);
    cout<<"The addition is : "<<iRet;

    delete []Arr;
    return 0;
}