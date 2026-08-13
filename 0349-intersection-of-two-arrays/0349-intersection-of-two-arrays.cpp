class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hs;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            hs.insert(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            if(hs.find(nums2[j])!=hs.end()){
                ans.push_back(nums2[j]);
                hs.erase(nums2[j]);
            }
        }
        return ans;
    }
};