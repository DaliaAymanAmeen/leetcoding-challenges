      /*struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };*/

class Solution {
public:
       void search_parent(TreeNode* root, int x , int parent , int* out ){
        int flag = 0;
        if (root->val == x ) 
        {
            *out = parent ;
            flag = 1;
            return ;
        }
        
        if (flag == 0 && root->right!=nullptr )
            search_parent(root->right,  x , root->val , out );
        
        if (flag == 0 && root->left!=nullptr )
          search_parent(root->left,  x , root->val , out );        
        }


int getLevelUtil(TreeNode* root, int data, int level) 
{ 
    if (root == NULL) 
        return 0; 
  
    if (root -> val == data) 
        return level; 
  
    int downlevel = getLevelUtil(root -> left, data, level + 1); 
    if (downlevel != 0) 
        return downlevel; 
  
    downlevel = getLevelUtil(root->right,  data, level + 1); 
    return downlevel; 
} 
  

int getLevel(TreeNode* root, int data) 
{ 
    return getLevelUtil(root, data, 1); 
} 
    
    
bool isCousins(TreeNode* root, int x, int y) {
    
        int out, out1;
        int counter = 0 , counter1=0;
        search_parent( root, x , -1 , &out );
        search_parent( root, y , -1 , &out1 );
        counter = getLevel(root, x); 
        counter1 = getLevel(root, y); 
    
        if (counter != counter1) return false; //not in the level, not cousins 
        else 
            if (out != out1) return true;  //don't have same paret, and in the level, so they are cousins 
        return false;
        
    }
};