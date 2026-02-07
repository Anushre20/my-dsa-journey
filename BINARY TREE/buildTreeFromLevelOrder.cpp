#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter the value of data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter the value of left child: "<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the value of right child: "<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void buildTreefromLevelOrd(node* &root){
    queue<node*> q;
    cout<<"enter the value of root node: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"enter value of left node for "<<temp->data<<": "<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"enter the value for right node for "<<temp->data<<": "<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;
    // root = buildTree(root);
    buildTreefromLevelOrd(root);
    cout<<"printing the level order traversal: "<<endl;
    levelOrder(root);
    // cout<<"printing the inorder traversal: "<<endl;
    // inorder(root);
    // cout<<"printing the preorder traversal: "<<endl;
    // preorder(root);
    // cout<<"printing the postorder traversal: "<<endl;
    // postorder(root);
    return 0;
}
