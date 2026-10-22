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

    Node *head=NULL,*temp,*newnode;
    int i,n;

    cout<<"how many nodes you want to insert"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        newnode= new Node;

        cout<<"enter the value you want to insert"<<endl;
        cin>>newnode->data;

        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
    cout<<"following linked list"<<endl;
    temp=head;

    while(temp!= NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }

}
