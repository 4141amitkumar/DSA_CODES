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
int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left), levels(root->right));
}
// void element_at_level_nth(TreeNode* root, int currlevel, int level){
//     if(root==NULL) return;
//     if(currlevel==level)cout<<root->val<<" ";
//     element_at_level_nth(root->left,currlevel+1,level);
//     element_at_level_nth(root->right,currlevel+1,level);
// }
//but in this function made above, the later calls are extra/needless, if you have already reached the required level

//optimised function
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

    levelOrder(a);
}