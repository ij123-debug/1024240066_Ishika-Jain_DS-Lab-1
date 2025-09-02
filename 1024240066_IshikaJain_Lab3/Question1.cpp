#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;
    
    public:
    Stack(int s){
        size=s;
        arr= new int[size];
        top=-1;
    }
    void push(int x){
        if(isFull()){
            cout<<"Stack overloading";
        }
        else{
            arr[top++]= x;
            cout<<x << "pushed into the stack"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else {
            cout<<"Stack underloading";
        }
    }

    bool isEmpty(){
        return top==-1;
    }   

    bool isFull(){
        return top==size-1;
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        else{
            for(int i= size-1; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    void peek(){
        if(isEmpty()){
            cout<<"The stack is empty";

        }
        else {
            cout<<"Top element is : "<<arr[top]<<endl;
        }
    }

};

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    Stack s(n);
    int choice;
    cout<<"Enter your choice";
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. isEmpty"<<endl;
    cout<<"4. isFull"<<endl;
    cout<<"5. display"<<endl;
    cout<<"6. peek"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            int value;
            cout<<"Enter the value to be pushed";
            cin>>value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            if(s.isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack is not empty"<<endl;
            }
            break;
        case 4:
            if(s.isFull()){
                cout<<"The stack is full"<<endl;
            }
            else {
                cout<<"Stack is not full"<<endl;
            }
            break;
        case 5:
            s.display();
            break;
        case 6:
            s.peek();
            break;
        default:
            cout<<"Invlaid choice"<<endl;
            
    }
    return 0;
}