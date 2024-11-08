#include<iostream>
using namespace std;
#include<fcntl.h>
#include<unistd.h>

void Read(char *Filename, int iNo)
{
    int Fd = 0;
    char Buffer[250];
    int iRet = 0;

    Fd = open(Filename,O_RDONLY);
    if(Fd == -1)
    {
        cout<<"Unbale to open the file"<<endl;
        return;
    }
    iRet = read(Fd,Buffer,iNo);
    cout<<Buffer;
}

int main()
{
    char ch[25];
    int  iValue = 0;

    cout<<"Enter the Filename : "<<endl;
    cin.getline(ch,25);

    cout<<"Enter the  number : "<<endl;
    cin>>iValue;

    Read(ch,iValue);
    return 0;
}