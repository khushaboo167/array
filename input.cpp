#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows: "<<endl;
    cin>>n;
    int m;
    cout<<"enter the number of column: "<<endl;
    cin>>m;

    cout<<"enter the elements in the 2d array: "<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
       
    }

    cout<<"printing matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}