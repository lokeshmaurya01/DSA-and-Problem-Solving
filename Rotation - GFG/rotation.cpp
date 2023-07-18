//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
#include<climits>
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   int l=0,h=n-1,mid;
	   int min=INT_MAX;
	   int index=-1;
	   while(l<=h)
	   {
	       if(arr[l]<=arr[h])
	       {
	           if(arr[l]<min)
	           {    min=arr[l];
	               index=l;
	           }
	           break;
	       }
	       mid=l+(h-l)/2;
	       if(arr[l]<=arr[mid])
	       {
	           if(arr[l]<min)
	           {    min=arr[l];
	               index=l;
	           }
	           l=mid+1;
	       }
	       else
	       {
	           if(arr[mid]<min)
	           {    min=arr[mid];
	               index=mid;
	           }
	           h=mid-1;
	       }
	   }
	   return index;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends