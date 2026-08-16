class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(i==j){
                return nums[mid];
            }
            else if(nums[mid]>nums[j]){
                    i=mid+1;
                    }
            else if(nums[mid]==nums[j]){
                    j--;
             }
            else{
                    j=mid;
                }
            }
        return nums[i];
    }
};