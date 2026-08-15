class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> answer;
        int i=0;
        int j=n-1;
        int ans=-1;
        while(i<=j){
            int med=i+(j-i)/2;
            if(target>nums[med]){
                i=med+1;
            }
            else if(target<nums[med]){
                j=med-1;
            }
            else if(target==nums[med]){
                ans=med;
                j=med-1;
            }
        }
        answer.push_back(ans);
         i=0;
         j=n-1;
         while(i<=j){
            int med=i+(j-i)/2;
            if(target>nums[med]){
                i=med+1;
            }
            else if(target<nums[med]){
                j=med-1;
            }
            else if(target==nums[med]){
                ans=med;
                i=med+1;
            }
    }
    answer.push_back(ans);
    return answer;
    }
};