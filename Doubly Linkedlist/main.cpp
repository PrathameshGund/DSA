#include <iostream>

using namespace std;


class Node{
public:
    int data;
    Node*prev;
    Node*next;
//construtor
    Node(int d)
    {
        this->data=d;
        this->prev=nullptr;
        this->next=nullptr;
    }
//deconstructor
~Node(){
    int val=this->data;
    if(next!=nullptr){
        delete next;
        next=nullptr;
    }
    cout<<"memory free for the node with data"<<val<<endl;
}
};

void print(Node* head)
{
        Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


int getLength(Node* head)
{
    int len=0;
    Node* temp=head;

    while(temp!=nullptr){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node*&tail,int d)
{
     Node* temp=new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
}

void insertAtPosition(Node*&tail,Node* &head,int position,int d)
{
    if(position==1)
       {
        insertAtHead(head,d);
        return ;
       }

      Node* temp=head;
      int cnt=1;

      while(cnt<position-1)
      {
          temp=temp->next;
          cnt++;
      }

      if(temp->next==nullptr){
        insertAtTail(tail,d);
        return;
      }

      Node*nodeToInsert=new Node(d);
      nodeToInsert->next=temp->next;
      temp->next->prev=nodeToInsert;
      temp->next=nodeToInsert;
      nodeToInsert->prev=temp;
}

void deleteNode(int position,Node* &head)
{
    if(position==1)
    {
        Node*temp=head;
        temp->next->prev=nullptr;
        head=temp->next;
        temp->next=nullptr;
        delete temp;
    }
    else{
        Node*curr=head;
        Node*prev=nullptr;
    int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;

        }
        curr->prev=nullptr;
        prev->next =curr->next;
        curr->next=nullptr;
        delete curr;

    }
}
int main()
{
  Node* node1=new Node(10);
  Node *head=node1;
  Node *tail=node1;
  print (head);
  //cout<<getLength(head)<<endl;

  insertAtHead(head,11);
//print(head);

  insertAtHead(head,12);
  //print(head);

  insertAtHead(head,15);
 //print(head);


  insertAtTail(tail,16);
  //print(head);

  insertAtPosition(tail,head,2 ,244);
  print(head);

  deleteNode(1,head);
  print(head);
  return 0;
}
