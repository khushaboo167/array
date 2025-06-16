//Q1. Count the number of elements strictly greater than x.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int countGreaterThan(vector<int> v,int x){
//     int count=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>x){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(0);
//     v.push_back(3);
//     v.push_back(9);
//     v.push_back(1);
//     int x=2;
//     cout<<"greater element is: "<<countGreaterThan(v,x)<<endl;
//     return 0;
// }





// Check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool isSorted(const vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr={2,0,7,5};

    if(isSorted(arr)){
        cout<<"array is sorted..."<<endl;
    }
    else{
        cout<<"array is not sorted..";
    }
    return 0;
}