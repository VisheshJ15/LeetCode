class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0;
        int maxi=1;
    for(int i=0;i<n;i++){
        int left=i;
        int right=i;
        while(left>=0 && right<n && s[right]==s[left]){
            int len=right-left+1;
            if (len > maxi) {
            maxi = len;
            start = left;
}
            left--;
            right++;
        }
         left=i;
        right=i+1;
         while(left>=0 && right<n && s[right]==s[left]){
            int len=right-left+1;
            if (len > maxi) {
            maxi = len;
            start = left;
}
            left--;
            right++;
        }
    }

    return s.substr(start, maxi);
    }
};