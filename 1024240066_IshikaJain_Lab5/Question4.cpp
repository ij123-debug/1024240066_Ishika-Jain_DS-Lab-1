#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this -> data= d;
        this -> next= NULL;
    }
};

void insertAtTail(Node* &tail, int v){
    Node* temp= new Node(v);
    tail -> next= temp;
    tail= temp;
}

void reverse(Node* &head){
    Node* prev= NULL;
    Node* curr= head;
    Node* next=NULL;
    while(curr!= NULL){
        next= curr -> next;
        curr -> next= prev;
        prev= curr;
        curr= next;

    }
    Node* t= prev;
    cout<<"Reversed Linked List: "<<endl;
    while(t!=NULL){
        cout<<t -> data<<" ";
        t= t-> next;
    }
}

int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n; 
    int value;
    cout<<"Enter the value of node 1: "<<endl;
    cin>>value;
    Node* head= new Node(value);
    Node* tail =head;
    for(int i=2; i<=n; i++){
        cout<<"Enter the value of node "<<i<<": "<<endl;
        cin>>value;
        insertAtTail(tail ,value);
    }
    reverse (head);
    return 0;
}
