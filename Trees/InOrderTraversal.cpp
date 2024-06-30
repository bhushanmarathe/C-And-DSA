#include<bits/stdc++.h>

using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;

    Node(int d)
    {
        this->data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout << "Enter data : ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1)
        return NULL;
    
    cout << "Enter data for inserting in left of : " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of : " << data << endl;
    root->right = buildTree(root->right);
}



void inorderTraversal(Node* root)
{
    if(root == NULL) //base case
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    Node* root = NULL;

    root = buildTree(root); // i/p = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Inorder Traversal : " << endl;
    inorderTraversal(root);
    
    return 0;
}