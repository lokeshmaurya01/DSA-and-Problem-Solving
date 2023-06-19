//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        int front=0;
        int rear=N+1;
        int f=0;
        int size=N;
        int ans=0;
        while(true)
        {
            if(size<=k)
            {
                if(f==0)
                {
                   ans= rear-1; 
                   break;
                }
                else
                {
                    ans= front+1;
                    break;
                }
            }
            if(size>k && f==0)
            {
                front=front+k;
                size=size-k;
                f=1;
                continue;
            }
            if(size>k && f==1)
            {
                rear=rear-k;
                size=size-k;
                f=0;
                continue;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends