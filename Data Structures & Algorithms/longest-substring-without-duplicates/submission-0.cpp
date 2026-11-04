class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0;
       int maxLen=0;
       unordered_set<char> charSet;

       for(int right=0;right<s.size();right++){
        while(charSet.find(s[right])!=charSet.end()){
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLen=max(right-left+1,maxLen);
       }
       return maxLen;
    }
};
