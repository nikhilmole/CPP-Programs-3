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
        void InsertFirst(int iNo);
        void Palindrome();
};

SinglyLL::SinglyLL()
{
    First = NULL;
    iCnt = 0;
}

void SinglyLL::Display()
{
    PNODE temp = First;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;
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
}
void SinglyLL::Palindrome()
{
    int iNum = 0;
    int iRev = 0;
    int iDigit = 0;
    PNODE temp = First;

    while(temp != NULL)
    {
        iRev = 0;
        iNum = temp->data;
        int originalnumber = temp->data;
        while(iNum > 0)
        {
            iDigit = iNum % 10;
            iRev = (iRev * 10) + iDigit;
            iNum = iNum / 10; 
        }
        if(iRev == originalnumber)
        {
            cout<<originalnumber<<" is a palindrome"<<endl;
        }
        else
        {
            cout<<originalnumber<<" is not a palindrome"<<endl;
        }
        temp = temp->next;
    }
}   

int main()
{
    SinglyLL obj;

    obj.InsertFirst(121);
    obj.InsertFirst(13);
    obj.InsertFirst(14);
    obj.InsertFirst(15);
    obj.InsertFirst(16);
    obj.InsertFirst(111);

    obj.Display();

    obj.Palindrome();

    return 0;
}