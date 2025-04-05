#include <iostream>
#include <vector>
using namespace std;
vector <int> previous_greatest(vector <int> arr){
    int i=0,prev=-1;
    vector <int> a(arr.size());             ///size specify karo, wrna fhir push_back karo
    for(i=0;i<arr.size();i++){
        a[i]=prev;
        if (arr[i]>prev) prev=arr[i];
    }
    return a;
}
vector <int> next_greatest(vector <int> arr){
    int i=arr.size()-1,next=-1;
    vector <int> a(arr.size());  
    for(i=arr.size()-1;i>=0;i--){
        a[i]=next;
        if (arr[i]>next) next=arr[i];
    }
    return a;
}
int rain_trap(vector <int> arr){
    int sum=0;
    vector <int> a = previous_greatest(arr);
    vector <int> b = next_greatest(arr);
    for(int i=0;i<arr.size();i++){
        if (arr[i]>=min(a[i],b[i])) continue;
        else sum=sum+(min(a[i],b[i])-arr[i]);
    }
    return sum;
}
int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    vector <int> a = previous_greatest(v);
    for(int i=0; i<v.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector <int> b = next_greatest(v);
    for(int i=0; i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int x = rain_trap(v);
    cout<<x;
}