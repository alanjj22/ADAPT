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

int deleter(kueue *q){
    if(q->front > q->rear){
        cout<<"empty queue";
        return 0;
    }
    cout<<"item deleted is : "<<q->items[q->rear];
    (q->rear)--;
    if(q->front > q->rear){
        q->front=0;
        q->rear=-1;
    }
}

int insertf(int item, kueue *q){
    if(q->front==0 && q->rear ==-1){
        q->items[++(q->rear)]=item;
    }
    else if(q->front != 0){
        (q->front)--;
        q->items[q->front]=item;
    }
    else{
        cout<<endl<<"Insertion is not allowed"<<endl;
    }
}

int main(){
    kueue q;
    q.front = 0;
    q.rear = -1;
    int input, item;
    for(;;){
        cout<<endl<<"1. Insert element rear"<<endl;
        cout<<endl<<"2. Delete element front"<<endl;
        cout<<endl<<"3. Insert element front"<<endl;
        cout<<endl<<"4. Delete element rear"<<endl;
        cout<<endl<<"5. Display elements"<<endl;
        cout<<endl<<"6. Exit"<<endl;
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
            cout<<endl<<"Enter the item"<<endl;
            cin>>item;
            insertf(item,&q);
            break;
        
        case 4:
            deleter(&q);
            break;

        case 5:
            display(&q);
            break;

        case 6:
            exit(0);
        
        default:
            cout<<endl<<"Invalid choice"<<endl;
            break;
        }


    }
}