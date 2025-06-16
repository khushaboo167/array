// wap to copy the elements of one array into another in the reverse order
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array: "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"enter the elements of the array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int arr2[n];
//     for(int i=0;i<n;i++){
//         arr2[i]=arr[n-1-i];
//     }
//     cout<<"reversed array elements: ";
//     for(int i=0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// method 2
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(10);
//     v1.push_back(11);
//     v1.push_back(81);
//     v1.push_back(14);
//     v1.push_back(91);

//     display(v1);
//     vector<int> v2(v1.size());
//     for(int i=0;i<v2.size();i++){
//         v2[i]=v1[v1.size()-1-i];
//     }
//     display(v2);
// }




// wap to reverse the array without using any extra array
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
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
//     int i=0;
//     int j=v.size()-1;
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     display(v);
// }




// method 2
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
