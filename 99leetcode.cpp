//Ques : Rotate the given array ‘a’ by k steps, where k is non-negative.
//Note : k can be greater than n as well where n is the size of array ‘a’.
#include <iostream>
#include <vector>
using namespace std;
void reverse(int i,int j, vector <int> &v)            //&v, because we need not to create a new vector
{
    for(i,j;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main(){
    cout<<"Enter the size of the array:";
    int n,x,y;
    cin>>n;
    vector <int> v;
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter value of k:";
    cin>>k;
    if (k>n) k=k%n;
    reverse(0,v.size()-1-k,v);
    reverse(v.size()-k,v.size()-1,v);
    reverse(0,v.size()-1,v);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } 
}


// reverse(nums.begin(),nums.end()-k);
// reverse(nums.end()-k,nums.end());
// reverse(nums.begin(),nums.end());          leetcode********