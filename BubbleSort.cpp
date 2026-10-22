#include<iostream>
using namespace std;

int main()
{
    int a[20],n,i,j,temp;

    cout<<"enter how many elements you want to enter"<<endl;
    cin>>n;

    cout<<"enter pls"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<"sorted array is"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
