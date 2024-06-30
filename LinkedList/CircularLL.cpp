#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = data;

        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory free for node with data : " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int data) 
{
    if(tail == NULL) //list is empty
    {
        Node* newNode = new Node(data);
        {
            tail = newNode;
            newNode -> next = newNode;
        }
    }
    
    else
    {
        //non-empty  list
        //assuming that the element is present in the list

        Node* curr = tail;

        while (curr ->data != element)
        {
            /* code */
            curr = curr->next;
        }

        //element found -> curr representing the element
        Node* temp = new Node(data);

        temp->next = curr->next;
        curr->next = temp;
        
        
    }
}

void printCLL(Node* &tail)
{
    Node* temp = tail;

    if(tail == NULL) //empty list
    {
        cout << "List is empty";
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail -> next;
    } while (temp != tail);

    cout << endl;
    
}

void deleteNode(Node* &tail, int value)
{
    if(tail == NULL) //empty list
    {
        cout << "List is empty";
        return;
    }

    else
    {
        //non-empty
        // assuming that value is present in the list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr->data != value)
        {
            prev = curr;
            curr = curr -> next;
        }   

        prev -> next = curr->next; 

        if(curr == prev) // for only single node
        {
            tail = NULL;
        }

        else if(tail == curr)   // for 2 or more nodes
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    //printCLL(tail);

     insertNode(tail, 3, 5);
     printCLL(tail);

    // insertNode(tail, 5, 7);

    // insertNode(tail, 7, 8);

    // insertNode(tail, 5, 6);

    // insertNode(tail, 3, 4);

    // insertNode(tail, 8,9);

    // insertNode(tail,9,10);
    // printCLL(tail);

    // deleteNode(tail, 6);
    deleteNode(tail, 3);
    printCLL(tail);

    //cout << "Tail : " << tail << endl;

    return 0;
}