//C++ Deque pop_front() function removes the first element from the deque and the size of the container is reduced by one.
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
    d.pop_front();
    cout<<"Element after popping in the deque is : ";
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}

