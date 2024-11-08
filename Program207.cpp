#include<iostream>
using namespace std;

struct node
{
    struct node *next;
    int data;
};

typedef struct node* NODE;
typedef struct node* PNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCnt;
    
    public:
        SinglyLL();
        void InsertFirst(int iNo);
        void Display();
        int Small();
};

SinglyLL::SinglyLL()
{
    First = NULL;
    iCnt = 0;
}
void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new node;
    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else    
    {
        newn->next = First ;
        First = newn;
    }
    iCnt++;
}
void SinglyLL::Display()
{
    PNODE temp = First;
    if(temp == NULL)
    {
        cout<<"The LL uis empty"<<endl;
        return;
    }

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int SinglyLL:: Small()
{
    int iNo = 0;
    PNODE temp = First;
    int iSmall = temp->data;

    while(temp != NULL)
    {
        iNo = temp->data;
        if(iNo < iSmall)
        {
            iSmall = iNo;
        }
        temp = temp->next;
    }
    return iSmall;
}

int main()
{
    SinglyLL obj;

    obj.InsertFirst(34);
    obj.InsertFirst(121);
    obj.InsertFirst(13);
    obj.InsertFirst(14);
    obj.InsertFirst(15);
    obj.InsertFirst(16);
    obj.InsertFirst(111);

    obj.Display();

    int iRet = obj.Small();
    cout<<"Smallest number is : "<<iRet;
    
    return 0;
}