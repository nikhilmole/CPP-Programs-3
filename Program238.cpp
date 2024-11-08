#include<iostream>
using namespace std;

bool Matrice(int **Arr, int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int Element = iRow * iCol;
    int iCnt = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == 0)
            {
                iCnt++;
            }
        }   
    }
    if(iCnt == Element / 2)
    {
        return true;
    }   
    return false;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int i = 0;
    int j = 0;
    int **ptr = NULL;
    bool bRet = false;

    cout<<"Enter the number o rows : "<<endl;
    cin>>iNo1;
    cout<<"Enter the number o cols : "<<endl;
    cin>>iNo2;

    ptr = new int*[iNo1];

    for(i = 0; i < iNo1; i++)
    {
        ptr[i] = new int[iNo2];
    }
    cout<<"Entered the elements : "<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cin>>ptr[i][j];
        }
    }
    cout<<"Entered elements are: "<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }

    bRet = Matrice(ptr,iNo1,iNo2);
    if(bRet == false)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
        
    }
    return 0;
}