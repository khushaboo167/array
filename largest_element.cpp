// //  wap to find the largest element of a given 2d array of integers
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enetr the size of rows and colomns: "<<endl;
//     cin>>n>>m;
//     int arr[n][m];
//     cout<<"enter the elements in  the array: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//       for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         if(max<arr[i][j]) 
//             max=arr[i][j];   
//     }  
// }
// cout<<max;
// }





//  wap to find the second largest element of a given 2d array of integers
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"enetr the size of rows and colomns: "<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements in  the array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         if(max<arr[i][j]) 
//             max=arr[i][j];   
//     }  
// }
// cout<<max;
}
