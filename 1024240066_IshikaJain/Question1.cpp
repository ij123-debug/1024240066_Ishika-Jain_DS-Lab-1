#include<iostream>
using namespace std;

int arr[5];

void create(){
    cout<<"Enter the array elements";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
}

void display(){
    cout<<"Enter the array elements";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
}

void insert(){
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int pos,num;
    cout<<"Enter the number to be inserted and its position";
    cin>>num>>pos;
    for(int i=5; i>pos; i--){
        arr[i]= arr[i-1];
    }
    arr[pos]= num;
    cout<<"Inserted array";
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
}

void del(){
    cout<<"Enter the array elements";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int position;
    cout<<"Enter the position of the array to be deleted";
    cin>>position;
    for(int i=position; i<5; i++){
        arr[i]= arr[i+1];
    }
    cout<<"Modified array";
    for(int i=0; i<4; i++){
        cout<<arr[i];   
    }
}

void linearSearch(){
    cout<<"Enter the array elements";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int x,idx;
    cout<<"Enter the number to be searched ";
    cin>>x;
    for(int i=0; i<5; i++){
        if(x==arr[i]){
            idx=i;
            break;
        }
    }
    cout<<"Element found at index: ",idx;

}


int main(){
    
    int choice;
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice){
        case1: create();
               break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            linearSearch();
            break;
        default:
            cout<<"Invalid input";

    }
    
}