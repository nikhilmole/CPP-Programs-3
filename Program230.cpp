#include<iostream>
using namespace std;

int Freq(int **Arr, int iRow, int iCol, int iFind)
{
    int i = 0; 
    int j = 0;
    int iCnt = 0;

    for(i =0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == iFind)
            {
                iCnt++;
            }
        }
    }
    return iCnt;
}
int main()
{
    int **ptr;
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    int i = 0;
    int j = 0;
    int iFind = 0;

    cout<<"Enter the number of rows : "<<endl;
    cin>>iNo1;

    cout<<"Enter the number of cols : "<<endl;
    cin>>iNo2;

    cout<<"Enter the number you want to find the freq : "<<endl;
    cin>>iFind;

    ptr = new int*[iNo1];
    if(ptr == NULL)
    {
        cout<<"Unabole to allocate the memory"<<endl;
        return -1;
    }

    for(i = 0; i < iNo1; i++)
    {
        ptr[i] = new int[iNo2];
        if(ptr[i] == NULL)
        {
            cout<<"Unable to allocate the memory"<<endl;
            return -1;
        }
    }

    cout<<"Enter the elements"<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cin>>ptr[i][j];
        }
    }
    cout<<"Entered elements are"<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }    

    iRet = Freq(ptr, iNo1, iNo2, iFind);
    cout<<iRet;

    return 0;
}