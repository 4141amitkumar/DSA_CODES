//Merge two sorted array in a single array
#include <iostream>
#include <vector>
using namespace std;
vector <int> merge(vector <int>& v1, vector <int>& v2){
    int i=0, j=0, k=0;
    vector <int> v(v1.size()+v2.size());    //size batao agar assign karna ho to, agar size nhi pta to push_back krte jaao
    while(i<v1.size() || j<v2.size()){      //agar nhi bta rhe size to 2nd method next cpp pe hai....
        if (v1[i]<=v2[j]){
            v[k]=v1[i];
            k++;
            i++;
        }
        else if (v1[i]>v2[j]){
            v[k]=v2[j];
            j++;
            k++;
        }
        if (i==v1.size()){
            for(j;j<v2.size();j++,k++){
                v[k]=v2[j];
            }
            break;
        }
        else if (j==v2.size()){
            for(i;i<v1.size();i++,k++){
                v[k]=v2[i];
            }
            break;
        }
    }
    return v;
}
int main(){
    vector <int> v1,v2;
    int n1,n2;
    cout<<"Enter size of 1st array:";
    cin>>n1;
    cout<<"Enter elements of 1st array:";
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"Enter size of 2nd array:";
    cin>>n2;
    cout<<"Enter elements of 2nd array:";
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector <int> k=merge(v1,v2);
    for(int i=0; i<k.size();i++){
        cout<<k[i]<<" ";
    }
}