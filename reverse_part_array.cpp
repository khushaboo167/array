// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversePart(int i,int j,vector<int>& v){
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     return;
// }
// int main(){
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(11);
//     v.push_back(81);
//     v.push_back(14);
//     v.push_back(91);
//     v.push_back(1);

//     display(v);
//     reversePart(0,2,v);
//     display(v);
// }




// Q..rotate the given array 'a' by k steps, where k is non negative
//note: k can be greater than n as well where n is the size of array 'a'
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(81);
    v.push_back(14);
    v.push_back(91);
    v.push_back(1);
    display(v);

    int k=20;

    // rotate
    int n=v.size();
    if(k>n) k=k%n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}