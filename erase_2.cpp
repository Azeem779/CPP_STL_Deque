////C++ Deque erase() function removes the element from the specified position or range and this effectively reduces the size of the deque by the number of elements removed.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int i,pos1,pos2,size,input;
    cout<<"Enter the size : ";
    cin>>size;
    cout<<"Enter the element in vector : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>input;
        d.push_back(input);
    }
    cout<<"Enter the starting position you want to erase : "<<endl;
    cin>>pos1;
    cout<<"Enter the Ending position you want to erase : "<<endl;
    cin>>pos2;
    d.erase(d.begin()+pos1-1,d.begin()+pos2-1);
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
}
