#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector< vector<int> > v;

    vector<int> v1(3);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v1.push_back(4);
    v1.push_back(5);
    
    vector<int> v3;
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(10);

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[2][4];
}