#include<iostream>
using namespace std;
int main()
{

    int a[10],i,n,pos;

    cout<<"enter the number of elements"<<endl;
    cin>>n;

    cout<<"pls enter"<<endl;

    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }

    cout<<"array before deletion"<<endl;

    for(i=0;i<n;i++)
    {

        cout<<"position "<<i<<" "<<a[i]<<endl;
    }

    cout<<"enter the positon you want to delete pls enter"<<endl;
    cin>>pos;

    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];

    }
    n--;

    cout<<"array after deletion"<<endl;

    for(i=0;i<n;i++)
    {

        cout<<"position "<<i<<" "<<a[i]<<endl;
    }

}
