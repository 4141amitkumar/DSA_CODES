#include<iostream>
using namespace std;
class TreeNode{   //This is a TreeNode
public:
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int val){
    this->val=val;
    this->left = NULL;
    this->right=NULL;
   }
};
int size(TreeNode* root){
    if(root==NULL) return 0;
    int count=1+size(root->left)+size(root->right);
    return count;

}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<size(a);
}