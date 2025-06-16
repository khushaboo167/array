#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"enter the element you want to search: "<<endl;
    cin>>ele;

    //search
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==ele) flag=true;
    }
        if(flag==true) cout<<"element found";
        else cout<<"element not found";
        
    
}