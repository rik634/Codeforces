class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        vector<TreeNode*> level;
        int index=0;
        int n = traversal.size();
        while(index<n)
        {
            int depth=0;
            while(index<n && traversal[index]=='-')
            {
                depth++;
                index++;
            }

            int value=0;
            while(index<n && isdigit(traversal[index]))
            {
                value = 10*value + (traversal[index]-'0');
                index++;
            }
            TreeNode* node = new TreeNode(value);

            if(depth<level.size())
            {
                level[depth]=node;
            }
            else
            {
                level.push_back(node);
            }

            if(depth>0)
            {
                TreeNode* parent = level[depth-1];
                if(parent->left==NULL)
                {
                    parent->left=node;
                }
                else
                {
                    parent->right=node;
                }
            }
        }
        return level[0];
    }
};
