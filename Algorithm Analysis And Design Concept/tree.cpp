#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};

Node* create(){
    int x;
    Node* newNode = new Node();
    cout<<"Enter the data"<<endl;
    cin>>x;
    if(x==-1){
        return 0;
    }
    else{
        newNode->data = x;
        cout<<"enter the left child of "<<x<<" ";
        newNode->left=create();
        cout<<"enter the right child of "<<x<<" ";
        newNode->right=create();
        return newNode;
    }
}

void inOrder(Node* ptr){
    if(ptr == NULL){
        return;
    }
    
    cout<<ptr->data;
    inOrder(ptr->left);
    inOrder(ptr->right);
}


int main(){
    Node* root;
    root = create();
    inOrder(root);
    
    return 0;
}
