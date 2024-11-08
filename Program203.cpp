#include<iostream>
using namespace std;

struct node
{
    struct node *next;
    int data;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCnt;
    
    public:
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void AdditionOfDigits();
};

SinglyLL::SinglyLL()
{
    First = NULL;
    iCnt = 0;
}
void SinglyLL::Display()
{   
    PNODE temp = First;

    if(temp == NULL)
    {
        cout<<"The LL is empty"<<endl;
        return;
    }
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int SinglyLL::Count()
{
    return iCnt;
}
void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCnt++;
}
void SinglyLL::AdditionOfDigits()
{
    int iNo = 0;
    int iDigit = 0;
    int iAdd = 0;
    PNODE temp = First;

    if(temp == NULL)
    {
        cout<<"the LL is Empty"<<endl;
        return;
    }

    while(temp != NULL)
    {   
        iNo = temp->data;
        iAdd = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iAdd = iAdd + iDigit;
            iNo = iNo / 10;
        }
        cout<<"The Addition of Digit is : "<<iAdd<<endl;
        temp = temp->next;
    }
}

int main()
{
    SinglyLL obj;

    obj.InsertFirst(41);
    obj.InsertFirst(32);
    obj.InsertFirst(20);
    obj.InsertFirst(11);

    obj.Display();

    obj.AdditionOfDigits(); 

    return 0;
}