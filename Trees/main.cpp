#include <iostream>
#include<queue>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* buildtree()
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    node* root = new node(data);

    cout << "Enter the data for the left of " << data << endl;
    root->left = buildtree();

    cout << "Enter the data for the right of " << data << endl;
    root->right = buildtree();

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node*temp=q.front();
        q.pop();

        if(temp==nullptr)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(nullptr);
            }
        }
    else{
    cout<<temp->data<<" ";
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }
    }
    }
}

void inorder(node*root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node*root)
{
    if(root==nullptr)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node*root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

void buildfromLevelorder(node *&root)
{
    queue<node*>q;
    cout<<"Enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);

   q.push(root);

    while(!q.empty()){
        node*temp=q.front();
        q.pop();


        cout<<"Enter left node for:"<<temp->data<<endl;

        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

    cout<<"Enter the right node for:"<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;

    if(rightdata!=-1)
    {
        temp->right=new node(rightdata);
        q.push(temp->right);
    }
}
}

int main()
{
    node* root = nullptr;
    buildfromLevelorder(root);
    levelOrderTraversal(root);
    //root = buildtree();

    return 0;
}
