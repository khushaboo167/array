// // wap to print the matrix in wave form
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>m>>n;
//     int arr[m][n];
//     cout<<"enter the element of the array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // wave print
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j];
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>m>>n;
//     int arr[m][n];
//     cout<<"enter the element of the array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // wave print
//     for(int i=0;i<m;i++){
//         if(i%2!=0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>m>>n;
//     int arr[m][n];
//     cout<<"enter the element of the array: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // wave print
//     for(int i=m-1;i>=0;i--){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }



// wap to print the matrix in wave form
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size of array: "<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter the element of the array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    // column wise print
    for(int j=0;j<n;j++){
          for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
          }

    }
}