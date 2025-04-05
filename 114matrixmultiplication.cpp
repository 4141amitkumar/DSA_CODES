#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> matrix_multiplication( vector<vector<int>> a, vector<vector<int>> b){
    vector<vector<int>> res(a.size(),vector<int>(b[0].size()));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b[0].size();j++){
            int multiply=0;
            for(int k=0;k<b.size();k++){
                multiply=multiply+ a[i][k]*b[k][j];
            }
            res[i][j]=multiply;
        }
    }
    return res;
}
int main(){
    int m,n,p,q;
    cout<<"For 1st matrix:"<<endl;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    vector<vector<int>> a(m,vector<int>(n));
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"For 2nd matrix:"<<endl;
    cout<<"Enter number of rows:";
    cin>>p;
    cout<<"Enter number of columns:";
    cin>>q;
    vector<vector<int>> b(p,vector<int>(q));
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>> b[i][j];
        }
    }
    if(n==p){
    vector<vector<int>> res = matrix_multiplication(a,b);
    cout<<"The resultant matrix after multiplying is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else cout<<"Invalid dimensions.";
}