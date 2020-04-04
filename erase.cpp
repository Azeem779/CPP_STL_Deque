//C++ Deque erase() function removes the element from the specified position or range and this effectively reduces the size of the deque by the number of elements removed.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int > d;
    int i,size,pos,input;
    cout<<"Enter the size of deque : ";
    cin>>size;
    cout<<"Enter the element of deque : ";
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    cout<<"Enter the position where you want to erase value : ";
    cin>>pos;
    d.erase(d.begin()+pos-1);
    cout<<"After erasing the deque is : ";
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}
