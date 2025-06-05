//Find the product of all values in Binary Tree
#include<iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
};
int product(TreeNode* root){
    if(root==NULL) return 1;
    int ans = root->val * product(root->left) * product(root->right);
    return ans;
}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    cout<<product(a);
}