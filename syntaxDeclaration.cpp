// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={2,8,5,1,0,5,3};
//     cout<<arr[4]<<" ";
//     for(int i=0;i<=6;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7];
//     cout<<"enter the array element: ";
//     for(int i=0;i<=6;i++){
//         cin>>arr[i];
//     }
//     cout<<"printing output:";
//     for(int i=0;i<=6;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//Question:...
#include<iostream>
using namespace std;
int main(){
    int marks[5];
    // input
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    for(int i=0;i<5;i++){
    if(marks[i]<35){
        cout<<i<<" ";
    }
    }
}