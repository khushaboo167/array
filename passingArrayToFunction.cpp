#include<iostream>
using namespace std;

void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0]=100;
}

int main(){
    int arr[5]={3,6,1,0,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr);
    change(arr);
    display(arr);
}