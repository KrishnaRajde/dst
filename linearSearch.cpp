#include<iostream>
using namespace std;

int main()
{

    int a[10],key,i,n,found=0;

    cout<<"enter the number of elements"<<endl;
    cin>>n;

    cout<<"enter pls"<<endl;

    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }

    cout<<"enter the number you want to find"<<endl;
    cin>>key;

    for(i=0;i<n;i++)
    {

        if(a[i]==key)
        {
            cout<<"element found at index "<<i<<endl;
            found=1;
            break;

        }
    }

    if(found==0)
    {

        cout<<"element not found"<<endl;
    }
}
