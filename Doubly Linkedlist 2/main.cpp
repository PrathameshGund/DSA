#include <iostream>

using namespace std;


class Node{

public:
    int data;
    Node *next;
    Node *prev;


    Node(int d)
    {
        this->data=d;
        this->prev=nullptr;
        this->next=nullptr;
    }
};

void print(Node*&head)
{
    Node*temp=head;

    while(temp!=nullptr)
    {
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

}

int getLength(Node*&head)
{
    int len=0;
    Node *temp=head;
    while(temp!=nullptr)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAthead(Node*&head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}

void insertAtTail(Node*&tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
//    print(head);
//  cout<<getLength(head)<<endl;
    insertAthead(head,9);
//    print(head);
    insertAtTail(tail,11);
    print(head);
    cout<<getLength(head)<<endl;

}
