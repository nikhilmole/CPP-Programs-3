#include<iostream>
using  namespace std;

int DigonalAdd(int **Arr,int iRow, int  iCol)
{
    int i =0;
    int j = 0;
    int Digo1 = 0;
    int Digo2 = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(Digo1 < Arr[i][j])
                {
                    Digo1 = Arr[i][j];
                }
            }

            else if(i + j == iCol - 1)
            {
                if(Digo2 < Arr[i][j])
                {
                    Digo2 = Arr[i][j];
                }
            }
        }
        cout<<endl;
    }
    cout<<Digo1<<endl;
    cout<<Digo2<<endl;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int **ptr = NULL;
    int i = 0;
    int j = 0;

    cout<<"Enter the Number of rows : "<<endl;
    cin>>iNo1;

    cout<<"Enter the Number of rows : "<<endl;
    cin>>iNo2;

    ptr = new int*[iNo1];
    if(ptr == NULL)
    {
        cout<<"Unabale to allocate the memory"<<endl;
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
    cout<<"Enter the Elements"<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cin>>ptr[i][j];
        }
    }

    cout<<"Entgered elements are "<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }

    DigonalAdd(ptr,iNo1, iNo2);

    return 0;
}