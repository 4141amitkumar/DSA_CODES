#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector <int> &v){
    int n = v.size();
    bool flag = true;  
    for (int i=0; i<n-1;i++){     // no of passes
        for(int k=0;k<n-1-i;k++){                       // to check whether it is sorted or not
            if (v[k]>v[k+1]) flag = false;
        }    
        if (flag==true) break;       
        for(int j=0; j<n-1-i;j++) {      // for traversing/swapping
            if (v[j]>v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        } 
    }
}
int main(){
    vector <int> v1 = {4,5,6,1,2,3};
    vector <int> v2 = {4,5,6,2,3,7, 9 ,-80, 0};
    bubble_sort(v1);
    bubble_sort(v2);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}