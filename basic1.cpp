#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
        
    return 0;
}