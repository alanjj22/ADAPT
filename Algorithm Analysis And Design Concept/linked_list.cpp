#include<stdio.h>
#include<iostream>

using namespace std;


class Node
{
public:
    int data;
    Node* link;
};

Node* insert(Node* head){
    int n;
    Node* ptr = NULL; 
    Node* temp = NULL; 
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        temp = new Node();
        cout<<"enter the data"<<endl;
        cin>>temp->data;
        if(head==NULL){
            head=temp;
            ptr=temp;
            temp->link=NULL;
        }
        else{
            ptr->link=temp;
            ptr=ptr->link;
        }
    }
    return head;
}

void display(Node* head){
    Node* ptr = NULL;
    ptr=head;
    while (ptr!= NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}

Node* delete_node(Node* head){
    int key;
    cout<<"enter the data to be deleted"<<endl;
    cin>>key;
    Node* ptr=NULL;
    Node* prev=NULL;
    ptr=head;
    prev=head;

    if(head->data == key){
        head=head->link;
        return head;
    }
    ptr=ptr->link;
    while (ptr->link != NULL)
    {
        if(ptr->data == key) {
            ptr=ptr->link;
            prev->link=ptr;
        }else{
            ptr=ptr->link;
            prev=prev->link;
        }
    }
    if(ptr->data == key){
        prev->link=NULL;
    }
    return head;
}

int main(){
    
    Node* head = NULL;
    head=insert(head);
    display(head);
    head=delete_node(head);
    display(head);
    return 0;
}



/* for(;;){
        
        cout<<"Enter the operation"<<endl;
        cout<<"1.Insert"<<endl<<"2.Delete"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
        cin>>n;
        switch(n){
            case 1 : 
                insert();
                break;\

            case 2 : 
                Delete();
                break;
            
            case 3 : 
                Display();
                break;

            case 4 : 
                Exit(0);
                break;

            default :
                cout<<"Enter a valid case"<<endl;
        }
    } */