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
int level(TreeNode* root){
    if(root==NULL) return 0;
    int c = 1 + max(level(root->left),level(root->right));
    return c;
}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);
    TreeNode* i = new TreeNode(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;
    h->right = i;

    cout<<level(a);
}