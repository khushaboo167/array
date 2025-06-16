// #include<iostream>
// using namespace std;
// int main(){
// // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int arr2[3][3]={1,2,3,4,5,6,7,8,9};
// // cout<<arr[1][2];

// for(int i=0;i<=2;i++){
//     for(int j=0;j<=2;j++){
//     cout<<arr2[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }



#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    int res[n][m];
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


    int k,l;
    cout<<"enetr the size of rows and colomns: "<<endl;
    cin>>k>>l;
    int arr2[k][l];
    cout<<"enter the elements in  the array: "<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<l;j++){
            cin>>arr2[i][j];
        }
    }
      for(int i=0;i<k;i++){
        for(int j=0;j<l;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }



    if(n!=k || m!=l){
        cout<<"add not possible"<<endl;
        return 0;
    }

    // int res[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    cout<<"final array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
