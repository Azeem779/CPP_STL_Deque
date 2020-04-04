//This function assigns new values to the deque and replacing the old ones.
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
    deque<int> d1;
    d1.assign(d.begin()+1,d.end()-1);
    cout<<"Element of the vector1 is : "<<endl;
    for(int i=0;i<d1.size();i++)
    {
        cout<<d1[i]<<" ";
    }
}


