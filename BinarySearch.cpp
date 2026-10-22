#include<iostream>
using namespace std;

int main()
{
    int a[10],i,n,key;
    int low,high,mid,found=0;

    cout<<"enter how many elements you want to enter"<<endl;
    cin>>n;

    cout<<"enter pls"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"enter the element you want to find"<<endl;
    cin>>key;

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {

            cout<<"element found at index "<<mid<<endl;
            found=1;
            break;
        }
        else if(a[mid]>key)
        {
                high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    if(found==0)
    {
        cout<<"element not found"<<endl;
    }
}
