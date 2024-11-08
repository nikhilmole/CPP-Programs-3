#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

void Read(const char *Filename)
{
    int iRet = 0;
    int Fd = 0;
    char Data[11] = {'\0'};

    Fd = open(Filename, O_RDONLY); 
    if (Fd == -1)
    {
        cout << "Unable to open file" << endl;
        return;
    }
    else
    {
        cout << "The file opened successfully" << endl;
    }

    iRet = read(Fd, Data, 10); 
    if (iRet == -1)
    {
        cout << "Error reading the file" << endl;
        close(Fd);
        return;
    }

    cout << iRet << " bytes successfully read: " << Data << endl;

    close(Fd);
}

int main()
{
    char ch[50];

    cout << "Enter the file name you want to open for reading:" << endl;
    cin.getline(ch, 50);

    Read(ch);

    return 0;
}
