#include<iostream>
using namespace std;

int main()
{
    int q[5],rear=-1,front=-1;
    int choice,value;

    do
    {
        cout<<"1.inserton "<<endl;
        cout<<" 2.deletion"<<endl;
        cout<<"3.display "<<endl;
        cout<<"4.exit "<<endl;

        cout<<"enter choice"<<endl;
        cin>>choice;


        switch(choice)
        {
        case 1:
            {
                if(rear==4)
                {
                    cout<<"the queue is full"<<endl;

                }
                else
                {
                    cout<<"enter the value"<<endl;
                    cin>>value;

                    if(front==-1)
                    {
                        front=0;
                    }
                    rear++;
                    q[rear]=value;
                }
                break;
            }
        case 2:
            {

                if(front==-1)
                {
                    cout<<"the queue is empty"<<endl;
                }
                else
                {
                    cout<<"deleted element "<<q[front]<<endl;

                    front++;
                    if(front>rear)
                    {
                        front=rear=-1;
                    }
                }
                break;
            }
        case 3:
            {
                if(front==-1)
                {
                    cout<<"queue is empty"<<endl;
                }
                else
                {
                    for(int i=front;i<=rear;i++)
                    {
                        cout<<q[i]<<" ";
                    }
                    cout<<endl;
                }
                break;
            }
        case 4:
            {
                cout<<"exit"<<endl;
                break;
            }
        }
    }while(choice not_eq 4);
}
