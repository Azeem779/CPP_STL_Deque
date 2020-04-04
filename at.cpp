//C++ Deque at() function is used to access the element at specified position pos.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    cout<<"\nElement in deque : ";
    for(i=0;i<d.size();i++)
    {
        cout<<d.at(i)<<" ";
    }
    cout<<"\nElement at position 3: "<<endl;
    cout<<d.at(2);
}

