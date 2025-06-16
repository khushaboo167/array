// count the number of elements in given array greater tham a given number x

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"enter the element in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter key"<<endl;
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}