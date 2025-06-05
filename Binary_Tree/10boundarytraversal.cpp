#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode* construct(int arr[],int n){
    if (n == 0) return NULL;
    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(!q.empty() && i<n){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT_MIN) l= new TreeNode(arr[i]);
        else l = NULL;
        if(arr[j]!=INT_MIN) r= new TreeNode(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left), levels(root->right));
}
void element_at_level_nth(TreeNode* root, int currlevel, int level){
    if(root==NULL) return;
    if(currlevel==level){
        cout<<root->val<<" ";
        return;
    }
    element_at_level_nth(root->left,currlevel+1,level);
    element_at_level_nth(root->right,currlevel+1,level);
}
void levelOrder(TreeNode* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        element_at_level_nth(root,1,i);
        cout<<endl;
    }
}

void leftBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
    
}
void leafBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";;
    leafBoundary(root->left);
    leafBoundary(root->right);
    
}
void rightBoundary(TreeNode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
    
}
int main(){
    //construct
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = construct(arr,n);
    leftBoundary(root);
    cout<<endl;
    leafBoundary(root);
    cout<<endl;
    rightBoundary(root->right);
}