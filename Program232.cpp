#include<iostream>
using namespace std;

void ColAdd(int **Arr,int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    int iAdd = 0;

    for(i = 0; i < iRow; i++)
    {
        iAdd = 0;
        for(j = 0; j < iCol; j++)
        {
            iAdd = iAdd + Arr[j][i];
        }
        cout<<"Addition is : "<<iAdd<<endl;
    }
}
int main()
{
    int i = 0;
    int j = 0;
    int iNo1 = 0;
    int iNo2 = 0;
    int **ptr = NULL;

    cout<<"Enter the Number of rows : "<<endl;
    cin>>iNo1;
    cout<<"Enter the Number of cols : "<<endl;
    cin>>iNo2;

    ptr = new int*[iNo1];
    if(ptr == NULL)
    {
        cout<<"Unable to allocate the memory"<<endl;
        return -1;
    }
    for(i = 0; i < iNo2; i++)
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
    cout<<"Enter the elements"<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }

    ColAdd(ptr,iNo1,iNo2);
    free(ptr);
    return 0;
}
