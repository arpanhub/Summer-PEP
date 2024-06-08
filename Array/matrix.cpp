#include <iostream>
#include <vector>
using namespace std;
bool search(vector<vector<int>> v,int n)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j] == n){
                cout<<"Number found at index "<<i<<","<<j;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter number to search:";
    int n;
    cin>>n;
    if(search(v,n))
    {
        cout<<"Number found";
    }
    else
    {
        cout<<"Number not found";
    }
}