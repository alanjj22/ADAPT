#include<bits/stdc++.h>

using namespace std;

#define QUEUE_SIZE 5



struct kueue{
    int items[QUEUE_SIZE];
    int front;
    int rear;
};


int insert(int item, kueue *q){
    if(q->rear > QUEUE_SIZE-1){
        cout<<"Max size reached";
        return 0;
    }
    (q->rear)++;
    q->items[q->rear]=item;
}

int deletef(kueue *q){
    if(q->front > q->rear){
        cout<<"empty queue";
        return 0;
    }
    cout<<"item deleted is : "<<q->items[q->front];
    (q->front)++;
    if(q->front > q->rear){
        q->front=0;
        q->rear=-1;
    }
}

int display(kueue *q){
    if(q->front > q->rear){
        cout<<"empty queue";
        return 0;
    }
    for(int i= q->front; i<=q->rear; i++){
        cout<<q->items[i]<<" ";
    }
}

int main(){
    kueue q;
    q.front = 0;
    q.rear = -1;
    int input, item;
    for(;;){
        cout<<endl<<"1. Insert element"<<endl;
        cout<<endl<<"2. Delete element"<<endl;
        cout<<endl<<"3. Display elements"<<endl;
        cout<<endl<<"4. Exit"<<endl;
        cout<<endl<<"Enter the choice"<<endl;
        cin>>input;

        switch (input)
        {
        case 1:
            cout<<endl<<"Enter the item"<<endl;
            cin>>item;
            insert(item,&q);
            break;
        
        case 2:
            deletef(&q);
            break;

        case 3:
            display(&q);
            break;

        case 4:
            exit(0);
        
        default:
            cout<<endl<<"Invalid choice"<<endl;
            break;
        }


    }
}