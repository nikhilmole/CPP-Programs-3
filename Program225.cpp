#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int CountSmall(char *Filename)
{
    int iRet = 0;
    int Fd = 0;
    int iCnt = 0;
    char Buffer[255];
    int i = 0;

    Fd = open(Filename,O_RDONLY);
    if(Fd == -1)
    {
        cout<<"Unable to open file"<<endl;
        return -1;
    }

    while((iRet = read(Fd,Buffer,sizeof(Buffer)))>0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
            {
                iCnt++;
            } 
        }
    }
    close(Fd);
    return iCnt;
}
int main()
{
    char ch[255];
    int iRet = 0;

    cout<<"Enter the Filename"<<endl;
    cin.getline(ch,255);

    iRet = CountSmall(ch);
    cout<<iRet;

    return 0;
}

