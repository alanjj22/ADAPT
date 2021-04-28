#include<bits/stdc++.h>

using namespace std;

#define QUEUE_SIZE 5



struct kueue{
    int items[QUEUE_SIZE];
    int front;
    int rear;
    int count;
};


int insert(int item, kueue *q){
    if(q->count >= QUEUE_SIZE){
        cout<<"Max size reached";
        return 0;
    }
    (q->rear) = (q->rear +1) % QUEUE_SIZE;
    q->items[q->rear]=item;
    (q->count)++;
}

int deletef(kueue *q){
    if(q->count == 0){
        cout<<"empty queue";
        return 0;
    }
    cout<<"item deleted is : "<<q->items[q->front];
    (q->front) = (q->front + 1)%QUEUE_SIZE;
    (q->count)--;
}

int display(kueue *q){
    if(q->count == 0){
        cout<<"empty queue";
        return 0;
    }
    int i,j;
    i = q->front;
    for(j= 1; j<=q->count; j++){
        cout<<q->items[i]<<" ";
        i = (i + 1)%QUEUE_SIZE;
    }
}

int main(){
    kueue q;
    q.front = 0;
    q.rear = -1;
    q.count = 0;
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