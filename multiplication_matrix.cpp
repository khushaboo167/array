#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"enetr the size of rows and colomns: "<<endl;
    cin>>n>>m;
    
    int x,y;
    cout<<"enetr the size of rows and colomns: "<<endl;
    cin>>x>>y;
    
    if(m==x){
        int a[n][m];
        cout<<"enetr elements of 1st matrix: ";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int b[x][y];
        cout<<"enetr elements of 2nd matrix: ";
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cin>>b[i][j];
            }
        }
        // resultant matrix
        int res[n][y];
        for(int i=0;i<n;i++){
            for(int j=0;j<y;j++){
                res[i][j]=0;
                for(int k=0;k<x;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;

    //    print
        for(int i=0;i<n;i++){
            for(int j=0;j<y;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    }


