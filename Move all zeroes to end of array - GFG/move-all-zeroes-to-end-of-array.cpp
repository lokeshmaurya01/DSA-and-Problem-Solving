//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int nums[], int n) {
        int i=0,j=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                break;
            }
        }
        j=i+1;
        while(j<n)
        {
            if(nums[j]!=0)
            {
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        while(i<n)
        {
            nums[i]=0;
            i++;
        }

	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends