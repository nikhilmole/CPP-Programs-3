#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int CountSpace(char *Filename)
{
    int iCnt = 0;
    int iRet = 0;
    int Fd = 0;
    char Buffer[255];
    int i = 0;

    Fd = open(Filename,O_RDONLY);
    if(Fd == -1)
    {
        cout<<"Unable to open file : "<<endl;
        return -1;
    }

    while((iRet = read(Fd,Buffer,sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCnt++;
            }
        }
    }
    return iCnt;
}   
int main()
{
    char ch[25];
    int iRet = 0;

    cout<<"Enter the File name"<<endl;
    cin.getline(ch,25);

    iRet = CountSpace(ch);
    cout<<iRet;

    return 0;
}