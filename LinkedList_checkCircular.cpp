#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node(int data)
    {
        this->data = data;
        this->nxt = NULL;
    }
};
    void insertelement(node *&tail, int element, int data)
    {
        if (tail == NULL)
        {
            node *newnode = new node(data);
            tail = newnode;
            newnode->nxt = newnode;
        }
        else
        {
            node *current = tail;
            while (current->data != element)
            {
                current = current->nxt;
            }
            node *temp = new node(data);
            temp->nxt = current->nxt;
            current->nxt = temp;
        }
    }

    bool iscircular(node *tail)
    {
        if (tail == NULL)
        {
            return true;
        }
        node *temp = tail->nxt;
        while (temp != NULL && temp != tail)
        {
            temp = temp->nxt;
        }
        if (temp == tail)
        {
            return true;
        }
        return false;
    }

    void deletion(node *&tail, int value)
    {
        if (tail == NULL)
        {
            cout << "cannt be deleted" << endl;
            return;
        }
        node *prev = tail;
        node *current = prev->nxt;
        while (current->data != value)
        {
            prev = current;
            current = current->nxt;
        }
        prev->nxt = current->nxt;
        if (current == prev)
        {
            tail = NULL;
        }
        else if (tail == current)
        {
            tail = prev;
        }
        current->nxt = NULL;
        delete current;
    }
    void printlist(node *tail)
    {
        node *temp = tail;
        if (tail == NULL)
        {
            cout << "list is empty" << endl;
            return;
        }
        do
        {
            cout << tail->data << " ";
            tail = tail->nxt;
        } while (tail != temp);

        cout << endl;
    }

    int main()
    {
        node *tail = NULL;
        insertelement(tail, 5, 3);
        printlist(tail);

        insertelement(tail, 3, 6);
        insertelement(tail,6,8);
        printlist(tail);

if(iscircular)
{
    cout<<"circular"<<endl;
}else{
    cout<<"non-circular"<<endl;
}

        return 0;
    }