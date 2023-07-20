//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    int students(int A[],int N,int M,int p)
    {
        int count=1, pages=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]+pages<=p)
            {
                pages+=A[i];
            }
            else
            {
                count++;
                pages=A[i];
            }
        }
        return count;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {   if(M>N) return -1;
        int low=*max_element(A,A+N);
        int high=0;
        for(int i=0;i<N;i++)
        {
            high+=A[i];
        }
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int count=students(A,N,M,mid);
            if(count>M) low=mid+1;
            else  high=mid-1;
        }
        return low;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends