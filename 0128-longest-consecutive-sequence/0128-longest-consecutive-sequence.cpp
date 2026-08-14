class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hs;
        int longest=0;
        for(int i=0;i<nums.size();i++){
            hs.insert(nums[i]);
        }
        for(int num: hs){
            if(hs.find(num-1)==hs.end()){
                int length=1;
                int current=num;
            while(hs.find(current+1)!=hs.end()){
                current++;
                length++;
            }
            longest=max(longest,length);
        }
        }
        return longest;
    }
};