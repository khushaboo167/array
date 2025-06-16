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
//     cout<<"transpose of the matrix: "<<endl;
//     for(int j=0;j<m;j++){
//         for(int i=0;i<n;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }







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
//     // store the transpose
//     int t[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             t[i][j]=arr[j][i];
//         }
//     }

//     cout<<"transpose of the matrix: "<<endl;
//     for(int j=0;j<m;j++){
//         for(int i=0;i<n;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




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
    // store the transpose
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }
    // transpose in the same matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}