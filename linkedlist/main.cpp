#include <iostream>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }

    ~Node(){
    int value=this->data;
    if(this->next!=nullptr)
    {
        delete next;
        this->next=nullptr;
    }
    cout<<"memory is free for node with data"<<value<<endl;
    }

};
void insertAthead(Node* &head,int d)
{
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAttail(Node*&tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void print (Node* &head )
{
    Node*temp=head;
    while(temp!=nullptr)
    {
        cout<<"->"<<temp->data;
        temp=temp->next;

    }
    cout<<endl;
}

void insertAtindex(Node* &tail,Node* &head,int position,int d)
{

    Node*temp=head;
    int cnt=1;

     if (position==1)
    {
        insertAthead(head,d);
        return;
    }
    if(temp->next==nullptr)
    {
        insertAttail(tail,d);
        return;
    }

    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
        Node*nodeToinsert=new Node(d);
        nodeToinsert->next=temp->next;
        temp->next=nodeToinsert;

}

void deleteNode(int position,Node* &head)
{
    if(position==1)
    {
        Node*temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=nullptr;
        int cnt =1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=nullptr;
        delete curr;
    }
}
Node* reverseLinkedlist(Node*head)
{
    Node*temp=head;
    Node*prev=nullptr;

    while(temp!=nullptr)
    {
        Node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;

}

bool detectedLoop(Node *head)
{
    if(head==nullptr)
    {
        return false;
    }

    map<Node*,bool>visited;
    Node*temp=head;

    while(temp!=nullptr)
    {
        if(visited[temp]==true)
        {
            cout<<"Present on element"<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* floydDetectedloop(Node *head)
{
    if(head==nullptr)
    {
        return nullptr;
    }

    Node*slow=head;
    Node*fast=head;

    while(slow!=nullptr &&fast!=nullptr)
    {
        fast=fast->next;
        if(fast!=nullptr)
        {
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast)
        {
            cout<<"Loop is present at"<<fast->data<<endl;
            return slow;
        }
    }
    return nullptr;
}

Node* getStartingNode(Node*head)
{
    if(head==nullptr)
    {
        return nullptr;
    }

    Node*intersection=floydDetectedloop(head);
    Node*slow=head;

    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void removalLoop(Node *head)
{
    if(head==nullptr)
        return ;

    Node*startofloop=getStartingNode(head);
    Node*temp=startofloop;


    while(temp->next!=startofloop)
    {
        temp=temp->next;
    }
    temp->next=nullptr;
}

int main()
{
        Node* node1=new Node(15);

        Node*head=node1;
        Node*tail=node1;

        insertAthead(head,12);
        insertAthead(head,10);
       // print(head);
        insertAttail(tail,22);

       // insertAtindex(tail,head,5 ,1);
        //deleteNode(4,head);
        print(head);
      tail->next=head->next;
       // detectedLoop(head);
     //   reverseLinkedlist(head);
       // print(head);

    if(floydDetectedloop(head)!=nullptr)
    {
        cout<<"Loop detected"<<endl;
    }
    else{
        cout<<"Loop not detected"<<endl;
    }

    Node*loop=getStartingNode(head);
    cout<<"loop starts here"<<loop->data<<endl;

    removalLoop(head);

    print(head);

}
