#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + arr[i]; 
        
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 

int main() 
{
    int t, n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int *arr=new int[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
       
        cout<<maxSubArraySum(arr,n)<<"\n";
}
    
	return 0;
}
