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


void levelOrderTraversal(Node* root)
{
    queue<Node*> q;

    q.push(root);
    q.push(NULL); //seperator indicating that 1st level is complete

    while(!q.empty())
    {
        Node* temp = q.front();
        
        q.pop();

        if(temp == NULL) //purana level traverse ho chuka hai
        {
            cout << endl;

            if(!q.empty()) //queue still has child node
            {
                q.push(NULL);
            }
            
        }

        else
        {   
            cout << temp->data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }

        
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

       
    }
}



int main()
{
    Node* root = NULL;

    root = buildTree(root); // i/p = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Level Order Traversal : " << endl;
    levelOrderTraversal(root);

    return 0;
}