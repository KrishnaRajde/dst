#include<iostream>
using namespace std;

int main()
{
    int Stack[5],top=-1;
    int choice,i,value;

    do
    {
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cin>>choice;

    switch(choice)
    {
    case 1:
        {
            if(top==4)
            {
                cout<<"stack overflow"<<endl;
            }
            else{
            cout<<"enter the element you want to push pls"<<endl;
            cin>>value;
            top++;
            Stack[top]=value;
            cout<<"element inserted successfully"<<endl;
            }

            break;
        }
    case 2:
        {
            if(top==-1)
            {
                cout<<"stack underflow"<<endl;
            }
            else
            {
                cout<<"deleted element: "<<Stack[top]<<endl;
                top--;
            }
            break;
        }
    case 3:
        {
            if(top==-1)
            {
                cout<<"stack is empty pls check"<<endl;
            }
            else{
                for(i=top;i>=0;i--)
                {
                    cout<<Stack[i]<<endl;
                }
            }
            break;
        }
    case 4:
        {
            cout<<"exiting the program"<<endl;
            break;
        }
    default:
        cout<<"invalid choice pls check"<<endl;
    }
   }while(choice not_eq 4);
}
