/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int height(TreeNode* p, TreeNode* q){
        if(!p && !q)    return 0;
        int l=height(p->left,q->left);
        int r=height(p->right,q->right);

        if(p->left != q->left)   return -1;
        if(p->right !=q->right)  return -1;

        return (l,r)+1;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)    return true;
        if(!p || !q)    return false;
        if(p->val != q->val) return false;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        
    }
};
