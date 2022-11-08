vector<int> leftView(Node *root)
{
   vector<int>ans;
   queue<Node*>q;
    if(root==NULL){
        return ans;
    }
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=1;i<=size;i++){
            Node* temp=q.front();
            q.pop();
            if(i==1){
                ans.push_back(temp->data);
            }
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            
        }
    }
    return ans;
}
