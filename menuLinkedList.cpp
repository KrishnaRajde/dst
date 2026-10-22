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
    int choice;


    do
    {
        cout<<"1.insert at beginning"<<endl;
        cout<<"2.insert at end"<<endl;
        cout<<"3.display linked list"<<endl;
        cout<<"4.exit"<<endl;

        cout<<"enter choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                newnode=new Node;
                cout<<"enter the data you want to insert"<<endl;
                cin>>newnode->data;
                newnode->next=head;
                head=newnode;
                break;
            }
        case 2:
            {
                newnode=new Node;
                cout<<"enter the value you want to insert"<<endl;
                cin>>newnode->data;
                newnode->next=NULL;

                if(head==NULL)
                {
                    head=newnode;
                }
                else
                {
                    temp=head;
                    while(temp->next !=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=newnode;
                }
                break;
            }
        case 3:
            {
                if(head==NULL)
                {
                    cout<<"the list is empty"<<endl;
                }
                else
                {

                    temp=head;

                    while(temp != NULL )
                    {
                        cout<<temp->data<<" ";
                        temp=temp->next;
                    }
                }
                break;

            }

        case 4:
            {
                cout<<"exiting the program"<<endl;
                break;

            }
        }
    }while(choice !=4);


}
