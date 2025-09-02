#include<iostream>
#include<string>
#include<stack>
using namespace std;

string reverse(string str){
    stack<char> s;
    for(char ch: str){
        s.push(ch);
    }
    string reversed="";
    while(!s.empty()){
        reversed += s.top();
        s.pop();
    }
    return reversed;
}

int main(){
    
    string input;
    cout<<"Enter the string to be reversed";
    getline(cin, input);
    cout<<"Reversed string : "<<reverse(input);
    
}