#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
void insertionAtAnyPos(Node *&head, int data, int pos)
{
    Node *newNode = new Node(data);
    if (head == NULL || pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    int totallen = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        ++totallen;
    }
    cout << totallen << endl;
    if (pos > totallen)
    {
        cout << "Invalid Postition" << endl;
        return;
    }
    int count = 1;
    temp = head;
    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        ++count;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deletion(Node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    int totallen = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        ++totallen;
        temp = temp->next;
        
    }
   
    if (pos > totallen)
    {
        cout << "Invalid Postition" << endl;
        return;
    }
    int count = 1;
    temp = head;
    while (count < pos-1  && temp != NULL)
    {
        temp = temp->next;
        ++count;
    }
  Node* nodeToDelete=temp->next;
  temp->next=temp->next->next;
  delete(nodeToDelete);

}
int main()
{
    // Node* head=new Node(5);
    Node *head = NULL;
    insertAtHead(head, 6);
    insertAtHead(head, 2);
    insertAtHead(head, 5);
    insertionAtAnyPos(head, 10, 2);
    // insertionAtAnyPos(head,30,2);
    display(head);
    cout << endl;
    cout << "After deletion" << endl;
    deletion(head, 3);
    display(head);
    return 0;
}