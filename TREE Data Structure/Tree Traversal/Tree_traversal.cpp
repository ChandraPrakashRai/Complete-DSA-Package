#include<bits/stdc++.h>
using namespace std;

struct Node{
    // public:
    int data ;
    Node* left;
    Node* right;

    //constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree()
{
    int x;
    cout<<"enter value of node: ";
    cin>>x;
    

    if(x==-1)
    return NULL;

    Node* root = new Node(x);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void PreOrder(Node* root)
{
       if(root==NULL)
    return;
    
    cout<<root->data<<" ";

    PreOrder(root->left);
    PreOrder(root->right);


}

void InOrder(Node* root)
{
    if(root==NULL)
    return;
    
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);


}

void PostOrder(Node* root)
{
       if(root==NULL)
    return;


    PostOrder(root->left);
    PostOrder(root->right);
     cout<<root->data<<" ";


}







int main(){
    cout << "Binary Tree : " << endl;

    Node* root = buildTree();

    // cout << "\nPreorder Traversal: ";
    // PreOrder(root);

    cout << "\nInorder Traversal: ";
    InOrder(root);

    cout << "\nPostorder Traversal: ";
    PostOrder(root);

}