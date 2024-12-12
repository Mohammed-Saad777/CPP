#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{

public:

    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){

        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;

}

void preOrder(Node *root){ //root, left, right
    
    if(root == NULL){
        return ;
    }
    //root
    cout<<root->data<<" ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
}

void inorder(Node *root){ 

    if(root == NULL)
    {
        return;
    }

    //left
    inorder(root->left);
    //root
    cout<<root->data<<" ";
    //right
    inorder(root->right);
}

void postOrder(Node *root){

    if(root == NULL){
        return;
    }

    //left
    postOrder(root->left);
    //right
    postOrder(root->right);
    //root
    cout<<root->data<<" ";
}

void levelOrder(Node *root){
    if(root == NULL)
    {
        return;
    }

    queue<Node*> Q;

    Q.push(root);

    while(!Q.empty())
    {
        Node *curr = Q.front();
        Q.pop();

        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            Q.push(curr->left);
        }

         if(curr->right!=NULL){
            Q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    cout<<"root = "<<root->data<<endl;
    cout<<"preorder = ";
    preOrder(root);
    cout<<endl;
    
    cout<<"inorder = ";
    inorder(root);
    cout<<endl;

    cout<<"postorder = ";
    postOrder(root);
    cout<<endl;
    
    cout<<"level order traversel ";
    levelOrder(root);
    return 0;
}