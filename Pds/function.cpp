#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return false;
	}
	if(n==0 || n==1) return false;
	return true;
}

bool sumoftwoprimes(int x)
{
	for(int i=2;i<=x;i++)
	{
		if(isprime(i) && isprime(x-i))
		{
			cout<<endl<<i<<"+"<<x-i<<endl;
			return true;
		}
	}
	return false;
}

int arraysum2p(int a, int b, int n, int X[])
{
	int k=0;
	for(int i=a;i<=b;i++)
	{
		if(sumoftwoprimes(i))
		{
			X[k]=i;
			k++;
		}
	}
	k=0;
	while(X[k])
	{
		k++;
	}
	
	return k;
}

 int main()
 {
 	int X[100], a, b, k=0;
 	cout<<"Enter two numbers ";
 	cin>>a>>b;
 	arraysum2p(a, b, 100, X);
 	while(X[k])
    {
       cout<<X[k]<<" ";
       k++;
	} 
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
