
void serialize(Node *root,vector<int> &A)
{
    
    if(root==NULL){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}

Node* deSerialize(vector<int> &A ,int &ind){
    if(ind>=A.size()) return NULL;
    if(A[ind]==-1){
        ind++;
        return NULL;
    }
    Node* root = new Node();
   root->data = A[ind];
   ind++;
   root->left=deSerialize(A,ind);
   root->right=deSerialize(A,ind);
}
 
Node * deSerialize(vector<int> &A)
{
   
   int n=A.size();
   if(n==0||A[0]==-1) return NULL;
   int ind=0;
   Node* root = deSerialize(A,ind);
   return root;
}