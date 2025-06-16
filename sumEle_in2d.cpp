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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;
}
