//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int nums[],int n){
        int sp=0;
        int fp=0;
        int count =0;
        int cur=nums[0];
        while(fp<n)
        {
            if(nums[fp]!=cur)
            {   sp++;
                nums[sp]=nums[fp];
                
                cur=nums[sp];
                count++;
            }
            fp++;
        }
        return count+1;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends