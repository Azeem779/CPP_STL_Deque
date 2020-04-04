//C++ Deque size() function determines the number of elements present in the deque container.
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
    int n=d.size();
    cout<<"Size of the deque is : "<<n;
}
