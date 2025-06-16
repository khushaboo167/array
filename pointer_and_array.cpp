#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,9,7,0};
    int* ptr=arr;
    ptr[0]=100;
    // cout<<ptr<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<endl;
    // }
    
for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

}