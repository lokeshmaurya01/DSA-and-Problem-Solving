class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        int count=0;
        int n=nums.size();
        for(j=0;j<n;j++){
            if(j==0|| nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                i++;
                count++;
            }
        }
        return count;
        
    }
};