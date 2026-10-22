
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL, *temp, *newnode;
    int i, n;

    cout << "How many nodes you want to insert: ";
    cin >> n;

    // Creating the original linked list
    for(i = 0; i < n; i++)
    {
        newnode = new Node;

        cout << "Enter the value: ";
        cin >> newnode->data;

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }

    // Insertion at the beginning
    cout << "Enter value to insert at beginning: ";
    newnode = new Node;
    cin >> newnode->data;

    newnode->next = head;
    head = newnode;

    // Display after insertion at beginning
    cout << "Linked list after insertion at beginning: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Insertion at the end
    newnode = new Node;

    cout << "Enter value to insert at end: ";
    cin >> newnode->data;

    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    // Display updated linked list
    cout << "Linked list after insertion at end: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}
