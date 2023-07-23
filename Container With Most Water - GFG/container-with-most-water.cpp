//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++
#include<climits>
long long maxArea(long long height[], int len)
{
    long long *arr=&height[0];
        int l=0,r=len-1;
        long long maxi=0;
        while(l<r)
        {
            int len=r-l;
            long long m=min(height[l],height[r]);
            long long int area=m*len;
            maxi=max(maxi,area);
            if(arr[l]==arr[r])
                l++;
            if(arr[l]<arr[r]) l++;
            else
            r--;
        }
        return maxi;
    
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends