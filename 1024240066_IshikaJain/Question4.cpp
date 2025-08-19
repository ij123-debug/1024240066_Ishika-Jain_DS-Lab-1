#include<iostream>
using namespace std;

void reversed(int arr[], int n){
    int newarr[n],k=0;
    for(int i=n-1; i>=0;i--){
        newarr[k]= arr[i];
        k++;
    }
    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<newarr[i]<<" ";
    }
}

void multiply(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and columns of first matrix";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix";
    cin>>r2>>c2;

    if(c2!=r1){
        cout<<"Matrix multiplication not possible";
    }
    int arr1[r1][c1], arr2[r2][c2], arr3[r1][c2];
    cout<<"First Matrix";
    for(int i=0 ;i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>arr1[i][j];
        }
        
    }
    cout<<"Second Matrix";
    for(int i=0 ;i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            arr3[i][j]=0;
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1; k++){
                arr3[i][j]+=arr1[i][j] * arr2[i][j];
            }
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}
void transpose(){
    int r,c;
    cout<<"Enter rows and columns of the matrix";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int tarr[c][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            tarr[j][i]= arr[i][j];
        }
    }
    cout<<"Transpose matrix: "<<endl;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<tarr[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elemnts";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reversed(arr,n);
    multiply();
    transpose();
}