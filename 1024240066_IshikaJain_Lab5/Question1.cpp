#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int d){
        this->data= d;
        this ->next= NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next!= NULL){
            delete next;
            this -> next= NULL;
        }
    }
};

void insertAtHead(Node* &head, int v){
    Node* temp =new Node(v);
    temp ->next= head;
    head= temp;
}

void insertAtTail(Node* &tail, int v){
    Node* temp = new Node(v);
    tail -> next= tail;
    tail= tail -> next;
}

void insertAtMiddle(Node* &head,int v, int pos){
    if(pos==1){
        insertAtHead(head, v);
        return;
    }
    Node* temp = head;
    int c=1;
    while(c<=pos-1){
        temp= temp -> next;
        c++;
    }
    Node* newNode= new Node(v);
    newNode -> next= temp -> next;
    temp -> next= newNode;

}

void deleted(int pos, Node* &head){
    if(pos==1){
        Node* temp= head;
        head = head -> next;
        temp -> next= NULL;
        delete (temp); 
    }
    else {
        Node* current = head;
        Node* prev= NULL;
        int c=1;
        while(c<pos){
            prev= current;
            current = current -> next;
            c++;
        }
        prev -> next= current -> next;
        current -> next = NULL;
        delete(current );
    }
}

void search(int v, Node* &head){
    bool flag= false;
    Node* h= head;
    while(h!=NULL){
        if(h -> data == v){
            cout<<"Element found"<<endl;
            flag = true;
            break;
        }
        else {
            h=h -> next;
        }
    }
    if(flag==false){
        cout<<"Element not found"<<endl;
    }

}

void print(Node* &head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp= temp -> next;
    }
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail= node1;
    int choice;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            insertAtHead(head, 15);
            print(head);
            break;
        case 2:
            insertAtTail(tail,12);
            print(head);
            break;
        case 3:
            insertAtMiddle(head , 2, 20);
            print(head);
            break;
        case 4:
            insertAtHead(head,15);
            deleted(2, head);
            print(head);
            break;
        case 5:
            search(15, head);
            break;
        case 6:
            print(head);
            break;

        default:
            cout<<"Invalid Choice"<<endl;
    }
}