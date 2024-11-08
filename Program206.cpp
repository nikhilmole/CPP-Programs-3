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
        void Product();
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
void SinglyLL::Product()
{
    int iNum = 0;
    int iDigit = 0;
    PNODE temp = First;
    int Pro = 1;
    while(temp != NULL)
    {
        Pro = 1;
        iNum = temp->data;

        while(iNum > 0)
        {
            iDigit = iNum % 10;
            Pro = Pro * iDigit;
            iNum = iNum / 10; 
        }
        cout<<"|"<<Pro<<"|->";
        temp = temp->next;
    }
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

    obj.Product();

    return 0;
}