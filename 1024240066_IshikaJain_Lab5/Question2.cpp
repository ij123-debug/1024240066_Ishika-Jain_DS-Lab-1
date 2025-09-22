#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this -> data= d;
        this -> next = NULL;
    }

};

void insertAtTail(Node* &tail ,int v ){
    Node* temp = new Node(v);
    tail -> next= temp;
    tail= temp;
}

void count(Node* &head, int n){
    Node* temp = head;
    Node* newhead= NULL;
    Node* newtail= NULL;
    int c=0;
    while(temp != NULL){
        if(temp -> data == n){
            c++;
        }
        else {
            Node* newnode= new Node(temp -> data);
            if(newhead == NULL){
                newhead= newnode;
                newtail= newnode;
            }
            else {
                newtail -> next= newnode;
                newtail= newnode;
            }
        }
        temp = temp ->next;
    }
    cout<<"Number of occurences of the given key is "<<c<<endl;
    cout<<"After removing the occurences: "<<endl;
    Node* t= newhead;
    while(t!=NULL){
        cout<<t -> data<<" ";
        t= t -> next;
    }
}

int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int value;
    cout<<"Enter the value for node 1 : "<<endl;
    cin>>value;
    Node* head= new Node(value);
    Node* tail= head;
    for(int i=2; i<=n; i++){
        cout<<"Enter the value of node "<<i<<" : ";
        cin>>value;
        insertAtTail(tail, value);
    }
    int key;
    cout<<"Enter the key to be counted"<<endl;
    cin>>key;
    count(head, key);
    return 0;
}