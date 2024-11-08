#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>
using namespace std;

void Append(char *Filename, char *Data)
{
    int iRet= 0;
    int Fd = 0;

    Fd = open(Filename,O_RDWR,O_APPEND);
    if(Fd == -1)
    {
        cout<<"Unbale to open file"<<endl;
    }

    iRet = write(Fd,Data,strlen(Data));
    if(iRet == -1)
    {
        cout<<"Unable to Append the data"<<endl;
    }

    close(Fd);
}
int main()
{
    char ch[50];
    char Data[300];

    cout<<"Enter the File name you want to append the data : "<<endl;
    cin.getline(ch,50);

    cout<<"Enter the data you want to appned into the file : "<<endl;
    cin.getline(Data,300);

    Append(ch,Data);

    return 0;
}
