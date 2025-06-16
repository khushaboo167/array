#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    cout<<"enter the element in the array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    cout<<"max element is: ";
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    int smax=INT_MIN;
    cout<<"smax element is: ";
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
}