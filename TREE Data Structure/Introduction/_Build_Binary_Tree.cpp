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
    cout<<root->data<<" ";

    PreOrder(root->left);
    PreOrder(root->right);


}







int main(){
    cout<<"Binary Tree : ";

    Node* root = buildTree();

    cout<<"Binary tree is: ";
    PreOrder(root);


}