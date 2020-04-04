//
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int i,val,time,size,input;
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
    cout<<"Enter the number of times value you want to insert : "<<endl;
    cin>>time;
    d.insert(d.begin()+1,time,val);
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}
