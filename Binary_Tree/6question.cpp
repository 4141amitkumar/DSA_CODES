//Print elements of the nth level
#include<iostream>
using namespace std;
class TreeNode{
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
void element_at_level_nth(TreeNode* root, int currlevel, int level){
    if(root==NULL) return;
    if(currlevel==level)cout<<root->val<<" ";
    element_at_level_nth(root->left,currlevel+1,level);
    element_at_level_nth(root->right,currlevel+1,level);
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
    TreeNode* j = new TreeNode(10);
    TreeNode* k = new TreeNode(11);
    TreeNode* l = new TreeNode(12);
    TreeNode* m = new TreeNode(13);
    TreeNode* n = new TreeNode(14);
    TreeNode* o = new TreeNode(15);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    d->right = i;
    e->left = j;
    e->right = k;
    f->left = l;
    f->right = m;
    g->left = n;
    g->right = o;

    element_at_level_nth(a,1,3);
    cout<<endl;
    cout<<endl;

    //if we want level order traversal
    element_at_level_nth(a,1,1);
    element_at_level_nth(a,1,2);
    element_at_level_nth(a,1,3);
    element_at_level_nth(a,1,4);
}