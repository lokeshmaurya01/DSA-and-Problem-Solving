class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        if(n==2) return 1;
        int n0=0,n1=1,n2=1;
        int ans=0;
        for(int i=3;i<=n;i++){
            ans=n0+n1+n2;
            n0=n1;
            n1=n2;
            n2=ans;
        }
        return ans;
    }
};