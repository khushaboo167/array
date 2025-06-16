#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int> v(5);
//     cout<<v[2];
//     cout<<v.size()<<endl;
//     cout<<v.capacity();
// }


int main(){
    vector<int> v(5,7);// initial size= 5, each element has value 7.
    cout<<v[3]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}