#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class LinkedList
{
    private:
        Node* head;
    public:
        LinkedList()
        { // constructor
          head = NULL;
        }
        int calcSize();
        void insertLast(int data);
        void display();
};

void LinkedList::insertLast(int data)
{

    Node* freshNode = new Node();

    freshNode->data = data;
    // since this will be the last node so it will point to NULL
    freshNode->next = NULL;

    //need this if there is no node present in linked list at all
    if(head==NULL)
    {
        head = freshNode;
        cout << freshNode->data << " inserted" << endl;
        return;
    }
     Node* temp = head;
    // traverse to the last node of Linked List
    while(temp->next!=NULL)
        temp = temp->next;

    // assign last node's next to this freshNode
    temp->next = freshNode;
    cout << freshNode->data << " inserted" << endl;
}

void LinkedList::display()
{

    Node* node = new Node();
    node = head;

    //as linked list will end when Node is Null
    while(node!=NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    LinkedList* mylist = new LinkedList();
    mylist->insertLast(7);
    mylist->insertLast(8);
    mylist->insertLast(9);
    mylist->insertLast(10);


    mylist->display();
    return 0;
}
