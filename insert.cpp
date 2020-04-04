//C++ Deque insert() function inserts new element just before the specified position pos and the size of the container increases by the number of elements are inserted. Insertion of an element can be done either from front or from the back
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
    cout<<"Enter the value you want to insert : "<<endl;
    cin>>val;
    d.insert(d.begin()+1,val);
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}
