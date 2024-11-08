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
        int EvenAdd();
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
int SinglyLL::EvenAdd()
{
    int EvenAdd = 0;
    int iNum = 0;
    PNODE temp = First;

    while(temp != NULL)
    {
        iNum = temp->data;
        if(iNum % 2 == 0)
        {
            EvenAdd = EvenAdd + temp->data;
        }
        temp = temp->next;
    }
    return EvenAdd;
}

int main()
{
    SinglyLL obj;

    int iRet = 0;

    obj.InsertFirst(41);
    obj.InsertFirst(32);
    obj.InsertFirst(20);
    obj.InsertFirst(11);

    obj.Display();

    iRet = obj.EvenAdd(); 

    printf("Addition of even numbers is: %d\n", iRet);

    return 0;
}