class Solution {
public:
#include <vector>
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(j>=0){
            if (i<0){
                for(k;k>=0;k--,j--){
                    nums1[k]=nums2[j];
                }
            }
            else if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                k--;i--;
            }
            else if(nums1[i]<=nums2[j]){
                nums1[k]=nums2[j];
                k--;j--;
            }
        }
    }
};
//*********************important    LEETCODE PROBLEM NO 83.
//******************** important    LEETCODE PROBLEM NO 42 