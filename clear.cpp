//C++ Deque clear() function removes all the elements from the deque and the size of the deque is reduced to zero.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int i,val,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in deque : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    d.clear();
    cout<<"\nAfter removing element is : ";
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}


