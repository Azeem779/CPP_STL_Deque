//C++ Deque pop_back() function removes the last element from the the deque container and the size of the deque is reduced by one.
#include<iostream>
#include<deque>
using namespace std;
main()
{
    deque<int> d;
    int i,size,input;
    cout<<"Enter the size of Deque : ";
    cin>>size;
    cout<<"Enter element in deque : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    d.pop_back();
    cout<<"Element after popping in the deque is : ";
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}
