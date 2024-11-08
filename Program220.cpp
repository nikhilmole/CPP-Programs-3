#include<iostream>
using namespace std;
#include<fcntl.h>
#include<unistd.h>

void OpenFile(char *FileName)
{
    int Fd = 0;

    Fd = creat(FileName,0777);

    if(Fd == -1)
    {
        cout<<"Uable to create new File"<<endl;
    }
    else
    {
        cout<<"File created successfully"<<endl;
    }

    close(Fd);
}   

int main()
{
    char ch[50];
    
    cout<<"Enter the File name you want to create ; "<<endl;
    cin.getline(ch,50);

    OpenFile(ch);

    return 0;
}