#include<iostream>
using namespace std;

template<class T>
void Print(T Value, int iSize)
{
    int i = 0;

    for(i = 1; i <= iSize; i++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}
int main()
{   
    char ch[50];
    int iNo = 0;
    int iNum = 0;

    cout<<"How many times you want to print character on screen : "<<endl;
    cin>>iNo;
    cout<<"Plss Enter the character : "<<endl;
    cin>>ch;
    Print(ch, iNo);

    cout<<"How many times you want to print number on screen : "<<endl;
    cin>>iNo;
    cout<<"Which number youi want to print on screen"<<endl;
    cin>>iNum;
    Print(iNum, iNo);

    return 0;
}