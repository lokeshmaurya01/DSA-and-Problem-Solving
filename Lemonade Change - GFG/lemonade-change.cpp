//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        map<int,int> m;
        for(int i=0;i<N;i++)
        {   if(bills[i]==5)
            {
                m[5]++;
            }
            if(bills[i]==10)
            {
                if(m[5]==0)
                {
                    return false;
                }
                else
                {
                    m[5]--;
                    m[10]++;
                }
            }
            if(bills[i]==20)
            {
                if(m[5]>0 && m[10]>0)
                {
                    m[5]--;
                    m[10]--;
                    m[20]++;
                }
                else if(m[5]>=3 && m[10]==0)
                {
                    m[5]=m[5]-3;
                    m[20]++;
                }
                else
                {
                    return false;
                }
            }
            
            
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends