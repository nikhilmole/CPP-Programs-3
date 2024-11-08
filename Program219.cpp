#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;


void FileOpen(char *FileName)
{
    int Fd = 0;
    int iRet = 0;

    Fd = creat(FileName,0777);

    if(Fd == -1)
    {
        cout<<"Unable to open file"<<endl;
    }
    iRet = open(FileName,O_RDONLY);

    if(iRet == -1)
    {
        cout<<"Unable to open file"<<endl;
    }
    else
    {
        cout<<"The file open successfuly"<<endl;
    }

}
int main()
{
    char ch[50];

    cout<<"Enter the name of File you want open for reading purpose : ";
    cin.getline(ch,50);

    FileOpen(ch);

    return 0;
}