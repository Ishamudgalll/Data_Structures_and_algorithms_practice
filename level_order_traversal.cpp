void levelOrder(Node *root) 
{
    queue<Node *> q;
 q.push(root);
 
 while(q.empty()==false)
 {
     Node *curr=q.front();
     q.pop();
     cout<<curr->data<<" ";
     if(curr->left!=NULL)
     q.push(curr->left);
     if(curr->right!=NULL)
     q.push(curr->right);
    //Your code here
} 
}
