#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    cout<<"hello "<<s<<endl;
    int a[n];
    vector<int> c;
    
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        c.push_back(temp);
    }
    for(int i=0;i<n;i++)cout<<c[i]<<" ";
    cout<<endl;

    reverse(c.begin(),c.end());
    for(int i=0;i<n;i++)cout<<c[i]<<" ";

    
    // cout<<c[0]<<" "<<c.size()<<endl;
    
    // cout<<c[0]<<" "<<c.size()<<endl;
    
    //  for(char x:s)
    //      cout<<x<<" ";
    
    // for(int i=0;i<n;i++)
    //     cin>>a[i];
    // sort(a,a+n);
    // cout<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" ";
}