
// #include<iostream>
// #include<vector>
// using namespace std;;
// int main(){
//     int x;
//     cout<<"enter target: "<<endl;
//     cin>>x;
//     vector<int> v;
//     int n;
//     cout<<"enter array size: "<<endl;
//     cin>>n;

//     cout<<"enter array element: "<<endl;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<=v.size()-2;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }



// method 2
#include<iostream>
#include<vector>
using namespace std;;
int main(){
    int x;
    cout<<"enter target: "<<endl;
    cin>>x;

    int n;
    cout<<"enter array size: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter array element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]+arr[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}