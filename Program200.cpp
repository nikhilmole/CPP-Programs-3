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
        void PrimeNum();
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
    PNODE newn = new NODE;
    newn->next = NULL;
    newn->data = iNo;

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
void SinglyLL::PrimeNum()
{
    PNODE temp = First;
    int iNum = 0;
    int i = 0;

    while(temp != NULL)
    {
        int isprime = 1;
        iNum = temp->data;

        if(iNum <= 1)
        {
            isprime = 0;
        }

        for(i = 2; i <= iNum / 2; i++)
        {
            if(iNum % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime)
        {
            cout<<iNum<<"is prime number"<<endl;
        }
        temp = temp->next;
    }
}

int main()
{
    SinglyLL obj;
    
    obj.InsertFirst(89);
    obj.InsertFirst(6);
    obj.InsertFirst(41);
    obj.InsertFirst(17);
    obj.InsertFirst(28); 
    obj.InsertFirst(11);

    obj.Display();

    obj.PrimeNum();

    return 0;
}