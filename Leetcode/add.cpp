#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"How many number do you want to add :) = ";
    int n;
    cin>>n;

    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

    cout<<"the sum of number you have entered in equal = "<<sum;
    cin>>sum;

    return 0;
}