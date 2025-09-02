#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isMatching(char open, char close){
    return(open=='(' && close== ')') ||
          (open== '{' && close== '}') ||
          (open== '[' && close == ']');
}

bool isBalanced(string str){
    stack<int> s;

    for(char ch: str){
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']'){
            if(s.empty()){
                return false;
            }
            
                char top= s.top();
                s.pop();
      
            if(!isMatching(top,ch)){
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string str;
    cout<<"Enter the string";
    getline(cin, str);
    if(isBalanced(str)){
        cout<<"String has balanced parantheses";
    }
    else {
        cout<<"String does not have balanced parantheses";
    }
    return 0;
}