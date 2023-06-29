// question pre_order_traversal
#include<bits/stdc++.h>
using namespace std;


struct TreeNode {

int data;
TreeNode* left;
TreeNode* right;

};
TreeNode* buildTree()
{
    int data;
    cout<<"Enter the data for the node  ";
    cin>>data;
    if(data==-1)
    {
        return nullptr;
    }
    TreeNode* createdNode=new TreeNode;
    createdNode->data=data;
    createdNode->left=buildTree();
    createdNode->right=buildTree();
    return createdNode;
}
void InorderT(TreeNode* root,vector<int> &res)
{
    if(root==nullptr)
    {
        return ;
    }
    InorderT(root->left,res);
    res.push_back(root->data);
    InorderT(root->right,res);

}
vector<int> getInOrderTraversal(TreeNode *root)
{
   vector<int> res;
   InorderT(root,res);
   return res;
}

// forming a tree
int main()
{
  TreeNode* root=buildTree();\
  vector<int> res;
  InorderT(root,res);
  cout<<"inOrder traversal for the Tree"<<endl;
  for(int i=0;i<res.size();i++)
  {
    cout<<res[i]<<" ";
  }
  cout<<endl;
  return 0;
}