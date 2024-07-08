#include <iostream>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

};
Node *head=new Node;
void Insert(int d)
  {
      Node *t;
      int i;
      t=new Node;
      t->data=d;
    t->next=head;
      head=t;
  }


int main()
{
  int A[]={2,3,4,5,6,8};

  Node *last;
  Node *temp;

  head->data=A[0];
  head->next=nullptr;
  last=head;

  for(int i=1;i<sizeof A/sizeof A[0];i++)
  {
      temp=new Node;
      temp->data=A[i];
      temp->next=nullptr;
      last->next=temp;
      last=temp;
  }

    Insert(13);



  Node *p=head;

  while(p)
  {
      cout<<p->data<<"->"<<flush;
      p=p->next;
  }
    return 0;
}
