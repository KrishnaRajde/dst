#include<iostream>
using namespace std;

int main()
{
    int a[10],n,pos,value,i;

    cout<<"enter the number of elements you want to enter:"<<endl;
    cin>>n;
    cout<<"enter the values pls "<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array before insertion"<<endl;

    for(i=0;i<n;i++)
    {

        cout<<"position "<<i<<" "<<a[i]<<endl;
    }

    cout<<"enter the position at which you want to insert"<<endl;
    cin>>pos;

    cout<<"Enter the value pls"<<endl;
    cin>>value;

    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }

    a[pos]=value;
    n++;
    cout<<"array after insertion"<<endl;

    for(i=0;i<n;i++)
    {

        cout<<"position "<<i<<" "<<a[i]<<endl;
    }


}
