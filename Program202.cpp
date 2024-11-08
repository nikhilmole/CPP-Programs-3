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
        int SecondMax();
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
int SinglyLL::SecondMax()
{
    int iNum = 0;
    PNODE temp = First;
    int Max = temp->data;
    int SecondMax = 0;

    if((temp == NULL)||(temp->next == NULL))
    {
        cout<<"LL is empty of LL is contains only one node"<<endl;
        return -1;
    }
    while(temp != NULL)
    {
        iNum = temp->data;
        if(iNum > Max)
        {
            SecondMax = Max;
            Max = temp->data;
        }
        else if((iNum > SecondMax)&&(iNum < Max))
        {
            SecondMax = iNum;
        }
        temp = temp->next;
    }
    return SecondMax;
    
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

    iRet = obj.SecondMax(); 

    printf("Maximum number is : %d\n", iRet);

    return 0;
}