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
    Node* temp = new Node(v);
    tail -> next= temp;
    tail = temp;
}

void middle(Node* &head, int n){
    int middle= (n+1)/2;
    int c=0; 
    Node* temp = head;
    while(temp != NULL){
        c++;
        if(c==middle){
            cout<<"Middle element is : "<<temp -> data<<endl;
            break;
        }
        temp = temp -> next;
    }
}

int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n; 
    int value;
    cout<<"Enter the value of the node 1 : "<<endl;
    cin>>value;
    Node* head = new Node(value);
    Node* tail = head;
    for(int i=2; i<=n; i++){
        cout<<"Enter the value of node "<<i<<" : "<<endl;
        cin>>value;
        insertAtTail(tail, value);
    }
    middle(head, n);
    return 0;
}