//C++ Deque swap() function exchanges the content of a given deque with the deque passed in the parameter of same type.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d1,d2;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter element in first deque : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        d1.push_back(input);
    }
    cout<<"\nElement in deque first : "<<endl;
    for(i=0;i<d1.size();i++)
    {
        cout<<d1[i]<<" ";
    }
    cout<<"\nEnter element in second deque : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        d2.push_back(input);
    }
    cout<<"\nElement in deque second : "<<endl;
    for(i=0;i<d2.size();i++)
    {
        cout<<d2[i]<<" ";
    }
    cout<<"\n";
    d1.swap(d2);
    cout<<"\nAfter swapping element in deque first : "<<endl;
    for(i=0;i<d1.size();i++)
    {
        cout<<d1[i]<<" ";
    }
    cout<<"\nAfter swapping element in deque second : "<<endl;
    for(i=0;i<d2.size();i++)
    {
        cout<<d2[i]<<" ";
    }
}
