/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
//         lets do the preorder traversal...
//         using delimiter ','
        
        if(root==NULL) return "NULL,"; 
        
return to_string(root->val) + ","+serialize(root->left)+serialize(root->right);

        
    }

    
    TreeNode* help(queue<string>&q){
    
     string node = q.front(); q.pop(); 
        
        if(node=="NULL") return 0; 
        
        TreeNode* nroot = new TreeNode(stoi(node));
        
        nroot->left = help(q);
            nroot->right = help(q);
        
        return nroot; 
        
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
//          got string data... preorder... 
//         now removing the delimiters... pushing in queue...
        
        queue<string> q; 
        string s = ""; 
        for(int i = 0 ; i < data.length();i++){
            
            if(data[i]==','){
                
                q.push(s); 
                s = ""; 
                continue;                 
            }
            
            else s+=data[i]; 
            
        }
        if(s.length()!=0) q.push(s); 
        
//          we have s now... 
        
        return help(q); 
        
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));