#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int GetSize(char *Filename)
{
    int iRet = 0;
    int Fd = 0;

    Fd = open(Filename,O_RDWR);
    if(Fd == -1)
    {
        cout<<"Unabel to open file"<<endl;
    }
    else
    {
        cout<<"The File gets successfully open"<<endl;
    }

    iRet = lseek(Fd,0,SEEK_END);
    if(iRet == -1)
    {
        cout<<"Unable to get size"<<endl;
        close(Fd);
        return -1;
    }

    close(Fd);
    return iRet;
}
int main()
{
    char ch[50];

    cout<<"Enter the file name you want to get the size"<<endl;
    cin.getline(ch,50);

    int iRet = GetSize(ch);
    cout<<"The size of the file is : "<<iRet;

    return 0;
}
