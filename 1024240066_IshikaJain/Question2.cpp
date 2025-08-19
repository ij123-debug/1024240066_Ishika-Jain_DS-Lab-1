#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k=0;
    int newarr[n];
    
    for(int i=0; i<n; i++){
        bool isDuplicate= false;
        for(int j=0; j<k; j++){
            if(arr[i]== newarr[j]){
                isDuplicate= true;
                break;
            }
        }
        if(!isDuplicate){
            newarr[k]= arr[i];
            k++;
        }
    }
    for(int i=0; i<k; i++){
        cout<<newarr[i]<<" ";
    }
}