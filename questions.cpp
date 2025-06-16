//Q1... Calculate the product of all the elements in the given array.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in the array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int product=1;
//     for(int i=0;i<n;i++){
//         product = product*arr[i];
//     }
//     cout<<product;
// }




//Q2... Find the second largest element in the given Array in one pass.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;

//     cout<<"enter the element in the array: ";
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=INT_MIN;
//     cout<<"max element is: ";
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     cout<<max<<endl;
//     int smax=INT_MIN;
//     cout<<"smax element is: ";
//     for(int i=0;i<n;i++){
//         if(smax<arr[i] && arr[i]!=max){
//             smax=arr[i];
//         }
//     }
//     cout<<smax;
// }




//Q3. Find the minimum value out of all elements in the array.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"enter the element in the array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//         cout<<min;
    
// }



//Q4. Given an array, predict if the array contains duplicates or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"enter the element in the array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//             flag = true;
//         }   
//     }
//     }
//     if(flag == true){
//             cout<<"duplicates"<<endl;
//     }
//     else{
//             cout<<"not";
//     }
// }


// Q.5.. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements
// #include <iostream>
// using namespace std;

// int findSmallestMissingPositive(int nums[], int size) {
//     bool hasOne = false;
//     for (int i = 0; i < size; ++i) {
//         if (nums[i] == 1) {
//             hasOne = true;
//             break;
//         }
//     }
//     if (!hasOne) return 1;

//     for (int i = 0; i < size; ++i) {
//         if (nums[i] <= 0 || nums[i] > size) {
//             nums[i] = 1;
//         }
//     }
//     for (int i = 0; i < size; ++i) {
//         int index = abs(nums[i]) - 1;
//         if (nums[index] > 0) {
//             nums[index] = -nums[index];
//         }
//     }
//     for (int i = 0; i < size; ++i) {
//         if (nums[i] > 0) {
//             return i + 1;
//         }
//     }
//     return size + 1;
// }

// int main() {
//     int arr[] = {1, 2, 3, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int result = findSmallestMissingPositive(arr, size);
//     cout << "The smallest missing positive element is: " << result << endl;
//     return 0;
// }




// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int sub[50],i;
//     for(i=0;i<=48;i++);
//     {
//         sub[i]=1;
//         cout<<sub[i]<<endl;
//     }
//     return 0;
// }




// ...........................................................................................................
// ................................................Arrays2..........................................................
// Q.1..Count the number of elements strictly greater than x
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"enter the element in the array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the key: "<<endl;
//     cin>>x;

//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>x) ans++;
//     }
//     cout<<ans;
// }



// Q 2..WAP to find the largest three elements in the arra
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[5]={10,26,4,9,45};
//     int max1=INT_MIN;
//     int max2=INT_MIN;
//     int max3=INT_MIN;
//     for(int i=0;i<5;i++){
//         if(arr[i]>max1){
//             max3=max2;
//             max2=max1;
//             max1=arr[i];
//         }
//         else if(arr[i]>max2 && arr[i] != max1){
//             max3=max2;
//             max2=arr[i];
//         }
//         else if(arr[i]>max3 && arr[i] != max1 && arr[i] != max2){
//             max3=arr[i];
//         }
//         cout<<endl<<"Three largest elements of the array: "<<max1<<" "<<max2<<" "<<max3<<endl;
//         return 0;
//     }
// }



// Q.3..Check if the given array is sorted or not
// #include<iostream>
// using namespace std;

// int main() {
//     // int arr[5] = {1, 4, 6, 7, 8};
//     int arr[5] = {2,4,0,9,1};
//     for(int i = 1; i < 5; i++) {
//         if(arr[i - 1] > arr[i]) {
//             cout << "Array is not sorted" << endl;
//             return 0;
//         }
//     }
    
//     cout << "Array is sorted" << endl;
//     return 0;
// }



// Q.4.. Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[5]={13,5,9,8,2};
//     int sumE=0;
//     int sumO=0;
//     for(int i=0;i<5;i++){
//       if(i%2==0)  sumE=sumE+arr[i];
//       else sumO=sumO+arr[i];
//     }
//     cout<<abs(sumE-sumO);
//     return 0;
// }




// Q.5.. Given an array of integers, change the value of all odd indexed elements to its second multipleand increment all even indexed values by 10
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,4,1,6,0};
//     for(int i=0;i<5;i++){
//         if(i%2==0) arr[i]=arr[i]+10;
//         else arr[i] = arr[i]*2;
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// Q 6..Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
// #include <iostream>
// using namespace std;
// int main() {
// int arr[5]={2,2,1,1,20};
// for(int i=0;i<5;i++){
// int count=0;
// for(int j=0;j<5;j++){
// if(arr[i]==arr[j]) count++;
// }
// if(count==0){
// cout<<arr[i];
// return 0;
// }
// }
// cout<<"No unique value.";
// return 0;
// }









// ............................................................Array3.........................................
// Q1. Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<algorithm>
using namespace std;
int countTriplets(int arr[],int n,int x){
    // sort(arr.begin(),arr.end());
    sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int currSum=arr[i]+arr[j]+arr[k];
            if(currSum==x){
            count++;
            j++;
            k--;
            }
            else if(currSum<x){
               j++;
            }
            else{
                k--;
            }
        }
    }
    return count;
}
int main(){
    // int arr[]={8,6,0,3,2,1,5,1};
    int arr[]={1,5,3,2,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result=countTriplets(arr,n,x);
    cout<<"number of triplets with sum "<<x<<" is : "<<result<<endl;
    return 0;
}