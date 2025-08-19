#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the numebr of rows and columns in the matrix"<<endl;;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the matrix elements "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++) {
            cin>>arr[i][j];
        }
    }
    
    int sumOfRow=0;
    for(int i=0; i<r; i++){
        int sumOfCol=0;
        for(int k=0; k<r; k++){
            sumOfCol+= arr[k][i];
        }
        sumOfRow=0;
        for(int j=0; j<c; j++) {
            sumOfRow+= arr[i][j];
        }
        cout<<"Sum of column elements= "<<sumOfCol<<endl;
        cout<<"Sum of row elements= "<<sumOfRow<<endl;
    }

}