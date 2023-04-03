class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        int s3=s1+s2;
        vector<int> nums3;
        int i=0,j=0;
        while(i<s1 && j<s2)
        {
            if(nums1[i]<=nums2[j])
            {
               nums3.push_back(nums1[i]);
                i++;
            }
            else
            {
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<s1)
        {
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<s2)
        { 
            nums3.push_back(nums2[j]);
            j++;
        }
        
        int s=nums3.size();
        cout<<s;
        if(s%2==0)
        {
            return ((((double)nums3[s/2]+(double)nums3[(s/2)-1])/2));
        }
        else
        return (double)(nums3[s/2]);

    }
};