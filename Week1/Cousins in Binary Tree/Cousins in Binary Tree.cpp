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
    int xx , yy ;
    int par1 = 0 , par2 = 0 , d1 = 0 , d2 = 0 ;
    bool isCousins( TreeNode* root, int x, int y) {
        xx = x ;
        yy = y ;
        solve( -1 , root , 0 );
        return par2 != par1 && d1 == d2 ;
    }
    void solve( int par, TreeNode *root , int depth )
    {
         if( root == NULL ) return ;
         if( root-> val == xx )
         { par1 = par ; d1 = depth ; }
         else if( root-> val == yy ) { par2 = par ; d2 = depth ; }
         solve(root->val , root->left , depth + 1 ) ;
         solve(root->val , root->right , depth + 1 ) ;
    }
};
