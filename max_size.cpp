//C++ Deque max_size() function is a built in function that returns the maximum number of elements that deque container can hold
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int i,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in deque : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    cout<<"\nMax size of deque is : "<<d.max_size();
}
