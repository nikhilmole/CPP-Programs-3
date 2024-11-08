#include<iostream>
using namespace std;

template<class T>
void Rev(T Arr[], int iSize)
{
    int Start = 0;
    int End = iSize - 1;
    T temp;

    while(Start < End)
    {
        temp = Arr[End];
        Arr[End] = Arr[Start];
        Arr[Start] = temp;

        Start++;
        End--;
    }
}

int main()
{
    int iNo = 0;
    int i = 0;
    int *iptr = NULL;

    cout << "How many numbers you want to add in array: ";
    cin >> iNo;

    
    iptr = new int[iNo];

    cout << "Enter the elements: " << endl;
    for(i = 0; i < iNo; i++)
    {
        cin >> iptr[i];
    }

    Rev(iptr, iNo);

    cout << "Reversed Array is: " << endl;
    for(i = 0; i < iNo; i++)
    {
        cout << iptr[i] << "\t";
    }

    delete[] iptr;

    return 0;
}
