class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<=high){
        long long hours=0;
        int k = low + (high - low) / 2;
        for(int i=0;i<piles.size();i++){
            hours+=ceil((double)piles[i]/k);
        }
            if(hours>h){
                low=k+1;
            }
            else{
                high=k-1;
            }
        }
        return low;
    }
};