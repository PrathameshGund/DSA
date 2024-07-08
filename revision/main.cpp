#include<iostream>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    int A[]={2,3,4,6,7,8,9};

    Node *head=new Node;
    Node *last;
    Node *temp;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=0;i<sizeof (A)/sizeof A[0];i++)
    {
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }

    int num;
    cout<<"Enter the Number:";
    cin>>num;

    Node *p=head;
    while(p)
    {
        if(p->data==num)
        {
            cout<<"Found";
            break;
        }
       if(p->data!=num)
       {
           cout<<"Invalid";
           break;
       }

        p=p->next;
    }
    return 0;
}
