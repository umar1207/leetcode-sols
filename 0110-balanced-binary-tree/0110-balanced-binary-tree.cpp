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

    int flag = 1;

    int depth(TreeNode* p)

    {

        int x;

        if(p == NULL) return 0;

        else

        {

            int ld = depth(p->left);

            int rd = depth(p->right);

            x = max(ld,rd);

        }

        return x+1;

    }

    void preOrder(TreeNode* p)

    {

        if(p != NULL)

        {

            p->val = depth(p->left) - depth(p->right);

            if(p->val > 1 || p->val < -1) flag = 0; 

            preOrder(p->left);

            preOrder(p->right);

        }

    }

    bool isBalanced(TreeNode* root)

    {

        preOrder(root);

        if(flag == 0) return false;

        else return true;

    }

};


