//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int nums[], int n)
{
    
        int ans;
        int sum=((n)*(n+1))/2;
        int sum1=0;
        for(int i=0;i<n-1;i++)
        {
            sum1=sum1+nums[i];
        }
        ans=sum-sum1;
        return ans;

}