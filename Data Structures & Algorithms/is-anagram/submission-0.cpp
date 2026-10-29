class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)
            return false;
        
        map<char,int> freq1;
        map<char,int> freq2;

        for(int i=0;i<n1;i++){
            freq1[s[i]]++;
        }
        for(int i=0;i<n2;i++){
            freq2[t[i]]++;
        }
        return freq1 == freq2;
        return true;
    
    }
};

