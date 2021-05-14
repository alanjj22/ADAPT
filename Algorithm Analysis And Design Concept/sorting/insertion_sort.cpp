#include<bits/stdc++.h>

using namespace std;

void insertion(int a[]){
    int temp,pos;
    for(int i=1; i<6; i++){
        temp=a[i];
        pos=i;
        for(int j=i-1; j>=0;j--){
            if(a[j]>temp){
                a[pos]=a[j];
                pos--;
            }
        }
        a[pos]=temp;
    }
}


int main(){
    int a[6]={3,5,2,9,6,4};
    insertion(a);
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}