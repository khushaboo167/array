// wrote a progra to store roll number and marks of 4 students
#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    cout<<"roll number and marks: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // print
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}