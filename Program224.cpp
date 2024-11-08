#include<iostream>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int CountCapital(char *Filename)
{
    int Fd = 0;
    int iRet = 0;
    char Buffer[1024];
    int i = 0;
    int iCnt = 0;

    Fd = open(Filename,O_RDWR);

    if(Fd == -1)
    {
        cout<<"Unable to open the file"<<endl;
        return -1;
    }

    while((iRet = read(Fd,Buffer,sizeof(Buffer)))>0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] >= 'A')&&(Buffer[i] <= 'Z'))
            {
                iCnt++;
            }   
        }
    }
    return iCnt;
    close(Fd);
}
int main()
{
    char ch[50];
    int iRet = 0;

    cout<<"Enter the Filename"<<endl;
    cin.getline(ch,50);

    iRet = CountCapital(ch);
    cout<<"the Capitacout is : "<<iRet;

    return 0;
}