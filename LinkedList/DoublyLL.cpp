#include<bits/stdc++.h>

using namespace std;

class Node {

    public:
        int data;
        Node* next;
        Node* prev;

    Node(int d) //constructor
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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

void printDLL(Node* &head)  //Traversing a LL
{
    Node* temp = head;

    while(temp !=  NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}

int getLength(Node* head) // Returns Length Of LL
{
    Node* temp = head;
    int length = 0;

    while(temp !=  NULL)
    {
        length++;
        temp = temp -> next;
    }

    return length;
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL)
    {
         Node* temp = new Node(data);
         head = temp;
         tail = temp;
    }

    else
    {
        Node* temp = new Node(data);

        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}

void insertAtTail(Node* &tail, Node* &head, int data)
{
    if(tail == NULL)
    {
         Node* temp = new Node(data);
         head = temp;
         tail = temp;
    }

    else
    {
        Node* temp = new Node(data);

        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
  
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertAtHead(head, tail,data);
        return;
    }

     Node* temp = head;

     int count = 1; 

     cout << count << " " << position << endl;

    while(count < position - 1);
    {
        printf("########################\n", position);
        temp = temp -> next;
        count++;
        printf("########################3\n");
    }

    printf("########################7\n");

    if(temp -> next == NULL)
    {
        insertAtTail(tail,head, data);
        return;
    }


    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* &head, Node* &tail)
{
    if(position == 1) // delete start or first node
    {
        Node* temp = head;
        temp -> next->prev = NULL;
        head = temp -> next; // First assign the next and then delete
        temp -> next = NULL;
        //free start node memory  
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

        curr ->prev = NULL;
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

int main()
{
    //Node* node1 = new Node(15);

    Node* head = NULL;
    Node* tail = NULL;

    printDLL(head);

    //  cout << "Length : " << getLength(head) << endl;

    insertAtHead(head,tail, 14);

    insertAtHead(head, tail, 13);

    insertAtHead(head, tail, 12);

    insertAtHead(head, tail, 11);

    insertAtHead(head, tail, 10);

    insertAtTail(tail, tail, 16);

    printDLL(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    deleteNode(6, head, tail);

    printDLL(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    

    return 0;
}