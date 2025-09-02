#include<iostream>
#include<string>
#include<stack>
#include<cctype>
#include<cmath>
using namespace std;

int postfix(string str){
    stack<int> s;
    for(char c: str){
        if(isdigit(c)){
            s.push(c-'0');
        }
        else {
            int val1= s.top();
            s.pop();
            int val2= s.top();
            s.pop();
            switch(c){
                case '+':
                    s.push(val1+val2);
                    break;
                case '-':
                    s.push(val1-val2);
                    break;
                case '*':
                    s.push(val1*val2);
                    break;
                case '/':
                    s.push(val1/val2);
                    break;
                case '^':
                    s.push(pow(val1,val2));
                    break;
            }
        }
    }
    return s.top();
}

int main(){
    string expression;
    cout<<"Enter the expression"<<endl;
    getline(cin, expression);
    cout<<"Result : "<<postfix(expression);
    return 0;
}