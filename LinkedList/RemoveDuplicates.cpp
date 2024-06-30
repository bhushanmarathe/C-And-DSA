#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
        int data;
        Node* next;

    Node(int data)//constructor to create new node whenever new node is called on line 34
    {
        this -> data = data;
        this -> next = NULL;
    }
    ~Node()
    {
        int value = this->data;

        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void PrintLL(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}






Node* removeDuplicates(Node* head) // For Sorted List
{
    //Node* temp = head;
    Node* curr = head;

    while(curr != NULL)
    {
        if((curr -> next != NULL) && curr ->data == curr->next->data) //  if data is equal
        {
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr ->next = next_next;
           
        }

        else{
            //Not equal
             curr = curr -> next;
        }

    }

    return head;

}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;

    return 0;
}