#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll n, ll k)
{
    if (k == 0)
        return n;
    return gcd(k, n % k); 
     
}

int main()
{
	ll n,k;
	
	cin>>n>>k;
	
	ll arr[n];
	
	for(ll i=0; i<n; i++)
	{
	  cin>>arr[i];
	}
	
	ll gcdd=gcd(n,k);
	
	for(ll i=0; i<gcdd; i++)
	{
		ll j=i;
		ll temp=arr[i];
		
		while(1)
		{	
		  ll d=(j+k)%n;
		  if(d==i)
		  {
		  	break;
		  }
		  else
		  {
		  	arr[j]=arr[d];
		  	j=d;
		  }		
        }
        arr[j]=temp;
	}
	
	for(ll i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
		
	return 0;
}
