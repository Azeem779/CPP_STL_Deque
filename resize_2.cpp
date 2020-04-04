//C++ Deque resize() function changes the size of the deque container to the size given in the argument.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int i,n_val,s_val,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in deque : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    cout<<"Enter the value you want as size : "<<endl;
    cin>>s_val;
    cout<<"Enter the value you want to insert : "<<endl;
    cin>>n_val;
    d.resize(s_val,n_val);
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}
