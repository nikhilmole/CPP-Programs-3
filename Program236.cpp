#include<iostream>
using namespace std;

void Reverese(int **Arr, int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int iStart = 0;
    int iEnd = 0;

    for(i = 0; i < iRow; i++)
    {
        iStart = 0;
        iEnd = iCol -1;

        while(iStart < iEnd)
        {
            temp = Arr[iStart][i];
            Arr[iStart][i] = Arr[iEnd][i];
            Arr[iEnd][i] = temp;

            iStart++;
            iEnd--;
        }    
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int i = 0;
    int j = 0;
    int **ptr = NULL;

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

    Reverese(ptr,iNo1,iNo2);

    cout<<"After transpose: "<<endl;
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}