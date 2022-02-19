#include<bits/stdc++.h>

using namespace std;
int c=0;
int general_method(long long int x,long long int n)
{
    int cost=2;
    int p=1;
    for(int i=0;i<n;i++)
        {
            p=p*x;
            cost++;
        }
    cost=cost+2;
    cout<<"cost = "<<cost<<endl;
    return p;
}
int power(long long int x,long long int n)
{
    c++;
    if(n==0)return 1;
    if(n==1)return x;
    int ans=power(x,n/2);
    if(n%2==1)
        return ans*ans*x;
    return ans*ans;

}
int main()
{
    long long int x,n;
    cout<<"enter two values"<<endl;
    cin>>x>>n;
    cout<<general_method(x,n)<<endl;
    
    cout<<power(x,n)<<endl;
    cout<<c<<endl;
    cout<<pow(x,n); // stl
    return 0;
}