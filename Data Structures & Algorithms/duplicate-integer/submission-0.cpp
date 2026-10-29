class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m; //key,freq
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[nums[i]]>1)
                return true;

        }
        return false;
    }
};