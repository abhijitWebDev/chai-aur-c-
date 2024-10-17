#include <vector>
#include <unordered_map>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) {
            return nullptr;
        }
        
        // Create a map to store the index of each value in inorder for quick lookup
        unordered_map<int, int> inorderIndexMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndexMap[inorder[i]] = i;
        }
        
        return buildTreeHelper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inorderIndexMap);
    }
    
private:
    TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd, 
                              vector<int>& inorder, int inStart, int inEnd, 
                              unordered_map<int, int>& inorderIndexMap) {
        if (preStart > preEnd || inStart > inEnd) {
            return nullptr;
        }
        
        // The first element in preorder is the root
        int rootValue = preorder[preStart];
        TreeNode* root = new TreeNode(rootValue);
        
        // Find the index of the root in inorder
        int rootIndexInInorder = inorderIndexMap[rootValue];
        
        // Calculate the number of elements in the left subtree
        int leftTreeSize = rootIndexInInorder - inStart;
        
        // Recursively build the left and right subtrees
        root->left = buildTreeHelper(preorder, preStart + 1, preStart + leftTreeSize, 
                                     inorder, inStart, rootIndexInInorder - 1, inorderIndexMap);
        root->right = buildTreeHelper(preorder, preStart + leftTreeSize + 1, preEnd, 
                                      inorder, rootIndexInInorder + 1, inEnd, inorderIndexMap);
        
        return root;
    }
};
