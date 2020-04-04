//C++ Deque empty() function checks whether the container is empty or not. If the container is empty, it returns 1 otherwise 0.
#include<iostream>
#include<deque>'
using namespace std;
int main()
{
    deque<int> d;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter element in deque : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    if(d.empty())
    {
        cout<<"\nDeque is empty.\n";
    }
    else
    {
        cout<<"\nDeque is not empty.";
    }
}

