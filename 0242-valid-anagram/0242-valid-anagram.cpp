class Solution {
public:
    bool isAnagram(string s, string t) {
            unordered_map<char, int> mp1;
            if (s.size() != t.size())
                 return false;
                for (char c : s) {
                     mp1[c]++;
                }
                for (char c : t) {
                     mp1[c]--;
                     if (mp1[c]==0){
                        mp1.erase(c);
                     }
                }
                if(mp1.empty()){
                    return true;
                }
                return false;
    }
};