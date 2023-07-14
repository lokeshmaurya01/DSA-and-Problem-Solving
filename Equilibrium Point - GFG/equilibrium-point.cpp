//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
            return 1;
        if(n==2) return -1;
        long int sum1=0,sum2=0,sum=0;
        int ind=1;
        for(int i=0;i<n;i++)
        {
           sum=sum+a[i];
        }
        sum1=a[0];
        sum2=sum-a[0]-a[1];
        while(ind<n)
        { 
            if(sum1==sum2)
                return ind+1;
            sum1+=a[ind];
            sum2-=a[ind+1];
            ind++;
            
        }
        return -1;
        
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends