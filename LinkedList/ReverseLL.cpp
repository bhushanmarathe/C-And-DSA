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



void reverseLL(Node* &head) //Iterative Approach
{
    if(head == NULL || head -> next == NULL)
    {
        return;
    }
    Node* prev = NULL;  
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
}


//Find Middle Of LL

int getLength(Node* head)
{
    Node* temp = head;
    int length = 0;

    while(temp != NULL)
    {
        length++;
        temp = temp ->next;
    }

    return length;
}

Node* getMiddle(Node* head)
{
    int length = getLength(head);

    int ans = (length / 2);

    Node* temp = head;
    int count = 0;

    while(count < ans )
    {
        temp = temp -> next;
        count++;
    }

    return temp;
}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;

    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    insertAtHead(head,10);

    PrintLL(head);

    reverseLL(head);

    PrintLL(head);

    return 0;
}