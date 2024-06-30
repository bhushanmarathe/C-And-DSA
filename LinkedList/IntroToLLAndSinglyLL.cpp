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

    ~Node() //destructor for deleting node 
    {
        int value = this -> data;
        // code for memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with Data : " << value << endl;
    }

};

void insertAtHead(Node* &head, int data)  //inserts only at head i.e starting node
{
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp; 
}

void InsertAtTail(Node* &tail, int data)   //inserts only at tail i.e ending node
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
    //tail = temp; // line 30 and 31 both the statments are correct
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) 
{
    if(position == 1) // insert at start
    {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head; 

    int count = 1;

    while(count < position - 1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head, Node* &tail)
{
    if(position == 1) // delete start or first node
    {
        Node* temp = head;
        head = head -> next;
        //free start node memory 
        temp ->next = NULL;
        delete temp;
        
    }

    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count < position)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        
        // free memory
        curr ->next = NULL;
        delete curr;

        // updating tail after deleting node
        if(prev -> next == NULL)
        {
            tail = prev;
        }
        else
        {
            tail = prev -> next;
        }
    }
}

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

int main()
{
    //created new node
    Node* node1 = new Node(10);

    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    //pointed head to new node
    Node* head = node1;
    Node* tail = node1;
    PrintLL(head);

    //insertAtHead(head, 12);
    InsertAtTail(tail,12);
    PrintLL(head);

    //insertAtHead(head, 15);
    InsertAtTail(tail,15);
    PrintLL(head);

    int position;

    cin >> position;

    insertAtPosition(head, tail, position, 22);
    PrintLL(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail -> data << endl;
    
    deleteNode(4,head, tail);
    PrintLL(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail -> data << endl;

    return 0;
}