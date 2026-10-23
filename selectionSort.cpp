#include<iostream>
using namespace std;


int main()
{
    int a[5],i,j,minIndex,temp;
    cout<<"pls enter the numbers bro"<<endl;


    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<4;i++)
    {
        minIndex=i;
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;

        cout<<"pass "<<i+1<<":";
        for(int k=0;k<5;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;

    }
    //displaying the array

    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
