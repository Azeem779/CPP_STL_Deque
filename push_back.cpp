//C++ Deque push_back() function adds a new element at the end of the deque container and the size of the container is increased by one.
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
    cout<<"Element in the deque is : ";
    for(i=0;i<size;i++)
    {
        cout<<d[i]<<" ";
    }
}
