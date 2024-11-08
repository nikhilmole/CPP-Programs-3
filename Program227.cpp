#include<iostream>
using namespace std;
#include<unistd.h>
#include<fcntl.h>

int Occ(char *Filename, char ch)
{
    int iCnt = 0;
    int Occ = 0;
    int Fd = 0;
    int iRet = 0;
    char Buffer[255];
    int i = 0;

    Fd = open(Filename,O_RDONLY);
    if(Fd == -1)
    {
        cout<<"Unbale to opne the file"<<endl;
        return -1;
    }

    while((iRet = read(Fd,Buffer,sizeof(Buffer)))>0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ch)
            {
                Occ = iCnt;
                break;
            }
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    char ch[50];
    char cValue = {'\0'};
    int iRet = 0;

    cout<<"Enter the Filename : "<<endl;
    cin.getline(ch,50);

    cout<<"Enter the Character : "<<endl;
    cin>>cValue;

    iRet = Occ(ch,cValue);
    cout<<iRet;

    return 0;
}