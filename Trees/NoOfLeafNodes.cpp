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


int noOfLeafNodes(Node* root) //using recursion
{
    if(root == NULL)
    {
        return 0;
    }

    else if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    return noOfLeafNodes(root->left) + noOfLeafNodes(root->right);
}

void inorderTraversal(Node* root, int &count) //Using any traversal method
{
    if(root == NULL)
    {
        return;
    }

    inorderTraversal(root -> left, count);

    if(root->left == NULL && root->right == NULL) //for leaf nodes
    {
        count++;
    }

    inorderTraversal(root->right, count);

}




int main()
{
    Node* root = NULL;

    root = buildTree(root); // i/p = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "No Of leaf nodes with recursion: " << noOfLeafNodes(root) << endl;

    int count = 0;

    inorderTraversal(root,count);

    cout << "No Of leaf nodes using traversal method: " << count << endl;
    return 0;
}
